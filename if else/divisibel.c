#include<stdio.h>

int main() {
int num;
printf("enter number :");
scanf("%d",&num);
if(num %3 == 0 && num % 5 == 0){
    printf("%d is divisible by 5 and 3",num);
}
return 0;
}