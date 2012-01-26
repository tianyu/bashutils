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

int main() {
    for (int c = getchar(); c != EOF; c = getchar()) {
        switch (c) {
        case EOF:
            goto end;
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
    return 0;
}
