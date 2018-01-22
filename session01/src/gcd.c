#include <stdio.h>

int main(void) {
    int u = 1026;
    int v = 405;
    int temp;

    while(v != 0) {
        temp = u % v;
        u = v;
        v = temp;
    }
    printf("The GCD is %i\n", u);
    return 0;
}
