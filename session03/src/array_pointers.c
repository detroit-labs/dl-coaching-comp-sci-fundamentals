#include <stdio.h>

int main(void) {
    int nums[] = {1, 2, 3, 4, 5};
    int *n = nums;
    int i = 0;
    while(i < 5) {
        printf("%i\n", *(n + i));
        i++;
    }
}
