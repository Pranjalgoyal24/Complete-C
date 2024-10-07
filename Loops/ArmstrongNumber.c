#include<stdio.h>

int main() {
int n;
printf("Enter a number : ");
scanf("%d",&n);
int original=n;
int power =0;
int last_digit=0;
while(n!=0){
    last_digit = n%10;
    power=power+last_digit*last_digit*last_digit;
    
    n = n/10;
    
}
if(power == original){
        printf("%d is armstrong number ",original);
    }
    else {
        printf("%d is not an armstrong number");
    }

return 0;
}