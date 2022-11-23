#include <stdio.h>
/*
The way your elixir works is that anyone who is at least 21 years old becomes 
ten years younger. However, the elixir does not work on anyone twenty years old 
or younger - when these people try the elixir, they actually double in age!

You have already created a main function, shown below. All you need to do now is 
write a function which accepts the integer pointer "ageAddr" as an argument and 
modifies the integer this pointer points to according to the rules of your elixir. 
Since you are using pointers to change the value of the variable age, your function 
should have a void return type
*/

//Write your function prototype here
void modify(int *);

int main(void){
	int age;
	int *ageAddr = &age;
	scanf("%d", ageAddr);
	printf("Your current age is %d.\n", age);

	//Write your function call here
	modify(ageAddr);

	printf("Your new age will be %d!\n", age);
	return 0;
}


//Write your function here
void modify(int * ageAddr) {
    if (* ageAddr >= 21) {
        * ageAddr = * ageAddr - 10;
    }else if (* ageAddr <= 20){
        * ageAddr = * ageAddr + * ageAddr;
    }
    
}