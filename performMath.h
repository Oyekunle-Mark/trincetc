//
// Created by Oyekunle Oloyede on 31/10/2020.
//

#ifndef TRINCETC_PERFORMMATH_H
#define TRINCETC_PERFORMMATH_H

#include <stdio.h>
#include <math.h>

double sum(double x, double y) {
    return x + y;
}

double sub(double x, double y) {
    return x - y;
}

double mult(double x, double y) {
    return x * y;
}

double divN(double x, double y) {
    return x / y;
}

void performMath() {
    typedef double (*func_t)(double, double);
    func_t funcTable[] = {sum, sub, mult, divN, pow};

    char *messageTable[] = {"Sum", "Difference", "Product", "Quotient", "Power"};

    double x = 0;
    double y = 0;

    if (scanf("%lf %lf", &x, &y) != 2)
        printf("Invalid input.\n");

    for (int i = 0; i < 5; ++i)
        printf("%10s: %6.2f\n", messageTable[i], funcTable[i](x, y));
}

#endif //TRINCETC_PERFORMMATH_H
