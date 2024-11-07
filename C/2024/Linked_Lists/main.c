#include <stdio.h>
#include <stdlib.h>
#include "linkedlist.h"

int main(void) {
    struct Node* first = malloc(sizeof(struct Node*));  // Speichert Platz
    if (first == NULL) {
        printf("malloc"); // falls speicher nicht reserviert wurde für first
        return 1;
    }
    struct Node* second = malloc(sizeof(struct Node*));
    if (second == NULL) {
        perror("malloc"); // falls speicher nicht reserviert wurde für second
        return 1;
    }
    struct Node* third = malloc(sizeof(struct Node*));
    if (third == NULL) {
        printf("malloc"); // falls speicher nicht reserviert wurde für third
        return 1;
    }

    first->data = 10;
    second->data = 20;      // zuweisung von werten an first, second und third
    third->data = 30;

    first->next = second;
    second->next = third;      // verlinkung von first zu second, second zu third und third zu null, weil es das ende ist
    third->next = NULL;

    free(first);
    free(second);   // freigebung vom speicher von first, second und third
    free(third);
    first = NULL;
    second = NULL;  // zuweisung von null and first, second und third, falls der speicher nicht freigegeben wurde
    third = NULL;




    return 0;
}
