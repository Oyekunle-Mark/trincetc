//
// Created by Oyekunle Oloyede on 28/10/2020.
//

#ifndef TRINCETC_STRREVERSE_H
#define TRINCETC_STRREVERSE_H

#include <string.h>

void strReverse(char *str) {
    for (size_t i = 0, j = strlen(str) - 1; i < j; ++i, --j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

#endif //TRINCETC_STRREVERSE_H
