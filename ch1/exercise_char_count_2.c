#include <stdio.h>

int main() {

    double nc;

    nc = 0;
    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);
}

// page 16 1978 ed.
// w/ mods for gcc version 7.3.0 (Ubuntu 7.3.0-27ubuntu1~18.04)