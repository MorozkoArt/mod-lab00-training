// Copyright 2022 UNN-IASR
#include "fun.h"

int64_t power(int64_t x, uint16_t n) {
    if (n == 0) return 1;
    if (x == 0) return 0;
    if (x == 1) return 1;
    if (x == -1) return (n % 2 == 0) ? 1 : -1;
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
