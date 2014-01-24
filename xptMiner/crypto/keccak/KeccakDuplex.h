/*
 * This file is a part of Pcompress, a chunked parallel multi-
 * algorithm lossless compression and decompression program.
 *
 * Copyright (C) 2012-2013 Moinak Ghosh. All rights reserved.
 * Use is subject to license terms.
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 3 of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program.
 * If not, see <http://www.gnu.org/licenses/>.
 *
 * moinakg@belenix.org, http://moinakg.wordpress.com/
 *      
 */

/*
The Keccak sponge function, designed by Guido Bertoni, Joan Daemen,
Michaël Peeters and Gilles Van Assche. For more information, feedback or
questions, please refer to our website: http://keccak.noekeon.org/

Implementation by the designers,
hereby denoted as "the implementer".

To the extent possible under law, the implementer has waived all copyright
and related or neighboring rights to the source code in this file.
http://creativecommons.org/publicdomain/zero/1.0/
*/

#ifndef _KeccakDuplex_h_
#define _KeccakDuplex_h_

#define KeccakPermutationSize 1600
#define KeccakPermutationSizeInBytes (KeccakPermutationSize/8)

#if defined(__GNUC__)
#define ALIGN __attribute__ ((aligned(32)))
#elif defined(_MSC_VER)
#define ALIGN __declspec(align(32))
#else
#define ALIGN
#endif

ALIGN typedef struct duplexStateStruct {
    ALIGN unsigned char state[KeccakPermutationSizeInBytes];
    unsigned int rate;
    unsigned int capacity;
    unsigned int rho_max;
} duplexState;

/**
  * Function to initialize a duplex object Duplex[Keccak-f[r+c], pad10*1, r].
  * @param  state       Pointer to the state of the duplex object to be initialized.
  * @param  rate        The value of the rate r.
  * @param  capacity    The value of the capacity c.
  * @pre    One must have r+c=1600 in this implementation. (The value of the rate is unrestricted.)
  * @return Zero if successful, 1 otherwise.
  */
int InitDuplex(duplexState *state, unsigned int rate, unsigned int capacity);
/**
  * Function to make a duplexing call to the duplex object intialized with InitDuplex().
  * @param  state       Pointer to the state of the duplex object initialized by InitDuplex().
  * @param  in          Pointer to the input data. 
  *                     When @a inBitLen is not a multiple of 8, the last bits of data must be
  *                     in the least significant bits of the last byte.
  * @param  inBitLen    The number of input bits provided in the input data.
  * @param  out         Pointer to the buffer where to store the output data.
  * @param  outBitLen   The number of output bits desired.
  * @pre    inBitLen ≤ (r-2)
  * @pre    outBitLen ≤ r
  * @return Zero if successful, 1 otherwise.
  */
int Duplexing(duplexState *state, const unsigned char *in, unsigned int inBitLen, unsigned char *out, unsigned int outBitLen);

#endif
