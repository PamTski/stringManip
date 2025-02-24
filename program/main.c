/*
    This is main.c file.  It contains the main() function for the PRACTICE problem.
	
	DO the following to test your LASTNAME-PRACTICE.c solution: 
	
	1. Edit Line 40 below to include your own source file.
	2. Compile this main.c file to produce main.exe.  Make sure to use -Wall compiler directive!
	3. If there are no compilation errors and/or warnings, go to the Command Line Interface via CMD. 
	4. Run main.exe in the command line with I/O redirection as follows:
   
           	main < INPUT.txt > LASTNAME-ACTUAL.txt           	

	   where INPUT.txt is an accompanying sample text files that contain input data 
	   read via scanf() in the Initialize() function.

       For example, if your lastname is SANTOS, you should run main.exe as:
	   
       		main < INPUT.txt > SANTOS-ACTUAL.txt
		      
    5. Using Notepad (or other text editors), open and compare your LASTNAME-ACTUAL.txt with the 
	   contents of the accompanying EXPECTED.TXT file. They should be exactly the same -- even the spacing!
	   If they are not the same, then there's a strong probability that there's a logical error in your 
	   solution, or you did not follow some specifications.  

	6. Debug and retry until you get the correct results.    
	   
	7. Devise your own tests. Do NOT simply depend on the sample INPUT and EXPECTED results. 	
*/

/* DO NOT CHANGE THE #include below.  You are NOT allowed to include other files. */
#include <stdio.h>
#include <string.h>

#include "practice.h"

/*
    TO DO: change the #include below to your own file/solution. For example if your 
	lastname is SANTOS, then it should be changed to #include SANTOS-PRACTICE.c
*/	
#include "LASTNAME-PRACTICE.c"

#include "test_functions.c"		// read/understand the contents of this C file


/*
    This is the main() function for testing your solution.  
	
	You are not supposed to modify the contents (logic) of this function.
    
    If you need to experiment, i.e. you'd like to edit/introduce new codes, then it is suggested that you
	copy this file, and make changes on your copy.
	
	Note that the teacher-in-charge of checking your solution may use another set of input data 
	and a different main() function.  
	
	Your solutions should work correctly even with a different set of input data 
	and a different main() function.


*/	

void printArr(Matrix M, int nRows, int nCol){
   for(int i = 0; i < nRows; i++){
    for(int j = 0; j < nCol; j++){
      printf("%s\t\t", M[i][j]);
    }
    printf("\n");
  }
}

int main()
{
	Matrix M;             // M is a 2D array of strings
	int n_rowsM, n_colsM; // number of rows and columns of matrix M

	// #1. Test Populate() function.
	printf("#1-Populate():\n");
	Test_Populate(M, &n_rowsM, &n_colsM);
		
	//#2. Test Search() function
	printf("#2-Search():\n");
  Test_Search(M, n_rowsM, n_colsM);	
	
	// #3. Test Transpose() function.
	printf("#3-Transpose():\n");
	Test_Transpose(M, n_rowsM, n_colsM);	
		
	// #4. Test Filter() function.
	printf("#4-Filter():\n");	
	Test_Filter(M, n_rowsM, n_colsM);	
	
	//5. Test RowSort() function.
	printf("#5-RowSort():\n");	
	Test_RowSort(M, n_rowsM, n_colsM);	
		
	return 0;
}

