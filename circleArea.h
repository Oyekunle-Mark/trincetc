//
// Created by Oyekunle Oloyede on 25/10/2020.
//
#include <stdio.h>

double circularArea(double radius);

void circularAreaMain() {
    double radius = 1.0;
    double area = 0.0;

    printf("     Areas of Circles\n\n");
    printf("     Radius          Area\n"
           "------------------------------\n");

    area = circularArea(radius);
    printf("%10.1f      %10.2f\n", radius, area);

    radius = 5.0;
    area = circularArea(radius);
    printf("%10.1f      %10.2f\n", radius, area);
}

double circularArea(double radius) {
    const double pi = 3.1415926536;
    return pi * radius * radius;
}
