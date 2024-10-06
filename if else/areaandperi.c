#include<stdio.h>

int main() {
int len , breadth;
printf("Enter the length of rectangle : ");
scanf("%d",&len);
printf("Enter the breadth of rectangle : ");
scanf("%d",&breadth);
int area = len*breadth;
int peri = 2*(len+breadth);
if (area>peri)
{
    printf("Area is greater than perimeter of rrectangle");
}
else
{
    printf("Area is not greater than perimetre");
}


return 0;
}