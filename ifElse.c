#include <stdio.h>

/*
In a hostel, one room costs nothing if you are exactly 60 (the age of the innkeeper), 
or 5 dollars if you are less than 10 years old. For everyone else, 
the cost is 30 dollars plus an additional 10 dollars if you bring 
more than 20 pounds of luggage. Write a program to read the customer's 
age first, then the weight of their luggage, then output the price 
one has to pay for a night.
*/

int main(void) {
    int age, luggageWeight;
    
    scanf("%d%d", &age, &luggageWeight);
    
    if (age == 60) {
        printf("%d", 0);
    }else if (age < 10) {
        printf("%d", 5);
    }else if (age >= 10 && luggageWeight > 20){
        printf("%d", 40);
    }else {
        printf("%d", 30);
    }
}