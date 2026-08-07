#include<stdio.h>
int main(){

int num,i,j;
int rows,cols;
int number[3][3];

for(rows = 0; rows < 3; rows++)
    {
        for(cols = 0; cols < 3; cols++)
        {
            printf("Enter number [%d][%d]: ", rows + 1, cols + 1);
            scanf("%d", &number[rows][cols]);
        }
    }
    printf("\n***Matrix***\n");
    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            printf("%d ", number[i][j]);
        }
        printf("\n");
    }

return(0);
}
