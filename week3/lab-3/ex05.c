#include <stdio.h>

int main(){
char name [20];
printf("Enter your full name: ");
scanf("%[^\n]",name);
int age;
printf("Enter your age: ");
scanf("%d",&age);
float height;
printf("Enter your height: ");
scanf("%f",&height);
char uni [20];
printf("Enter your university name: ");
scanf(" %[^\n]",uni);

printf("\nHi! Everyone. This is %s. from %s. I am %d years old and my height is %.1f cm tall.",name,uni,age,height);
return 0;
}
