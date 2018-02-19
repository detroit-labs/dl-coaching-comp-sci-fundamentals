#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("the arguments you provided are\n");
    for(int i = 0; i < argc; i++) {
        printf("%i - %s\n", i, argv[i]);
    }
}
