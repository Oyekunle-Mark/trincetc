#include "circleArea.h"
#include "writeRandom.h"
#include "average.h"

int main() {
    circularAreaMain();
    writeRandom();

    const int ARR_SIZE = 5;
    float arr[ARR_SIZE] = {0.5, 9.3, 2.0, 3.045, 4.0};
    double avg = average(arr, ARR_SIZE);

    printf("The average is: %f", avg);

    return 0;
}
