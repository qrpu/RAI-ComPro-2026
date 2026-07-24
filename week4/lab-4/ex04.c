#include<stdio.h>
int main(){
    char name[40];
    float calc, phy, sci;
    float avg;
    char avg1;

    printf("Enter your name : ");
    scanf("%[^\n]", name);
    printf("Enter your calculus score : ");
    scanf("%f", &calc);
    printf("Enter your physics score : ");
    scanf("%f", &phy);
    printf("Enter your science score : ");
    scanf("%f", &sci);
    avg = (calc + phy + sci) / 3;
if(avg >= 80)
    avg1 = 'A';
else if(avg >= 70)
    avg1 = 'B';
else if(avg >= 60)
    avg1 = 'C';
else if(avg >= 50)
    avg1 = 'D';    
else
    avg1 = 'F';
    
    printf ("%s, your averagge is %.2f. Your grade is %c\n",name, avg, avg1 );
}