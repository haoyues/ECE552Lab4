#include <stdio.h>

/* L1 cache: 64 sets, 4-way associative, 64 bytes blocks
** Capacity of the cache: 64*4*64 = 16384 bytes
** The array size is set to 640000 (64 * 10000), and the element in the array is char type,
** therefore the array cannot fit into the cache.
** The following is the cache miss rate in different cases:
** - case 1: no prefecher
**   In this case, every time the program access a new block, a cache miss will occur.
**   Therefore the miss rate can be calculated as: 64 * 4 / access_time
** - case 2: with next-line prefecher, stride <= 64
**   In this case, every time a new block is accessed (i.e. cache miss), the next block
**   will be fetched. Therefore there will be a cache miss for every other block.
**   The miss rate can be calculated as: 64 * 2 / access_time
** - case 3: with next-line prefetch, stride > 64*2
**   In this case, the program will access the next next block, therefore the prefecher
**   actually does not improve the cache miss rate.
*/

// measured: stride = 64, miss rate = 0.0055

#define BLOCK_SIZE 64
#define ARRAY_SIZE 640000
#define INCREMENT  64

int main(void) {
    char array[ARRAY_SIZE];
    int sum = 0;

    int i;
    for (i = 0; i < ARRAY_SIZE; i = i + INCREMENT*2) {
        sum += array[i];
    }
    return 0;
}
