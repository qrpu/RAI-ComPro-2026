#include <stdio.h>
int main(){
int a,b,c,f,g,v,h,i,z;
printf("enter the first value");
scanf("%d", &a,&f,&h);
printf("enter the second value");
scanf("%d", &b,&g,&i);
c = a + b;
v = f - g;
z = h * i;
printf("%d + %d = %d\n",a,b,c);
printf("%d - %d = %d\n",f,g,v);
printf("%d * %d = %d\n",h,i,z);
return 0;

}