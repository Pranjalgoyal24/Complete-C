#include<stdio.h>

int main() {
int percent;
printf("Enter percentage : ");
scanf("%d",&percent);
if (percent>=90 && percent <=100)
{
    printf("You got excellent 'O' ");
}
else if (percent>=80 && percent <= 90)
{
    printf("You got A+ Grade");
}
else if (percent>=70 && percent <= 80)
{
    printf("You got A Grade");
}
else if (percent>=60 && percent <= 70)
{
    printf("You got B+ Grade");
}
else if (percent>=50 && percent <= 60)
{
    printf("You got B Grade");
}
else if (percent>=40 && percent <= 50)
{
    printf("You got C Grade");
}
else if (percent<35)
{
    printf("You are fail");
}


return 0;
}