#include<stdio.h>
int main(){

    int num1,num2,menu;
printf("enter num1 :");
scanf("%d", &num1);
printf("enter num2 :");
scanf("%d", &num2);

printf("calculator menu :\n");
printf("1. +\n");
printf("2. -\n");
printf("3. *\n");
printf("4. /\n");
printf("5. %%\n");

printf("enter :  ");
scanf("%d", &menu);

switch (menu){
    case 1:
        printf("%d + %d = %d",num1,num2,num1+num2);
        break;
    case 2:
        printf("%d - %d = %d",num1,num2,num1-num2);
        break;
    case 3:
        printf("%d * %d = %d",num1,num2,num1*num2);
        break;
    case 4:
        
        printf("%d / %d = %.2f",num1,num2,(float)num1/num2);
        break;
    case 5:
        
        printf("%d %% %d = %d",num1,num2,num1%num2);
        break;
    }

return 0;




}