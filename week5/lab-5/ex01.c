#include <stdio.h>
int main()
{
    int num = 0;
    int sum = 0;
    int i;

    for (i = 1; i <= 10; i++)
    {
        printf("%d.Enter the number:", i );
        scanf("%d", &num);
        sum += num;
    }
printf("\ntotal sum is %d\n",sum);
printf("Average is %.2f \n", (float)sum / 10.00f);

return (0);
}