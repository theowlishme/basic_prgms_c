#include <stdio.h>

int main() {
    int n;
    float sum = 0; 
    float avg;

    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    float marks[n];

    printf("Enter the marks: ");
    for (int i = 0; i < n; i++) {
        scanf("%f", &marks[i]);
        sum += marks[i];
    }

    avg =sum/n;
    printf("Average Marks: %.2f\n", avg);

    return 0;
}
