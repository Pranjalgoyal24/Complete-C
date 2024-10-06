#include<stdio.h>

int main() {
int n;
printf("Enter number : ");
scanf("%d",&n);
if ((n%5 == 0 || n%3 == 0) && n%15==0) //isme bracket isliye lagaya kuki () iski priority jyada hoti hai
{
    printf("The numbeer is divisible by  or 3 but not fifteen");
}
else
{
    printf("The number is not matching the requird condition");
}


return 0;
}