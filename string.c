#include <stdio.h>
#include <string.h>

int main(){
    char name[50] = "Ebunilo";
    int prices[5];

    printf("%s\n", name);

    /* name = "Calistus"; */
    strcpy(name, "Calistus");
    printf("%s\n", name);

    for (int i=0; i<5; i++){
        prices[i] = i + 1;
    }

    printf("%d\n", *prices); /* 1 */
    printf("%d\n", *(prices + 1)); /* 2 */
    printf("%d\n", *(prices + 2)); /* 3 */
}