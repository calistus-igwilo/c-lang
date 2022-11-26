#include <stdio.h>
int main(void){
    //! showMemory(cursors=[matrix[0], matrix[1]], start=65520)
    //! matrix = showArray2D(matrix, rowCursors=[line], colCursors=[col])
    int matrix[2][3];
    int line, col;
    for(line = 0; line < 2; line++){
        for(col = 0; col < 3; col++){
            scanf("%d",&matrix[line][col]);
        }
    }
    printf("You entered: \n");
    for(line = 0; line < 2; line++){
        for(col = 0; col < 3; col++){
            printf("%d ", matrix[line][col]);
        }
        printf("\n");
    }
   
    return 0;
}

