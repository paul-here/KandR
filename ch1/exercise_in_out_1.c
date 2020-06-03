#include <stdio.h>

// K&R recommend defining EOF here, but that is handled by stdio.h now

int main() {

    int c;

    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}

// page 14 1978 ed.
// w/ mods for gcc version 7.3.0 (Ubuntu 7.3.0-27ubuntu1~18.04)