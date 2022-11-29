#include <stdio.h>
#include "my_mat.h"
#define sizeofmatrix 10

void createdismatrix(int[10][10]);

void functionA(int matrix[10][10]){
    for (int i = 0; i < sizeofmatrix; i++)
    {
        for (int j = 0; j < sizeofmatrix; j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
}

void functionB(int matrix[10][10],int i,int j){
   if (matrix[i][j]!=0)
   {
        printf("True\n");
   }else{
        printf("False\n");
   }
}

void functionC(int matrix[10][10],int i,int j){
    int shortdis = matrix[i][j];
    if (shortdis!=0)
    {
        printf("%d\n",shortdis);
    }else{
        printf("%d\n",-1);
    }
}

void createdismatrix(int matrix[10][10]){
    for (int k = 0; k <sizeofmatrix; k++)
    {
        for (int i = 0; i < sizeofmatrix; i++)
        {
            for (int j = 0; j < sizeofmatrix; j++)
            {
                if (i!=j&&matrix[i][j]==0)
                {
                    if (matrix[i][k]!=0&&matrix[k][j]!=0)
                    {
                        matrix[i][j]=(matrix[i][k]+matrix[k][j]);
                    }
                }else{
                    if (matrix[i][k]!=0&&matrix[k][j]!=0)
                    {
                        matrix[i][j]=(matrix[i][j]<(matrix[i][k]+matrix[k][j]))? matrix[i][j]:(matrix[i][k]+matrix[k][j]);
                    }
                }
            }
        }
    }
}