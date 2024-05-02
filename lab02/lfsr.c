#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
#include "lfsr.h"
#include "bit_ops.h"

void lfsr_calculate(uint16_t *reg) {
    /* YOUR CODE HERE */
    unsigned temp = (*reg) & 1;
    temp = temp ^ ( (*reg >> 2) & 1 );
    temp = temp ^ ( (*reg >> 3) & 1 );
    temp = temp ^ ( (*reg >> 5) & 1 );
    temp = temp << 15;
    *reg = *reg >> 1;
    *reg = *reg | temp;
}

