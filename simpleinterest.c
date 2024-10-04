#include<stdio.h>

int main() {
float principal ,rate,time;
printf("The principal is");
scanf("%f",&principal);
printf("The rate is");
scanf("%f",&rate);
printf("The time is");
scanf("%f",&time);
float SI = (principal*rate*time)/100;
printf("The simple interst is : %f",SI);
return 0;
}