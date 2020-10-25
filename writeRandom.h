//
// Created by Oyekunle Oloyede on 25/10/2020.
//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

enum {
    ARR_LEN = 100
};

/**
 * Writes 100 random numbers
 */
void writeRandom() {
    int *pNumbers = malloc(ARR_LEN * sizeof(int));

    if (pNumbers == NULL) {
        fprintf(stderr, "Insufficient memory.\n");
        exit(0);
    }

    srand((unsigned) time(NULL));

    for (int i = 0; i < ARR_LEN; ++i)
        pNumbers[i] = rand() % 10000;

    printf("\n%d random numbers between 0 and 9999:\n", ARR_LEN);

    for (int i = 0; i < ARR_LEN; ++i) {
        printf("%6d", pNumbers[i]);

        if (i % 10 == 9) putchar('\n');
    }

    free(pNumbers);
}
