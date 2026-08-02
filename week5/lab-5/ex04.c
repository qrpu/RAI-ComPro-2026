#include <stdio.h>
int main()
{
int num;
int i;
int result;

printf("Enter a number:");
scanf("%d", &num);
printf("Multiplication table of %d for:\n", num);
for(i = 1; i <= 12; i++ )
{
    result = num * i;
    printf("%d x %d = %d\n", num, i, result);
}

return(0);

}