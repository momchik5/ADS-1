// Copyright 2022 NNTU-CS
#include <cstdint>
#include <iostream>
#include "alg.h"


bool checkPrime(uint64_t value) {
    for (uint64_t i = 2; i < value; i++) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}
uint64_t nPrime(uint64_t n) {
    uint64_t count = 0;
    uint64_t value = 1;
    while (count < n) {
        value++;
        if (checkPrime(value)) {
            count++;
        }
    }
    return value;
}

uint64_t nextPrime(uint64_t value) {
    if (value <= 1) return 0;
    value++;
    while (!checkPrime(value)) {
        value++;
    }
    return value;
}
uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;
    for (uint64_t y = 2; y < hbound; y++) {
        if (checkPrime(y)) {
            sum += y;
        }
    }
    return sum;
}
