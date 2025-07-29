#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter number of integers: ");
    scanf("%d", &n);
    int numbers[n];
    for (i = 0; i < n; i++) {
        printf("Enter integer %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }
    float average = (float)sum / n;
    printf("Average = %.2f\n", average);
    return 0;
}
