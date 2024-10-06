#include <stdio.h>

void prime_factors(int n) {
    while (n % 2 != 0) {
        printf("%d ", 2);
        n = n / 2;
    }
    for (int i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n = n / i;
        }
    }
    if (n > 2) {
        printf("%d", n);
    }

    printf("\n");
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Prime factors of %d are: ", n);
    prime_factors(n);

    return 0;
}
