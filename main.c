#include "circleArea.h"
#include "writeRandom.h"
#include "average.h"
#include "strReverse.h"
#include "strCopy.h"
#include "addNumbers.h"
#include "strCat.h"
#include "performMath.h"


int main(int argc, char *argv[]) {
    if (argc == 0)
        puts("No command line available.");
    else {
        printf("The program now running: %s\n", argv[0]);

        if (argc == 1)
            puts("No argument received on the command line.");
        else {
            puts("The command line arguments:");

            for (int i = 1; i < argc; ++i)
                puts(argv[i]);
        }
    }

    circularAreaMain();
    writeRandom();

    float arr[] = {0.0, 1.0, 2.0, 3.0, 4.0};
    double avg = average(arr, sizeof(arr) / sizeof(*arr));

    printf("The average is: %f\n", avg);

    char str[] = "Hello, world!";
    strReverse(str);
    printf("The reversed string is %s\n", str);

    char str1[30] = "Hello, rats!";
    char str2[] = "Hello, cats!";

    strCopy(str1, str2);

    printf("After copy, str1 is now %s\n", str1);
    printf("Sum of digits: %f\n", add(5, 1, 2, 3));

    char *result = strCat(str1, str2);
    puts(result);

    performMath();

    return 0;
}
