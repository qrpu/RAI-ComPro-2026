#include <stdio.h>
int main()
{
int num;
int fac = 1;
int i;
printf("Enter a number:");
scanf("%d", &num);

if (num <= 0){
    printf("%d is not able to factorise\n", num);
}
    else {
    for (i = 1; i <= num; i++)
    {
        fac *= i;
    }
    {
        printf("Factorial of %d is %d\n", num, fac);
    }


}
return(0);    
}