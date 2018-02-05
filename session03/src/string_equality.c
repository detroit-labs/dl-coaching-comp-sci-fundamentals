#include <stdio.h>

int main(void) {
    char c[] = "cat";
    char c2[] = "cat";
    if (c == c2) {
        printf("match\n");
    }  else {
        printf("no match\n");
    }
}
