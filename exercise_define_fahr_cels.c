#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

int main() {



    int fahr;

    for (fahr = LOWER; fahr <= UPPER; fahr += STEP)
        printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
}

// page 13 1978 ed.
// added 'int' before main to run with gcc version 7.3.0 (Ubuntu 7.3.0-27ubuntu1~18.04)