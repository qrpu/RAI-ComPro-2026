#include<stdio.h>
int main(){

int num1;

printf("enter a number : ");
scanf("%d",&num1);

switch(num1 >= 1 && num1 <= 100){
    case 0 :
    printf ("out of range\n");
    break;
    case 1 : 
        switch (num1 %2 == 0){
        case 1:
        printf("%d is even\n",num1); 
        break;
        case 0:
        printf("%d is odd\n",num1);
        break;

        }
        break;
    }

    return 0;
}
