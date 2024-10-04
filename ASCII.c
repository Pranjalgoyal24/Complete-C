// #include<stdio.h>
// #include<string.h>
// int main() {
// char ch = 'P';
// int n = 7;
// int add =0;
// char str[n + 1] = {'P','r','a','n','j','a','l','0/'};
// for(int i=0;i<=n;i++){
//     add = add + str[i];
// }
// printf("%d \n",add);
// printf("%d",ch);
// return 0;
// }

#include<stdio.h>
#include<string.h>

int main() {
    char ch = 'P';
    int n = 7;
    int add = 0;
    char str[8] = {'P','r','a','n','j','a','l','\0'};
    
    for(int i = 0; i < n; i++) {
        add = add + str[i];
    }
    
    printf("%d \n", add);
    printf("%c", ch);
    
    return 0;
}
