#include "calculation.h"

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main(void) {
    float (*operations[4])(float, float);
    operations[0] = sum;
    operations[1] = substract;
    operations[2] = multiply;
    operations[3] = divide;

    float a, b, result;
    int choice;

    char *keepGoing = "";
    do {
        printf("Type 0 to add, 1 to substract, 2 to multiply, 3 to divide, 4 to quit: ");
        scanf("%d", &choice);

        if (choice == 4) {
            break;
        }

        printf("First number: ");
        scanf("%f", &a);

        printf("Second number: ");
        scanf("%f", &b);

        result = operations[choice](a, b);
        printf("The result is: %f\n", result);
    } while (true);

    printf("C ya!\n");
    return 0;
}
