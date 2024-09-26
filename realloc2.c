#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 50

int main() {
    int i;
    char **strArr = (char **)malloc(3 * sizeof(char *));
    if (strArr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    for (i = 0; i < 3; i++) {
        strArr[i] = (char *)malloc(MAX_LEN * sizeof(char));
    }

    printf("Enter 3 strings: ");
    for (i = 0; i < 3; i++) {
        scanf("%s", strArr[i]);
    }

    strArr = (char **)realloc(strArr, 5 * sizeof(char *));
    for (i = 3; i < 5; i++) {
        strArr[i] = (char *)malloc(MAX_LEN * sizeof(char));
    }

    printf("Enter 2 more strings: ");
    for (i = 3; i < 5; i++) {
        scanf("%s", strArr[i]);
    }

    printf("All strings: ");
    for (i = 0; i < 5; i++) {
        printf("%s ", strArr[i]);
    }
    printf("\n");

    for (i = 0; i < 5; i++) {
        free(strArr[i]);
    }
    free(strArr);

    return 0;
}