#include<stdio.h>

int main() {
int n;

printf("Enter the number for prime factorization :");
scanf("%d",&n);
int prime[n];
for(int i=1;i<=n;i++){
    if(n%i ==0){
        printf("%d ",i);
    }
}
// for(int i=0;i<n;i++){
//     printf("%d ",prime[i]);
// }
return 0;
}