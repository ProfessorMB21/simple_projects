///////////////////////////////////////////////////////////////////////////////
//////////////////////////////////// HEADER.H /////////////////////////////////
///////////////////////////////////////////////////////////////////////////////

/**
* Fill an array with random numbers
* Sort a 2d array. You choose the sorting algo yourself
* 	- bubble sort
*	- quicksort
*   - shaker sort
* write a new sorting method/algo
* use any 2 comparators for the sorting algos
* 	- use function pointer for this(e.g quicksort)
* 	- include lambda expressions in your comparators
*/

#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <ctime>
#include <cstddef>

/**
* function to fill an array with random numbers
* creates a 1d/2d array
* sorting function using the merge sort algorithm
* sorting function using the bubble sort algorithm
* use lambda expressions in algorithm comparators
* function to display elements in the array
* function to delete and free allocated memory of an array
* 
*/

/** prototypes */
void create2dArr(int **&arr, int rows);
void fill2dArr(int **arr);
void print2dArr(int **arr);
void del2dArr(int **arr);
void swap(int &a, int &b);
void bubblesort2d(int **arr, bool (*cmp)(int a, int b));

//////////////// ALERT!! COMPARATORS BELOW ////////////////////////////////////
/**
* compareDesc - Compare function that helps in sorting an array
*				in descending order of absolute magnitude of a number
*
* @a: integer
* @b: integer
* @return: bool
*/
/**
* compareAsc - Compare function that helps in sorting an array
*				in ascending order of absolute magnitude of a number
*
* @a: integer
* @b: integer
* @return: bool
*/

/** comparators */
auto cmpDesc = [](int a, int b) -> bool { return (a < b);};
auto cmpAsc = [](int a, int b) -> bool { return (a > b);};

///////////////////////////////////////////////////////////////////////////////
////////////////////////////////////// HEADER.H ///////////////////////////////
///////////////////////////////////////////////////////////////////////////////
