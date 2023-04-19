#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int main(){
      char min;
      char max;

      min = CHAR_MIN;
      max = CHAR_MAX;
      while(min != CHAR_MAX){
              printf("%d\n", min);
              min = min+1;
      }

      exit(EXIT_SUCCESS);
}