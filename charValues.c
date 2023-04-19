#include <stdio.h>
#include <stdlib.h>
int main(){
      char c;

      c = 'a';
      while(c <= 'z'){
              printf("value %d char %c\n", c, c);
              c = c+1;
      }

      return 0;
}