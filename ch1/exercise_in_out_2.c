#include <stdio.h>

// K&R recommend defining EOF here, but that is handled by stdio.h now

int main() {

    int c;

    while ((c = getchar()) != EOF)
        putchar(c);
}

// page 14 1978 ed.
// w/ mods for gcc version 7.3.0 (Ubuntu 7.3.0-27ubuntu1~18.04)