//
// Created by Oyekunle Oloyede on 28/10/2020.
//

#ifndef TRINCETC_ADDNUMBERS_H
#define TRINCETC_ADDNUMBERS_H

#include <stdarg.h>

double add(int n, ...) {
    double sum = 0.0;
    va_list argptr;
    va_start(argptr, n);

    for (int i = 0; i < n; ++i)
        sum += va_arg(argptr, double);

    va_end(argptr);

    return sum;
}

#endif //TRINCETC_ADDNUMBERS_H
