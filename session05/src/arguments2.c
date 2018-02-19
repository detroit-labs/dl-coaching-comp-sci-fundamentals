#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("the arguments you provided are\n");
    for(int i = 0; argv[i] != 0; i++) {
        printf("%i - %s\n", i, argv[i]);
    }
}
