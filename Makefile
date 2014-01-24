CXX = g++
CC = cc
CXXFLAGS = -Wall -Wextra -std=c++0x -O2 -fomit-frame-pointer -ftree-vectorize -floop-block -floop-interchange -fopenmp -fPIC
CXXFLAGS += -msse2 -msse3 -mssse3 -msse4a 
CFLAGS = -Wall -Wextra -O2 -fomit-frame-pointer -ftree-vectorize -floop-block -floop-interchange -fopenmp -fPIC
CFLAGS += -msse2 -msse3 -mssse3 -msse4a 
# add these for more speed! (if your cpu can do them)
#-msse2avx -msse4a -msse4.1 -msse4.2 -mavx 
#CXXFLAGS = $(CFLAGS)
#CXXFLAGS += -std=c++0x

OSVERSION := $(shell uname -s)
#LIBS = -lcrypto -lssl -pthread

ifeq ($(OSVERSION),Linux)
	LIBS += -lrt
	CFLAGS += -march=native
	CXXFLAGS += -march=native
endif

ifeq ($(OSVERSION),FreeBSD)
	CXX = clang++
	CC = clang
	CFLAGS += -DHAVE_DECL_LE32DEC
	CXXFLAGS += -DHAVE_DECL_LE32DEC
endif

# You might need to edit these paths too
#LIBPATHS = -L/usr/local/lib -L/usr/lib
#INCLUDEPATHS = -I/usr/local/include -I/usr/include -IxptMiner/includes/

ifeq ($(OSVERSION),Darwin)
	GOT_MACPORTS := $(shell which port)
ifdef GOT_MACPORTS
	LIBPATHS += -L/opt/local/lib
	INCLUDEPATHS += -I/opt/local/include
endif
endif

PROG= xptminer
LIB=
LINKLIB=pcompress
MAINSRCS = xptMiner/ticker.cpp \
	xptMiner/main.cpp \
	xptMiner/sha2.cpp \
	xptMiner/xptClient.cpp \
	xptMiner/protosharesMiner.cpp \
	xptMiner/primecoinMiner.cpp \
	xptMiner/keccak.c \
	xptMiner/metis.c \
	xptMiner/shavite.c \
	xptMiner/metiscoinMiner.cpp \
	xptMiner/scrypt.cpp \
	xptMiner/scryptMinerCPU.cpp \
	xptMiner/xptClientPacketHandler.cpp \
	xptMiner/xptPacketbuffer.cpp \
	xptMiner/xptServer.cpp \
	xptMiner/xptServerPacketHandler.cpp \
	xptMiner/transaction.cpp \
#	xptMiner/utils/utils.c xptMiner/utils/heap.c xptMiner/utils/cpuid.c 
	
MAINHDRS = xptMiner/ticker.h  xptMiner/global.h \
	xptMiner/algorithm.h xptMiner/scrypt.h \
	xptMiner/sha2.h xptMiner/sph_keccak.h \
	xptMiner/sph_metis.h xptMiner/sph_shavite.h \
	xptMiner/utils/cpuid.h xptMiner/utils/utils.h xptMiner/utils/heap.h
	
MAINOBJS = $(MAINSRCS:.c=.o)

PROGSRCS = xptMiner/main.cpp
PROGHDRS = xptMiner/global.h xptMiner/utils/utils.h
PROGOBJS = $(PROGSRCS:.c=.o)

XSALSA20_STREAM_C = crypto/xsalsa20/stream.c
XSALSA20_STREAM_ASM = crypto/xsalsa20/stream.s
XSALSA20_DEBUG = -DSALSA20_DEBUG
	
JHLIB = xptMiner/jhlib.o 

CRYPTO_SRCS = crypto/aes/crypto_aes.c crypto/scrypt/crypto_scrypt-nosse.c \
	crypto/scrypt/sha256.c crypto/scrypt/crypto_aesctr.c crypto/crypto_utils.c \
	crypto/sha2_utils.c crypto/sha3_utils.c crypto/xsalsa20/xsalsa20_xor.c \
	crypto/xsalsa20/hsalsa_core.c 
CRYPTO_HDRS = crypto/crypto_utils.h crypto/scrypt/crypto_scrypt.h \
	crypto/scrypt/sha256.h crypto/scrypt/crypto_aesctr.h crypto/aes/crypto_aes.h \
	crypto/sha2_utils.h crypto/sha3_utils.h crypto/xsalsa20/crypto_core_hsalsa20.h \
	crypto/xsalsa20/crypto_stream_salsa20.h crypto/xsalsa20/crypto_xsalsa20.h \
	$(MAINHDRS)
CRYPTO_ASM_SRCS = crypto/aes/vpaes-x86_64.s crypto/aes/aesni-x86_64.s $(XSALSA20_STREAM_ASM)
CRYPTO_ASM_OBJS = $(CRYPTO_ASM_SRCS:.s=.o)
CRYPTO_ASM_HDRS = crypto/aes/crypto_aes.h crypto/xsalsa20/crypto_stream_salsa20.h
CRYPTO_COMPAT_SRCS = crypto/old/sha2_utils_old.c crypto/old/sha3_utils_old.c
CRYPTO_COMPAT_HDRS = crypto/old/sha2_utils_old.h crypto/old/sha3_utils_old.h
CRYPTO_OBJS = $(CRYPTO_SRCS:.c=.o)
CRYPTO_COMPAT_OBJS = $(CRYPTO_COMPAT_SRCS:.c=.o)
CRYPTO_CPPFLAGS=-I/usr/include

XXHASH_SRCS = utils/xxhash.c
XXHASH_SSE4_SRCS = utils/xxhash_sse4.c
XXHASH_SSE2_SRCS = utils/xxhash_sse2.c
XXHASH_OBJS = utils/xxhash_sse4.o utils/xxhash_sse2.o
XXHASH_HDRS = utils/xxhash.h

BLAKE2b_SSE2 = crypto/blake2/blake2b_sse2.c
BLAKE2b_SSE3 = crypto/blake2/blake2b_ssse3.c
BLAKE2b_SSE4 = crypto/blake2/blake2b_sse41.c
BLAKE2b_AVX = crypto/blake2/blake2b_avx.c
BLAKE2bp_SSE2 = crypto/blake2/blake2bp_sse2.c
BLAKE2bp_SSE3 = crypto/blake2/blake2bp_ssse3.c
BLAKE2bp_SSE4 = crypto/blake2/blake2bp_sse41.c
BLAKE2bp_AVX = crypto/blake2/blake2bp_avx.c
BLAKE2_BASE_SRCS = crypto/blake2/blake2b.c crypto/blake2/blake2bp.c
BLAKE2_HDRS = crypto/blake2/blake2.h crypto/blake2/blake2-impl.h crypto/blake2/blake2-config.h \
	crypto/blake2/blake2-kat.h crypto/blake2/blake2b-round.h crypto/blake2/blake2b-load-sse2.h \
	crypto/blake2/blake2b-load-sse41.h
BLAKE2_SRCS = $(BLAKE2b_SSE2) $(BLAKE2b_SSE3) $(BLAKE2b_SSE4) $(BLAKE2b_AVX) \
	$(BLAKE2bp_SSE2) $(BLAKE2bp_SSE3) $(BLAKE2bp_SSE4) $(BLAKE2bp_AVX)
BLAKE2_OBJS = $(BLAKE2_SRCS:.c=.o)

ZLIB_SRCS = zlib_compress.c
ZLIB_HDRS = $(MAINHDRS)
ZLIB_OBJS = $(ZLIB_SRCS:.c=.o)
ZLIB_CPPFLAGS = -I/usr/include

BZLIB_SRCS = bzip2_compress.c
BZLIB_HDRS = $(MAINHDRS)
BZLIB_OBJS = $(BZLIB_SRCS:.c=.o)
BZLIB_CPPFLAGS = -I/usr/include

RABINSRCS = rabin/rabin_dedup.c rabin/global/index.c rabin/global/dedupe_config.c
RABINHDRS = rabin/rabin_dedup.h utils/utils.h rabin/global/index.h rabin/global/dedupe_config.h lzma/lzma_crc.h utils/qsort.h
RABINOBJS = $(RABINSRCS:.c=.o)

BSDIFFSRCS = bsdiff/bsdiff.c bsdiff/bspatch.c bsdiff/rle_encoder.c
BSDIFFHDRS = bsdiff/bscommon.h utils/utils.h allocator.h
BSDIFFOBJS = $(BSDIFFSRCS:.c=.o)

LZMASRCS = lzma/LzmaEnc.c lzma/LzFind.c lzma/LzmaDec.c lzma/Threads.c lzma/LzFindMt.c
LZMAHDRS = lzma/CpuArch.h lzma/LzFind.h lzma/LzmaEnc.h lzma/Types.h \
	lzma/LzHash.h lzma/LzmaDec.h utils/utils.h lzma/LzFindMt.h lzma/Threads.h lzma/windows.h \
	lzma/Common/MyWindows.h lzma/Common/MyGuidDef.h lzma/basetyps.h
LZMAOBJS = $(LZMASRCS:.c=.o)

LZFXSRCS = lzfx/lzfx.c
LZFXHDRS = lzfx/lzfx.h
LZFXOBJS = $(LZFXSRCS:.c=.o)

LZ4SRCS = lz4/lz4.c lz4/lz4hc.c
LZ4HDRS = lz4/lz4.h lz4/lz4hc.h
LZ4OBJS = $(LZ4SRCS:.c=.o)

PPMDSRCS = lzma/Ppmd8.c lzma/Ppmd8Enc.c lzma/Ppmd8Dec.c
PPMDHDRS = lzma/Ppmd.h lzma/Ppmd8.h
PPMDOBJS = $(PPMDSRCS:.c=.o)

CRCSRCS = lzma/crc64_fast.c lzma/crc64_table.c lzma/crc32_fast.c lzma/crc32_table.c
CRCHDRS = lzma/crc64_table_le.h lzma/crc64_table_be.h lzma/crc_macros.h \
	lzma/crc32_table_le.h lzma/crc32_table_be.h lzma/lzma_crc.h
CRCOBJS = $(CRCSRCS:.c=.o)

LZPSRCS = lzp/lzp.c
LZPHDRS = lzp/lzp.h
LZPOBJS = $(LZPSRCS:.c=.o)

DELTA2SRCS = delta2/delta2.c
DELTA2HDRS = delta2/delta2.h
DELTA2OBJS = $(DELTA2SRCS:.c=.o)

SKEIN_BLOCK_C = crypto/skein/skein_block.c
SKEIN_BLOCK_ASM = crypto/skein/skein_block_x64.s
SKEIN_BLOCK_SRC = $(SKEIN_BLOCK_ASM)
SKEIN_BLOCK_OBJ = crypto/skein/skein_block.o
SKEINSRCS = crypto/skein/SHA3api_ref.c crypto/skein/skein.c crypto/skein/skein_debug.c
SKEINHDRS = crypto/skein/brg_endian.h crypto/skein/SHA3api_ref.h \
	crypto/skein/skein.h crypto/skein/skein_port.h crypto/skein/brg_types.h \
	crypto/skein/skein_debug.h crypto/skein/skein_iv.h
SKEINOBJS = $(SKEINSRCS:.c=.o)

SHA2_SRCS = crypto/sha2/sha512.c
SHA2_HDRS = crypto/sha2/sha512.h
SHA2ASM_SRCS = crypto/sha2/intel/sha512_avx.asm crypto/sha2/intel/sha512_sse4.asm
SHA2ASM_OBJS = $(SHA2ASM_SRCS:.asm=.o)
SHA2_OBJS = $(SHA2_SRCS:.c=.o)

YASM = /usr/bin/yasm -f x64 -f elf64 -X gnu -g dwarf2 -D LINUX
LIBBSCWRAP = libbsc_compress.c
LIBBSCWRAPOBJ = libbsc_compress.o
LIBBSCDIR = 
LIBBSCLFLAGS = -L$(LIBBSCDIR) -lbsc
LIBBSCLIB = 
LIBBSCGEN_OPT = -fopenmp
LIBBSCCPPFLAGS = -I$(LIBBSCDIR)/libbsc -DENABLE_PC_LIBBSC

TRANSP_SRCS = transpose/transpose.c
TRANSP_HDRS = transpose/transpose.h
TRANSP_OBJS = $(TRANSP_SRCS:.c=.o)

KECCAK_SRC_COMMON = crypto/keccak/genKAT.c crypto/keccak/KeccakDuplex.c \
	crypto/keccak/KeccakNISTInterface.c crypto/keccak/KeccakSponge.c
KECCAK_SRC_OPT64 = $(KECCAK_SRC_COMMON) crypto/keccak/KeccakF-1600-opt64.c
KECCAK_SRC_OPT64_ASM1 = $(KECCAK_SRC_COMMON) crypto/keccak/KeccakF-1600-x86-64-asm.c
KECCAK_SRC_OPT64_ASM2 = crypto/keccak/KeccakF-1600-x86-64-gas.s

KECCAK_HDRS_COMMON = crypto/keccak/KeccakDuplex.h crypto/keccak/KeccakNISTInterface.h \
	crypto/keccak/KeccakSponge.h crypto/keccak/KeccakF-1600-interface.h
KECCAK_HDRS_OPT = $(KECCAK_HDRS_COMMON) \
	crypto/keccak/brg_endian.h crypto/keccak/KeccakF-1600-unrolling.macros
KECCAK_HDRS_OPT64 = $(KECCAK_HDRS_OPT)  crypto/keccak/KeccakF-1600-opt64-settings.h \
	crypto/keccak/KeccakF-1600-64.macros  crypto/keccak/KeccakF-1600-simd64.macros \
	crypto/keccak/KeccakF-1600-simd128.macros
KECCAK_HDRS_OPT64_ASM = $(KECCAK_HDRS_OPT64)

KECCAK_SRCS = $(KECCAK_SRC_OPT64_ASM1)
KECCAK_SRCS_ASM = $(KECCAK_SRC_OPT64_ASM2)
KECCAK_HDRS = $(KECCAK_HDRS_OPT64_ASM)
KECCAK_OBJS = $(KECCAK_SRCS:.c=.o)
KECCAK_OBJS_ASM = $(KECCAK_SRCS_ASM:.s=.o)

COMMON_CPPFLAGS = -I xptMiner/crypto/scrypt/ -I xptMiner/utils/ -I xptMiner/crypto/ -I xptMiner/crypto/stein/ -I. -I./lzma -I./lzfx -I./lz4 -I./rabin -I./bsdiff -DNODEFAULT_PROPS \
	-DFILE_OFFSET_BITS=64 -D_REENTRANT -D__USE_SSE_INTRIN__ -D_LZMA_PROB32 \
	-I./lzp  -I./crypto/skein -I./utils -I./crypto/sha2 \
	-I./crypto/scrypt -I./crypto/aes -I./crypto  -I./rabin/global \
	-I./crypto/keccak -I./transpose -I./crypto/blake2 $(EXTRA_CPPFLAGS) \
	-I./crypto/xsalsa20 -pedantic -Wall -std=gnu99 \
	-fno-strict-aliasing -Wno-unused-but-set-variable -Wno-enum-compare \
	-D__HASH_COMPATIBILITY_
	
COMMON_VEC_FLAGS = -ftree-vectorize

COMMON_LOOP_OPTFLAGS = $(VEC_FLAGS) -floop-interchange -floop-block
LDLIBS = -ldl -L./buildtmp -Wl,-R/usr/lib64,--enable-new-dtags -lbz2 -L./buildtmp -Wl,-R/usr/lib64,--enable-new-dtags -lz -lm  \
	-L./buildtmp -Wl,-R/usr/lib64,--enable-new-dtags -lcrypto -lrt $(EXTRA_LDFLAGS) -Wl,-R/usr/lib,--enable-new-dtags \
	-Wl,-R/usr/lib64,--enable-new-dtags


MAINOBJS_bak = \
        xptMiner/ticker.o \
	xptMiner/main.o \
	xptMiner/sha2.o \
	xptMiner/xptClient.o \
	xptMiner/protosharesMiner.o \
	xptMiner/primecoinMiner.o \
	xptMiner/keccak.o \
	xptMiner/metis.o \
	xptMiner/shavite.o \
	xptMiner/metiscoinMiner.o \
	xptMiner/scrypt.o \
	xptMiner/scryptMinerCPU.o \
	xptMiner/xptClientPacketHandler.o \
	xptMiner/xptPacketbuffer.o \
	xptMiner/xptServer.o \
	xptMiner/xptServerPacketHandler.o \
	xptMiner/transaction2.o \

OBJS = $(MAINOBJS)  $(SKEINOBJS) \
$(SKEIN_BLOCK_OBJ) $(SHA2ASM_OBJS) $(SHA2_OBJS) $(KECCAK_OBJS) $(KECCAK_OBJS_ASM) \
$(TRANSP_OBJS) $(CRYPTO_OBJS) $(ZLIB_OBJS) $(BZLIB_OBJS) $(XXHASH_OBJS) $(BLAKE2_OBJS) \
$(CRYPTO_COMPAT_OBJS) $(CRYPTO_ASM_OBJS)

RELEASE_LINK = g++ -pthread   -fopenmp -fPIC
RELEASE_COMPILE = gcc -c  -fPIC -fvisibility=hidden
RELEASE_COMPILE_cpp = g++ -c  -fPIC -fvisibility=hidden
RELEASE_VEC_FLAGS = $(COMMON_VEC_FLAGS)
RELEASE_LOOP_OPTFLAGS = $(COMMON_LOOP_OPTFLAGS)
RELEASE_CPPFLAGS = $(COMMON_CPPFLAGS) -DNDEBUG
RELEASE_GEN_OPT = -O3  -fopenmp
RELEASE_FPTR_FLAG = -fomit-frame-pointer

NO_SLAB_CPPFLAGS = -DDEBUG_NO_SLAB
DEBUG_STATS_CPPFLAGS = -DDEBUG_STATS

LINK.PROG = $(RELEASE_LINK)
LINK.LIB = $(RELEASE_LINK) -shared
COMPILE = $(RELEASE_COMPILE)
COMPILE_cpp = $(RELEASE_COMPILE_cpp)
VEC_FLAGS = $(RELEASE_VEC_FLAGS)
LOOP_OPTFLAGS = $(RELEASE_LOOP_OPTFLAGS)
CPPFLAGS = $(RELEASE_CPPFLAGS)  
GEN_OPT = $(RELEASE_GEN_OPT) -msse3
BASE_OPT = $(RELEASE_GEN_OPT)
PREFIX=/usr
AVX_OPT_FLAG = -mavx
SSE4_OPT_FLAG = -msse4.2
SSE3_OPT_FLAG = -mssse3
SSE2_OPT_FLAG = -msse2

SKEIN_FLAGS = $(GEN_OPT) $(VEC_FLAGS) $(CPPFLAGS) $(RELEASE_FPTR_FLAG)
SHA2_FLAGS = $(GEN_OPT) $(VEC_FLAGS) $(CPPFLAGS) $(RELEASE_FPTR_FLAG)
KECCAK_FLAGS = $(GEN_OPT) $(VEC_FLAGS) $(CPPFLAGS) $(RELEASE_FPTR_FLAG)
 
all: $(PROG)

$(SKEIN_BLOCK_OBJ): $(SKEIN_BLOCK_SRC)
	$(COMPILE) $(SKEIN_FLAGS) $(SKEIN_BLOCK_SRC) -o $@

$(SKEINOBJS): $(SKEINSRCS) $(SKEINHDRS)
	$(COMPILE) $(SKEIN_FLAGS) $(@:.o=.c) -o $@

$(SHA2_OBJS): $(SHA2_SRCS) $(SHA2_HDRS)
	$(COMPILE) $(SHA2_FLAGS) $(@:.o=.c) -o $@

$(SHA2ASM_OBJS): $(SHA2ASM_SRCS)
	$(YASM)	-o $@ $(@:.o=.asm)

$(KECCAK_OBJS): $(KECCAK_SRCS) $(KECCAK_HDRS)
	$(COMPILE) $(KECCAK_FLAGS) $(@:.o=.c) -o $@

$(KECCAK_OBJS_ASM): $(KECCAK_SRCS_ASM) $(KECCAK_HDRS)
	$(COMPILE) $(KECCAK_FLAGS) $(@:.o=.s) -o $@
	
$(CRYPTO_OBJS): $(CRYPTO_SRCS) $(CRYPTO_HDRS) $(CRYPTO_ASM_OBJS)
	$(COMPILE) $(GEN_OPT) $(CRYPTO_CPPFLAGS) $(CPPFLAGS) $(@:.o=.c) -o $@

$(CRYPTO_ASM_OBJS): $(CRYPTO_ASM_SRCS) $(CRYPTO_ASM_HDRS)
	$(COMPILE) $(GEN_OPT) $(CRYPTO_CPPFLAGS) $(CPPFLAGS) -o $@ $(@:.o=.s)

$(CRYPTO_COMPAT_OBJS): $(CRYPTO_COMPAT_SRCS) $(CRYPTO_COMPAT_HDRS)
	$(COMPILE) $(GEN_OPT) $(CRYPTO_CPPFLAGS) $(CPPFLAGS) $(@:.o=.c) -o $@

$(MAINOBJS): $(MAINSRCS) $(MAINHDRS) 
	$(COMPILE) $(GEN_OPT) $(LOOP_OPTFLAGS) $(CPPFLAGS) $(@:.o=.c) -o $@
	
$(LIB): $(OBJS)
	$(LINK.LIB) -Wl,-soname,$(LIB).$(LIBVER) -o $(LIB).$(LIBVER) $(OBJS) $(LDLIBS)
	ln -sf $(LIB).$(LIBVER) $(LIB)

$(PROGOBJS): $(PROGSRCS) $(PROGHDRS)
	$(COMPILE) $(GEN_OPT) $(LOOP_OPTFLAGS) $(CPPFLAGS) $(@:.o=.c) -o $@
	
$(PROG): $(LIB) $(PROGOBJS)
	$(LINK.PROG) -o $@ $(PROGOBJS) $(LDLIBS) -L. -l$(LINKLIB)
	


xptMiner/%.o: xptMiner/%.cpp
	$(CXX) -c $(CXXFLAGS) $(INCLUDEPATHS) $< -o $@ 

xptMiner/%.o: xptMiner/%.c
	$(CC) -c $(CFLAGS) $(INCLUDEPATHS) $< -o $@
	
xptMiner/crypto/stein/%.o: xptMiner/crypto/stein/%.c
	$(CC) -c $(CFLAGS) $(INCLUDEPATHS) $< -o $@
	
utils/%.o: utils/%.c
	$(CC) -c $(CFLAGS) $(INCLUDEPATHS) $< -o $@ 
	
xptminer: $(OBJS) $(OBJS:xptMiner/%=xptMiner/%) $(JHLIB:xptMiner/jhlib/%=xptMiner/jhlib/%)
	$(CXX) $(CFLAGS) $(LIBPATHS) $(INCLUDEPATHS) -o $@ $^ $(LIBS) -flto

clean:
	-rm -f xptminer
	-rm -f xptMiner/*.o
	-rm -f xptMiner/jhlib/*.o
