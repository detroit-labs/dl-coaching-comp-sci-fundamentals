#include <stdio.h>
int main(void) {
    int tri = 0;
    for(int n = 1; n <= 100; n = n + 1) {
        tri = tri + n;
    }
    printf("The 100th triangle number is %i\n", tri);
    return 0;
}
