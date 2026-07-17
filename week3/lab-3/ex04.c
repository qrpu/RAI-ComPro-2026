#include <stdio.h>

int main(){
    char name[20];
    printf("Enter your name: ");
    scanf("%[^\n]",name);
    int id;
    printf("Enter your student id: ");
    scanf("%d",&id);
    float prog;
    printf("Enter your programming score: ");
    scanf("%f",&prog);
    float phy;
    printf("Enter your physics score: ");
    scanf("%f",&phy);
    float cal;
    printf("Enter your calculus score: ");
    scanf("%f",&cal);

    float total = (prog + phy + cal)/3;
    printf("HI %s (%d)! your GPA is %.2f\n" ,name,id,total);



}