//
// Created by Oyekunle Oloyede on 31/10/2020.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "sortLines.h"

void sortLines() {
    char *linePtr[N_LINES_MAX];

    int n = 0;

    for (; n < N_LINES_MAX && (linePtr[n] = getLine()) != NULL; ++n);

    if (!feof(stdin)) {
        if (n == N_LINES_MAX)
            fputs("sorttext: too many lines.\n", stderr);
        else
            fputs("sorttext: error reading from stdin\n", stderr);
    } else {
        qsort(linePtr, n, sizeof(char *), strCompare);

        for (char **p = linePtr; p < linePtr + n; ++p)
            puts(*p);
    }
}

char *getLine() {
    char buffer[LEN_MAX];
    char *linePtr = NULL;

    if (fgets(buffer, LEN_MAX, stdin) != NULL) {
        size_t len = strlen(buffer);

        if (buffer[len - 1] == '\n')
            buffer[len - 1] = '\0';
        else
            ++len;

        if ((linePtr = malloc(len)) != NULL)
            strcpy(linePtr, buffer);
    }

    return linePtr;
}

int strCompare(const void *p1, const void *p2) {
    return strcmp(*(char **) p1, *(char **) p2);
}
