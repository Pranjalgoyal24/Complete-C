#include<stdio.h>

int main() {
int x;
printf("Enter the radius of sphere : ");
scanf("%d",&x);
float v = 4*3.14*x*x*x/3;
printf("The volume of sphere is : %f",v);
return 0;
}