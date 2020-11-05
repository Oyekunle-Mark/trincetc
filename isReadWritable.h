//
// Created by Oyekunle Oloyede on 05/11/2020.
//
#include <stdio.h>
#include <stdbool.h>

#ifndef TRINCETC_ISREADWRITABLE_H
#define TRINCETC_ISREADWRITABLE_H

_Bool isReadWritable(const char *filename) {
    FILE *fp = fopen(filename, "r+");

    if (fp != NULL) {
        fclose(fp);
        return true;
    }

    return false;
}

#endif //TRINCETC_ISREADWRITABLE_H
