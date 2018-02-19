#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* insert(char source[], char insert[], int insertIndex) {
    int s_len = strlen(source);
    int i_len = strlen(insert);

    char *result = (char *) calloc(sizeof(char), (s_len + i_len + 1));

    int i = 0, j = 0, k = 0;

    while(i < insertIndex) result[k++] = source[i++];
    while(j < i_len) result[k++] = insert[j++];
    while(i < s_len) result[k++] = source[i++];

    result[k] = '\0';

    return result;
}

int main(int argc, char *argv[]) {
    if(argc != 4) {
        printf("usage: insert [source] [insert] [index]\n");
        return EXIT_FAILURE;
    } else {
        char *newString = insert(argv[1], argv[2], atoi(argv[3]));
        printf("%s\n", newString);
        free(newString);
        return EXIT_SUCCESS;
    }
}
