#include <stdio.h>

void endLine() {
    # TODO
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
