// Copyright 2022 UNN-IASR
#include "fun.h"

int64_t power(int64_t x, uint16_t n) {
    int64_t result = 1;
    while (n > 0) {
        if (n & 1) {
            result *= x;
        }
        x *= x;
        n >>= 1;
    }
    return result;
}
