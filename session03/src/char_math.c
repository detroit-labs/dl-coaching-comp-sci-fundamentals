#include <stdio.h>

int main(void) {
    char c[] = "cars go fast";
    printf("%s\n", c);
    c[2] += 2;
    c[10] -= 1;
    printf("%s\n", c);
}
