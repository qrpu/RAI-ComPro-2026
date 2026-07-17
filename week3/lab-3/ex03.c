#include <stdio.h>

int main(){
    char name [20];
    printf("Enter your name: ");
    scanf("%[^\n]",name);
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    float height;
    printf("Enter your height: ");   
    scanf("%f",&height);
    char gender;
    printf("Enter your gender: ");
    scanf(" %c",&gender);
    char edu[30];
    printf("Enter your education: ");
    scanf(" %[^\n]",edu);

    printf("\nName : %s\n, Age : %d\n, Height : %.2f\n, Gender : %c\n, Education : %s\n",name,age,height,gender,edu);




}