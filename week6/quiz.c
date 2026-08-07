#include<stdio.h>
int main(){

int num,i,j;
char space=' ';

    printf("please enter number:");
    scanf("%d",&num);
    printf("Output:\n");

    for(i = 1; i <= num; i++)
    {
        printf ("\n");
        for(j = 1; j <= num; j++)
        {
            if (i==1 || i==num || j==1 || j==num)
            printf("*");
            else
            printf("%c");
        }
        printf("\n");
    }


return(0);
}