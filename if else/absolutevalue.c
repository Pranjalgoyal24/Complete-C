#include<stdio.h>

int main() {
int num;
printf("enter the value");
scanf("%d",&num);
if (num<0){ // if n is negative  
    num = num * (-1);
    printf("%d",num);
}
else
printf("%d",num);
return 0;
}