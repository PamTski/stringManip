/* 
   Header file for the Practice problem.
   
   DO NOT CHANGE THE CONTENTS OF THIS FILE. 
*/


/* CONCENTRATE only on Lines 14 to 37, you need not be concerned with the other lines. */

#ifndef PRACTICE
	
	#define PRACTICE (1)

	/* macros for maximum number of rows and columns in a matrix */
	#define MAX_ROWS (10)	
	#define MAX_COLS (10)

	/* declare some aliases */
	typedef char String[16];
	typedef String Matrix[MAX_ROWS][MAX_COLS];   // 2D array of strings

	// function prototypes for the functions that the student need to define in the source file LASTNAME_PRACTICE.c
	void Populate(Matrix M, int *ptr_nrows, int *ptr_ncols);
	void Search(Matrix M, int n_rows, int n_cols, String key, int *ptr_row_index, int *ptr_col_index);
	void Transpose(Matrix T, Matrix M, int n_rowsM, int n_colsM);
	void Filter(char *filter, Matrix T, Matrix M, int n_rowsM, int n_colsM);
	void RowSort(Matrix T, Matrix M, int n_rowsM, int n_colsM);

	// the definitions for the following functions are already provided in test_functions.c file
	// they will be used for testing the student's solution	
	void PrintMatrix(Matrix M, int n_rows, int n_cols);
	void PrintList(String A[], int n);	
	void Test_Populate(Matrix M, int *ptr_rows, int *ptr_cols);
	void Test_Search(Matrix M, int n_rows, int n_cols);
	void Test_Transpose(Matrix M, int n_rowsM, int n_colsM);
	void Test_Filter(Matrix M, int n_rows, int n_cols);
	void Test_RowSort(Matrix M, int n_rows, int n_cols);
	
#endif



