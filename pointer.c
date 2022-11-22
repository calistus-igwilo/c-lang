#include <stdio.h>
#include <string.h>


int main(){
    int age = 37;
    int *address = &age;

    printf("%p\n", &age);
    printf("%u\n", *address);

    *address = 47;
    printf("%u\n", *address);

    int prices[3] = {5, 4, 3};
    printf("%u\n", *prices); /* 5 it prints the value of the first element*/
}
