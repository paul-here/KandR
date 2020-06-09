#include <stdio.h>

int main() {

    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n')
            ++nl;
    }
    printf("%d\n", nl);
}

// page 17 1978 ed.
// w/ mods for gcc version 7.3.0 (Ubuntu 7.3.0-27ubuntu1~18.04)