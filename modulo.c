#include<stdio.h>

int main() {
int a,b;
printf("enter the first number : ");
scanf("%d",&a);
printf("enter the second number : ");
scanf("%d",&b);
int reminder = a%b;
printf("The reminder of %d and %d is %d",a,b,reminder);
return 0;
}