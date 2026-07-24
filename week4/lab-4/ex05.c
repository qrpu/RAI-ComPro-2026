#include<stdio.h>
int main(){

    float height;
    float base;
    float volume;
    
    printf("enter cone height :");
    scanf("%f", &height);
    printf("enter cone base radius :");
    scanf("%f", &base);
    volume = (1.0/3.0) * 3.14159 * base * base * height;
    printf("cone volume = %.2f\n",volume);
    
    if (volume >260)
        printf("cone is perfect for Supun project\n");
    else
        printf("cone is not fit for Supun project\n");
    return 0;
}