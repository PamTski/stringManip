# _String Manipulation_  
February 10, 2024	
By: Philip Martin Antolihao
> This program uses the `INPUT.txt` file to automate testing. read the README file to know what each is for.

## Populate function
![](WriteupPics/Populate.png)
> Why pointers? this because we need to return two values, usual functions can only return one.  

This function takes the data of for the number of rows and the number of columns for the table of strings. This means that our table could end up being much smaller than what was dictated in the `Matrix` type definition although note that it does dictate its maximum size
 
 The **`for`** loop, this a simple population nested loop iterates through every spot and fills it with strings dictated by the input file    

* _@param_ **Matrix M** - Matrix is a predefined 2d array of strings  
`typedef String Matrix[MAX_ROWS][MAX_COLS];`  
[ ! ] MAX ROWS and MAX COLS are globally defined fixed integers  

* _@param_ ***ptr_nRows** & ***ptr_ncols** - these variables are meant to contain the address of the variable that holds the integer value of rows and columns

_**The `scanf` function:**_ while using the `scanf` function there is no need to use the **&** symbol this is because these are inherently addresses already since they are pointers  
_**The parameters of the for loop**_: We dereferenced the pointers since we needed the actual integer value that is stored inside them

there is no return value for this function.

## Search Function
![](WriteupPics/Search.png)

> note: the parameters contain the nRows and nCol as an integer now

This function iterates through each slot in the table and uses string compare to check the similarity between the key and the current string. When `strcmp` returns a zero the current index is saved into the `*ptr_row_index` and `*ptr_col_index`. The value of is set to **-1** these assumes not found, value is only updated when `key` and the string is equal.

* _@param_ `n_cols` and `n_row ` - integer value passed from the previous section there is no need to modify it, it is used for the `for` loop

* _@param_ `ptr_row_index` and `ptr_row_index` - this stores the value of the found index initially set to **-1** asusming not found

* _@param_ `Matrix M` - you know what this is..


## Transpose
![](WriteupPics/Transpose.png)
> note: a seperate table is made here to write on to, the original copy remains unmodified 

This function is is just a simple subtitution where the row indices get swapped with column indices making the columns the rows and vice versa 

A simple loop just switches the two.

* @param `Matrix T` - the seperate table that is to be transposed
* @param `Matrix M` - the source table, original
* @param `n_rowsM` & `n_colsM` - integer values of row and columns for `for` loop purposes

## Filter
Objective: Find all the word in the table that contains the letters in the `filter` string. If the word contains it add `+` to the start and end of the word, and if not add `-`. Example `+HELLO+` or `-GREEN-`

![](WriteupPics/FilterLoop.png)
> Figure: this is the loop to access each needed area

The first two loop declarations iterate over the rows and columns of matrix m, allowing access to each word within the table.
Note that filter is a pointer (*filter), which indicates that it is most likely a string. Since the filter consists of multiple letters, we must iterate through each character to perform the necessary comparisons. Detecting  Mechanism and counter

> For succeeding explanations, assume `*filter` is **"EO"** and all words are **UPPERCASE**

We have two detection counters: per_letter and per_word. Since a word may contain multiple occurrences of a filtered letter (e.g., "Green" contains 'E' twice), this can lead to false positives by incorrectly suggesting that the letter-based filter condition is met multiple times.
To mitigate this, we count each unique occurrence of a filter letter within a word only once. While per_letter may increment multiple times for repeated letters, per_word will only increase once per distinct letter found in the word.
In the final evaluation, per_word determines whether the word meets the filter criteria. For the word to pass, per_word must be equal to the length of the *filter string—ensuring that each letter in *filter appears at least once in the word.

#### Marking Mechanism
![](WriteupPics/FilterMark.png)
> Figure: This if statement adds the `+ word +` or `- word -` mark to the appropriate sentences 

This is just a simple concatenate snippet where it adds a string next to another just note that `pos[2]` and `neg[2]` contain "+" and
 "-" respectively. 
 
 I guess its also important that this new string is copied from the temp var to the new and final location of the same index as the `Matrix M` but now in `Matrix T`






