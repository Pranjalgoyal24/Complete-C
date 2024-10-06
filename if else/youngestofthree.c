#include<stdio.h>

int main() {
int ram,shyam,ajay;
printf("enter ram's age :");
scanf("%d",&ram);
printf("enter shyam's age :");
scanf("%d",&shyam);
printf("enter ajay's age :");
scanf("%d",&ajay);
if (ram<shyam)
{
    if (ram<ajay)
        printf("Ram's age is youngest");
    else 
    printf("ajay is youngest");
}
else
{
    if(shyam<ajay)
    printf("shyam is youngest");
    else
    printf("ajay is youngest");
}


return 0;
}