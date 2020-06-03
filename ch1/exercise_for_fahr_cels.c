#include <stdio.h>

int main() {

    int fahr;

    for (fahr = 0; fahr <= 300; fahr += 20)
        printf("%4d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
}

// page 11 1978 ed.
// added 'int' before main to run with gcc version 7.3.0 (Ubuntu 7.3.0-27ubuntu1~18.04)