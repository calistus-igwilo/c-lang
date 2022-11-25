#include <stdio.h>
void setToZero(short **);
int main(){
     //! showMemory(cursors=[t, t[0], t[1]],start=65520)
    short a[3] = {1245, 1924, 234};
    short b[2] = {24, 256};
    short * t[2] = {a,b};
    setToZero(t);
    return 0;
}
void setToZero(short ** t){
    *(*t) = 0;          //t[0][0]  OR  *(t[0] + 0)
    *((*t) + 1) = 0;    //t[0][1]  OR *(t[0] + 1)
    *((*t) + 2) = 0;    //t[0][2]  OR *(t[0] + 2)
    *(*(t+1)) = 0;      //t[1][0]  OR *(t[1] + 0)
    *(*(t+1)+1) = 0;    //t[1][1]  OR *(t[1] + 1)
}