#include <stdio.h>

/*
 */

#define BLOCK_SIZE 64
#define ARRAY_SIZE 640000

int main(void) {
    char array[ARRAY_SIZE];
    int sum = 0;
    
    int i;
    for (i = 0; i < ARRAY_SIZE; i++) {
        sum += array[i];
        
        // enables non-constant stride
        (i % 2 == 0)? i + BLOCK_SIZE : i + BLOCK_SIZE*2;
        
    }
    return 0;
}
