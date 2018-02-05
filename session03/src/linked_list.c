#include <stdio.h>

int main(void) {
    struct item {
        int value;
        struct item *next;
    };
    struct item first = { .value = 10 };
    struct item second = { .value = 20 };
    first.next = &second;

    struct item new_first = { 5, &first };

    struct item *head = &new_first;
    int i = 0;
    while (head) {
        printf("position %i - %i\n", i, head->value);
        i++;
        head = head->next;
    }
}
