#include <stdio.h>
int fac ( int n) {

    int result = 1;
    for (int i = n; i > 0; i-- )
    result *= i;
    return result;
}

int main () {
    
    int n;
    printf ("Enter a number : ");
    scanf("%d",&n);
    printf("%d! = %d ", n, fac(n));
    return 0;

}
