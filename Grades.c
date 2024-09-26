#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, max, min;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    int *grades = (int *)malloc(n * sizeof(int));
    if (grades == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter the grades: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &grades[i]);
    }

    max = min = grades[0];
    for (int i = 1; i < n; i++) {
        if (grades[i] > max) max = grades[i];
        if (grades[i] < min) min = grades[i];
    }

    printf("Highest grade: %d\n", max);
    printf("Lowest grade: %d\n", min);

    free(grades);

    return 0;
}