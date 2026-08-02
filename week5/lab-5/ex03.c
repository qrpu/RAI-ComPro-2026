#include <stdio.h>
int main()
{
    int i = 1;
    int num;
    
    do
    {
    printf("%d. Enter the number: ", i);
    scanf("%d", &num);
    
        if (num %2 == 0)
         printf("%d is even.\n", num);
         else
         printf("%d is odd.\n", num);
    i ++;
    }
while (num != 0);
printf("Exiting Program . . . Bye");

return(0);
}
