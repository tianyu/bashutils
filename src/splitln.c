#include <stdio.h>

void endLine() {
    for (int c = getchar(); c != EOF; c = getchar()) {
       if (c = ' ') {
            putchar('\n');
            return;
        } else if (('0' <= c && c <= '9') ||
                   ('A' <= c && c <= 'Z') ||
                   ('a' <= c && c <= 'z')) {
            return;
        }
    }
}

void splitLine() {
    for (int c = getchar(); c != EOF; c = getchar()) {
        switch (c) {
        case EOF:
            return;
        case '.': case '!': case '?':
            endLine();
            break;
        case '\n':
            putchar('\r');
            putchar('\n');
            break;
        default:
            putchar(c);
            break;
        }
    }
}

int main() {
    splitLine();
    return 0;
}
