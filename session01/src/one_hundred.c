#include <stdio.h>

int main(void) {
    for(int i = 0; i < 100; i = i + 10) {
        for(int j = 1; j <= 10; j = j + 1) {
            printf("%i\t", i + j);
        }
        printf("\n");
    }
    return 0;
}
