#include "calculation.h"

#include <assert.h>
#include <stdbool.h>
#include <math.h>
#include <stdio.h>

static void test_sum();
static void test_substract();
static void test_divide();
static void test_divide_by_zero();
static void test_multiply();

int main() {
    printf(">>>> Calculation tests begin...\n");

    test_sum();
    test_substract();
    test_divide();
    test_divide_by_zero();
    test_multiply();

    printf(">>>> Calculation tests succeeded!\n");
}

static void test_sum() {
    assert(sum(420.69, 13.31) == 434);
}

static void test_substract() {
    assert(substract(666, 420) == 246);
}

static void test_divide() {
    assert(divide(40, 4) == 10);
}

static void test_divide_by_zero() {
    assert(divide(40, 0) == INFINITY);
}

static void test_multiply() {
    assert(multiply(4, 10) == 40);
}
