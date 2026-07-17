#include <stdio.h>
#include <math.h>

int main(){
    int num1;
    int num2;
    int num3;
    printf("Enter interger #1: ");
    scanf("%d", &num1);
    printf("Enter interger #2: ");
    scanf("%d", &num2);
    printf("Enter interger #3: ");
    scanf("%d", &num3);

    int min;
    int max;
    int sum = num1 + num2 + num3;
    float avg = (float)(num1 + num2 + num3) / 3;
    if (num1 < num2 && num1 < num3) {
        min = num1;
    } else if (num2 < num1 && num2 < num3) {
        min = num2;
    } else {
        min = num3;
    }

if (num1 > num2 && num1 > num3) {
        max = num1;
    } else if (num2 > num1 && num2 > num3) {
        max = num2;
    } else {
        max = num3;
    }


    printf("RESULTS:");
    printf("minimum: %d\n", min);
    printf("maximum: %d\n", max);
    printf("sum: %d\n", sum);
    printf("average: %.2f\n", avg);

    return 0;
}