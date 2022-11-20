#include <stdio.h>
// 5! = 1*2*3*4*5
// n! = 1*2*3*...*(n-1)*n
//recursion : one function calls itself
int factorial(int);
int main(void) {
    int n, facto;
    printf("Please enter a positive integer: ");
    scanf("%d",&n);
    if(n<0){
        printf("%d is negative! Aborting..\n", n);
    }else{
        facto = factorial(n);
        printf("%d! = %d.\n", n , facto);
    }
    return 0;
}
int factorial(int n){
    int result;
    if(n==0){
        result=1;
    }else{
        result = n * factorial(n-1);
    }
    return result;
}


