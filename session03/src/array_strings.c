#include <stdio.h>

int main(void) {
    char *words[] = {"NOT", "4", "CATS"};
    for(int i = 0; i < 3; i++) {
        printf("%s\n", *(words + i));
    }
}
