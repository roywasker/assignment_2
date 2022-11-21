#include <stdio.h>
#include "my_mat.h"


int main(){
    char ch;
    scanf("%c",&ch);
    int matrix[10][10];
    while (ch!='D')
    {
        int i,j;
        if(ch=='A'){
            functionA(matrix);
        }else if (ch=='B')
        {
            scanf("%d %d",i ,j);
            functionB(matrix, i,j);
            printf("\n");
        }else if (ch=='C')
        {
            scanf("%d %d",i ,j);
            functionC(matrix, i,j);
            printf("\n");
        }
        scanf("%c",&ch);
    }
    return 0;
}