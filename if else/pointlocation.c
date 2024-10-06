#include<stdio.h>

int main() {
int x,y;
printf("ENter co-ordinate :");
scanf("%d%d",&x,&y );
if (x==0 && y==0)
{
    printf("The point is in the origin");
}
else if(x == 0 ){
    printf("Lies on y-axis");
}
else if(y==0){
    printf("lies on x-axis");
}
else 
printf("The point is not on any axis");

return 0;
}