#include <stdio.h>
int main(){
    
    int d;
    printf("Enter total minutes:");
    scanf("%d",&d);
    
    int a =  d/60;
    int f = d%60;
    printf("%d minutes is %d hours and %d minutes\n",d,a,f);



}