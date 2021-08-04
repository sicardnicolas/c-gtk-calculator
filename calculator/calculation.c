#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#include "calculation.h"

float sum(float a, float b) {
    return a + b;
}

float substract(float a, float b) {
    return a - b;
}

float divide(float a, float b) {
    if (b == 0) {
        return INFINITY;
    }

    return a / b;
}

float multiply(float a, float b) {
    return a * b;
}
