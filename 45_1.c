#include <stdio.h>
int fac(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fac(n - 1);
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("%d! = %d", n, fac(n));
    return 0;
}