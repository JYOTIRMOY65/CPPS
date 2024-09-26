//Program Name: Write a program to add two matrices using function.
//Author: Jyotirmoy Bhuyan		Date: 25/09/2024
#include <stdio.h>

  int rows, columns, i, j;

  void matrixAddition(int mat1[rows][columns], int mat2[rows][columns], int mat3[rows][columns]) 
  
  {
        for (i = 0; i < rows; i++) 
		{
                for (j = 0; j < columns; j++) 
				{
                        mat3[i][j] = mat1[i][j] + mat2[i][j];
                }
        }
  }

  int main() 
  {
        int matrix1[10][10], matrix2[10][10];
        int matrix3[10][10], i, j;

  
        printf("Enter the no of rows and columns(<=10):");
        scanf("%d%d", &rows, &columns);
  
        printf("Enter the elements of first matrix:");
        for (i = 0; i < rows; i++) {
                for (j = 0; j < columns; j++) 
				{
                        scanf("%d", &matrix1[i][j]);
                }
        }

        printf("Enter the elements of second matrix:");
        for (i = 0; i < rows; i++) {
                for (j = 0; j < columns; j++) 
				{
                        scanf("%d", &matrix2[i][j]);
                }
        }

        matrixAddition(matrix1, matrix2, matrix3);

        printf("\Sum of two matrices\n");
        for (i = 0; i < rows; i++) {
                for (j = 0; j < columns; j++) {
                        printf("%d          ", matrix3[i][j]);
                }
                printf("\n");
        }
  }
