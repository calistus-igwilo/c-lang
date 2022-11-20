// Fibonacci numbers: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ...
int fibonacci(int);
#include <stdio.h>
int main(void) {
    int N, fib;
    printf("Which Fibonacci number would you like: ");
    scanf("%d", &N);
    if (N<=0) {
        printf("%d is not positive. Aborting!\n", N);
    } else {
        fib = fibonacci(N);
        printf("The %dth Fibonacci number is %d.\n", N, fib);
    }
	return 0;
}

int fibonacci(int n) {
    if (n==1) {
        return 0;
    } else if (n==2) {
        return 1;
    } else {
        return (fibonacci(n-1) + fibonacci(n-2));
    }
}
