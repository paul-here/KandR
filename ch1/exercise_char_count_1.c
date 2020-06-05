#include <stdio.h>

int main() {

    long nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}

// page 16 1978 ed.
// w/ mods for gcc version 7.3.0 (Ubuntu 7.3.0-27ubuntu1~18.04)