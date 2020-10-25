//
// Created by Oyekunle Oloyede on 25/10/2020.
//
#include <stdio.h>

double circularArea(double radius);

int main() {
    double radius = 1.0;
    double area = 0.0;

    printf("    Areas of Circles\n\n");
    printf("    Radius          Area\n"
           "-------------------------'n");

    area = circularArea(radius);
    printf("%10.1f      %10.2f\n", radius, area);

    radius = 5.0;
    area = circularArea(radius);
    printf("%10.1f      %10.2f\n", radius, area);

    return 0;
}
