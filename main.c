#include "circleArea.h"
#include "writeRandom.h"
#include "average.h"
#include "readNumberAndFindAverage.h"

int main() {
    circularAreaMain();
    writeRandom();

    float arr[] = {0.0, 1.0, 2.0, 3.0, 4.0};
    double avg = average(arr, sizeof(arr) / sizeof(*arr));

    printf("The average is: %f", avg);

    readAndFindAverage();

    return 0;
}
