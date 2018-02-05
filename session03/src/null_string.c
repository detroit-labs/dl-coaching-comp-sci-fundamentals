#include <stdio.h>

int main(void) {
    char c[] = "";
    char c2 = '\0';
    if (c[0] == c2) {
        printf("match\n");
    }  else {
        printf("no match\n");
    }
}
