#include <stdio.h>
#include "my_mat.h"


int main(){
    char ch;
    scanf("%c",&ch);
    int matrix[10][10];
    while (ch!='D')
    {
        int i,j;
        switch (ch)
        {
        case 'A':
            functionA(matrix);
            createdismatrix(matrix);
            break;
        case 'B':
            scanf("%d %d",&i ,&j);
            functionB(matrix, i,j);
            break;
        case 'C':
            scanf("%d %d",&i ,&j);
            functionC(matrix, i,j);
            break;
        default:
            break;
        }
        scanf("%c",&ch);
    }
    return 0;
}