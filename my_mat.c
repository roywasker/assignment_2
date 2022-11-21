#include <stdio.h>
#include "my_mat.h"
#define sizeofmatrix 10
#define intmax 2147483647

void functionA(int matrix[10][10]){
    for (int i = 0; i < sizeofmatrix; i++)
    {
        for (int j = 0; j < sizeofmatrix; j++)
        {
            scanf("%d",matrix[i][j]);
        }
    }
}

void functionB(int matrix[10][10],int i,int j){
   if (matrix[i][j]!=0)
   {
        printf("True");
   }else{
        printf("False");
   }
}

void functionC(int matrix[10][10],int i,int j){
    int min=intmax;
    for (int k = 0; k <sizeofmatrix; k++)
    {
        for (int i = 0; i < sizeofmatrix; i++)
        {
            for (int j = 0; j < sizeofmatrix; j++)
            {
                if (matrix[i][j]!=0&&matrix[i][k]!=0&&matrix[k][j]!=0)
                {
                    int shortdis=0;
                    shortdis=(matrix[i][j]<(matrix[i][k-1]+matrix[k+1][j]))? matrix[i][j]:(matrix[i][k]+matrix[k][j]);
                    if (shortdis < min)
                    {
                        min=shortdis;
                    }
                }
            }
        }
    }
    if (min!=0)
    {
        printf("%d",min);
    }else{
        printf("%d",-1);
    }
}