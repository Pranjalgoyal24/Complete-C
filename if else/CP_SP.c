#include<stdio.h>

int main() {
int cp ,sp ;
printf("Enter cost price : ");
scanf("%d",&cp);
printf("Enter selling price : ");
scanf("%d",&sp);
if (sp > cp)
{
    int profit = sp-cp;
    printf("The profit he made Is : %d",profit);
}
if (cp>sp){
    int loss = cp-sp;
    printf("The loss he got : %d",loss);
}
if (cp==sp)
{
    printf("The shopkeeper nor get profit neither loss");
}

return 0;
}