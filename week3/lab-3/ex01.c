#include <stdio.h>

int main(){
    int a;
    float B;
    char C;

    printf("Enter the value: ");
    scanf(" %d", &a);
    printf("you entered %d\n", a);


    printf("please enter an float value :", B);
    scanf(" %f",&B);
    printf("you entered %.1f\n",B);


    printf("please enter a character : ",&C);
    scanf(" %c",&C);
    printf("you entered %c\n",C);
 return 0;
}