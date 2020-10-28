#include "circleArea.h"
#include "writeRandom.h"
#include "average.h"
#include "strReverse.h"
#include "strCopy.h"


int main() {
    circularAreaMain();
    writeRandom();

    float arr[] = {0.0, 1.0, 2.0, 3.0, 4.0};
    double avg = average(arr, sizeof(arr) / sizeof(*arr));

    printf("The average is: %f\n", avg);

    char str[] = "Hello, world!";
    strReverse(str);
    printf("The reversed string is %s\n", str);

    char str1[] = "Hello, rats!";
    char str2[] = "Hello, cats!";

    strCopy(str1, str2);

    printf("After copy, str1 is now %s\n", str1);

    return 0;
}
