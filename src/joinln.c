#include "joinln.h"
#include <stdio.h>

void joinLine() {
    int c;
    for (c = getchar(); c != EOF; c = getchar()) {
        if (c == '\r') {
            c = getchar();
            if (c == EOF) {
                putchar('\r');
                break;
            } else if (c == '\n') {
                putchar(' ');
            } else {
                putchar('\r');
                putchar(c);
            }
        } else {
            putchar(c);
        }
    }
}
