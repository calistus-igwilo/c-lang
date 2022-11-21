#include <stdio.h>
int main(){
    //! showMemory(start=65520)
    int a = 42;
    double d = 58.394;
    char c = 'r';
    int * addressOfA = &a;
    printf("address of a: %p\n", addressOfA);
    double * addressOfD = &d;
    printf("address of d: %p\n", addressOfD);
    char * addressOfC = &c;
    printf("address of c: %p\n", addressOfC);
    return 0;
}
