//
// Created by Oyekunle Oloyede on 28/10/2020.
//
#include <stdio.h>
#include "readNumberAndFindAverage.h"

/**
 * Read in numbers from the keyboard and find the average
 */
void readAndFindAverage() {
    double sum = 0.0;
    double input = 0.0;
    int count = 0;

    printf("\t--- Calculate Averages ---\n");
    printf("\nEnter some numbers:\n"
           "(Type a letter to end your input)\n");

    while (scanf("%lf", &input) == 1) {
        sum += input;
        ++count;
    }

    if (count == 0)
        printf("No input data!\n");
    else
        printf("The average of your numbers is %.2f\n", sum / count);
}
