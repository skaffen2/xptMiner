CXX = g++
#CFLAGS = -mtune=native -Wall -Wextra -std=c++0x -O3 -fomit-frame-pointer
#CFLAGS = -std=c++11 -march=native -O3 -fomit-frame-pointer -msse3 -msse2 -mssse3 -funroll-loops
CFLAGS = -std=c++11 -Ofast -march=native -mfpmath=sse -mieee-fp -mmmx -msse -msse2 -msse4a
#CFLAGS = -O3 -std=c++0x -mavx -m64 -march=corei7-avx -mtune=corei7-avx -lstdc++
OSVERSION := $(shell uname -s)
LIBS = -lgmp -lgmpxx -lcrypto -lssl -pthread

ifeq ($(OSVERSION),Linux)
	LIBS += -lrt
endif

ifeq ($(OSVERSION),FreeBSD)
	CXX = clang++
	CFLAGS += -DHAVE_DECL_LE32DEC
endif

# You might need to edit these paths too
LIBPATHS = -L/usr/local/lib -L/usr/lib
INCLUDEPATHS = -I/usr/local/include -I/usr/include -IxptMiner/includes/

ifeq ($(OSVERSION),Darwin)
	GOT_MACPORTS := $(shell which port)
ifdef GOT_MACPORTS
	LIBPATHS += -L/opt/local/lib
	INCLUDEPATHS += -I/opt/local/include
endif
endif

JHLIB = xptMiner/jhlib.o \

OBJS = \
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
	xptMiner/transaction.o \
	xptMiner/sha2.o

all: jhprimeminer

xptMiner/%.o: xptMiner/%.cpp
	$(CXX) -c $(CFLAGS) $(INCLUDEPATHS) $< -o $@ 

jhprimeminer: $(OBJS:xptMiner/%=xptMiner/%) $(JHLIB:xptMiner/jhlib/%=xptMiner/jhlib/%)
	$(CXX) $(CFLAGS) $(LIBPATHS) $(INCLUDEPATHS) -o $@ $^ $(LIBS)

clean:
	-rm -f jhprimeminer
	-rm -f xptMiner/*.o
	-rm -f xptMiner/jhlib/*.o
