#include<stdio.h>
int main(){

    float   num1, num2;
    printf("enter number1 :");
    scanf("%f", &num1);
    printf("enter number2 :");
    scanf("%f", &num2);
    if (num2 !=0)
       printf("%.2f / %.2f = %.2f",num1, num2, num1/num2);
    else
       printf("error divided by zero\n");
       return(0);



}