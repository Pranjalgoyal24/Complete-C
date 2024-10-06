#include<stdio.h>

int main() {
int n1 ,n2,n3;
printf("enter first number :");
scanf("%d",&n1);
printf("enter second number :");
scanf("%d",&n2);
printf("enter second number :");
scanf("%d",&n3);
if (n1>n2)//n2 is out of race
{
    if(n1>n3)
    printf("%d is greatest",n1);
    else
    {
        printf("%d is greatgest",n3);
    }
    
    
}
else  // N2>n1 --> n1 ab sabse bada nahi hai
{
    if(n2>n3)
         printf("%d is greatest",n2);
    
    else // n3>n2 ---> n1<n2<n3
    
         printf("%d is greatest",n3);
    
}


return 0;
}