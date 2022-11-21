#include <stdio.h>

int sumOfDigits(int);

int main(void){
    int number;
    
    scanf("%d", &number);
    printf("%d", sumOfDigits(number));
    
    return 0;
    
}

int sumOfDigits(int number) {
    if (number == 0) {
        return 0;
    }
    return ((number % 10) + sumOfDigits(number / 10));
}