#include <stdio.h>
#include <stdlib.h>


float funcRec1(int a){
    if(a==1){
        printf("0.5\n");
        return 0.5;
    }
    else if(a==0){
        printf("0\n");
        return 0;
    }
    else{
        printf("(%d-2)+ 1 = %d\n", a, (a-2+1));
        return funcRec1((a-2)) + 1;
}
}

int main()
{
    printf("Começo!\n");
    funcRec1(-1);
    return 0;
}
