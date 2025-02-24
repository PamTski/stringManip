/*  
  	DO NOT CHANGE THE CONTENTS OF THIS FILE!!!
  	
  	Do NOT compile JUST this file independently.
  	
	Note that if you compile JUST this file only, you will get an error that says "undefined
	reference to WinMain" (for DEVCPP users).  
	
	This file is already included in the main.c via #include.
	
	It is the main.c that you you should compile to produce the main.exe file. 
*/

/* DO NOT CHANGE THE #include below.  You are NOT allowed to include other files. */
#include <stdio.h>
#include <string.h>

#include "practice.h"

/*
	Prints the elements of a matrix of of string.
*/	
void
PrintMatrix(Matrix M, int n_rows, int n_cols)
{
	int i, j;
	
	for (i = 0; i < n_rows; i++) {
		for (j = 0; j < n_cols; j++) 
			printf("%-15s ", M[i][j]);
			
		printf("\n");
	}
}

/*
	Prints the elements of a 1D array of string.
*/	
void
PrintList(String A[], int n)
{
	int i;
	for (i = 0; i < n; i++)
		printf("%s\n", A[i]);	
}

/*
	This is the function that will test if the Populate() function works correctly or not.
*/
void 
Test_Populate(Matrix M, int *ptr_rows, int *ptr_cols)
{
	Populate(M, ptr_rows, ptr_cols);
	PrintMatrix(M, *ptr_rows, *ptr_cols);	
	printf("\n");
}	

/*
	This is the function that will test if the Search() function works correctly or not.
*/
void
Test_Search(Matrix M, int n_rows, int n_cols)
{
	String key;
	int row_index, col_index;
	
	strcpy(key, "SYNTAX");
	Search(M, n_rows, n_cols, key, &row_index, &col_index);
	if (row_index >= 0 && col_index >= 0) // search key was found
		printf("FOUND: %s %d %d\n", key, row_index, col_index);
	else 
		printf("NOT-FOUND: %s %d %d\n", key, row_index, col_index);

	// Test Search() function -- not found case.
	strcpy(key, "ZZZ");
	Search(M, n_rows, n_cols, key, &row_index, &col_index);
	if (row_index >= 0 && col_index >= 0) // search key was found
		printf("FOUND: %s %d %d\n", key, row_index, col_index);
	else 
		printf("NOT-FOUND: %s %d %d\n", key, row_index, col_index);
	
	// Test Search() function -- found case.
	strcpy(key, M[1][2]);
	Search(M, n_rows, n_cols, key, &row_index, &col_index);
	if (row_index >= 0 && col_index >= 0) // search key was found
		printf("FOUND: %s %d %d\n", key, row_index, col_index);
	else 
		printf("NOT-FOUND: %s %d %d\n", key, row_index, col_index);
	printf("\n");
}

/*
	This is the function that will test if the Transpose() function works correctly or not.
*/
void 
Test_Transpose(Matrix M, int n_rowsM, int n_colsM)
{
	Matrix T;
	int n_rowsT, n_colsT;
	
	Transpose(T, M, n_rowsM, n_colsM);
	n_rowsT = n_colsM;
	n_colsT = n_rowsM;
	PrintMatrix(T, n_rowsT, n_colsT);	
	printf("\n");	
}

/*
	This is the function that will test if the Filter() function works correctly or not.
*/
void
Test_Filter(Matrix M, int n_rows, int n_cols)
{
	Matrix T;
	String filter;
	
	strcpy(filter, "EO");	
	Filter(filter, T, M, n_rows, n_cols);
	PrintMatrix(T, n_rows, n_cols);	
	printf("\n");
}

/*
	This is the function that will test if the RowSort() function works correctly or not.
*/
void
Test_RowSort(Matrix M, int n_rows, int n_cols)
{
	Matrix T;
	
	RowSort(T, M, n_rows, n_cols);
	PrintMatrix(T, n_rows, n_cols);	
	printf("\n");
}

