#include<stdio.h>

int main() {
int num;
printf("Enter number : ");
scanf("%d",&num);
if (num>99 && 1000>num)
{
    printf("%d is a three digit number",num);
}
else
printf("%d is not a three digit",num);
return 0;
}