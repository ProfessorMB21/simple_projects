#include "main.h"

/**
* create2dArr - Creates a 2d array
* @arr: pointer to array
* @size: required size of the array
*
* @return: new allocated memory for the array, otherwise nullptr
*/
void create2dArr(int**& arr, int rows)
{
	if (rows <= 0 || !arr)
		return ;

	arr = new int*[rows];
	for (int i = 0; i < rows; i++)
	{
		arr[i] = new int[rows];
	}	
}

/**
* del2dArr - Frees a 2d dynamically allocated array
* @arr: 2d array to free
*
* @return: void
*/
void del2dArr(int** arr, int rows)
{
	for (int i = 0; i < rows; i++)
	{
		delete[] (arr[i]);
	}
	delete[] (arr);
}

/**
* print2dArr - Prints to stdout elements of a 2d array
* @arr: 2d array
*
* @return: void
*/
void print2dArr(int** arr, int rows)
{
	for (int index = 0; index < rows; index++)
	{
		for (int j = 0; j < rows; j++)
		{
			std::cout<< arr[index][j] <<"\t";
		}
		std::cout << std::endl;
	}
}

/**
* fill2dArr - Fills a 2d array with random numbers
* @arr: 2d array to fill
*
* @return: void
*/
void fill2dArr(int** arr, int rows)
{
	int index, j;

	srand(time(NULL)); /** we seed the value */
	for (index = 0; index < rows; index++)
	{
		for (j = 0; j < rows; j++)
		{
			size_t random = rand() % 1001;
			std::cout<< random <<"\t";
			arr[index][j] = random;
		}
		std::cout << std::endl;
	}
}

/**
* swap - swaps two integers
* @a: integer
* @b: integer
*
* @return: void
*/
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

/**
* bubblesort2d - Sorts a 2d array
* @arr: a 2d array of integers
* @cmp: comparator function that determines how the array is sorted
*
* @return: void
*/
void bubblesort2d(int** arr, bool (*cmp)(int a, int b))
{
	size_t len, i, j;

	len = _msize(arr) / sizeof(arr[0]);
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < len; j++)
		{
			size_t a, b;
			a = i;
			b = j + 1;
			while (true)
			{
				if (b == len)
				{
					b = 0;
					a++;
					if (a == len) break;
				}

				if (cmp(arr[i][j], arr[a][b]))
					swap(arr[i][j], arr[a][b]);
				b++;
			}
		}
	}
}

/**
 * radixSort - sort 2d array
 * 
 * @arr: array of ints
 * @rows: number of rows of the array
 * @cmp: comparator function
 * 
 * @return: nothing
*/
void radixSort(int** arr, int rows, bool (*cmp)(int a, int b)) {
	int maxVal = arr[0][0];
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++) {
			if (cmp(arr[i][j], maxVal)) {
				maxVal = arr[i][j];
			}
		}
	}
}

/**
* countSort - sorts an array
* 
* @arr: 2d dyanamically allocated array
* @rows: number of rows
* @cmp: compare function
* 
* @return: void
*/
void countingSort(int** arr, int rows) {
	//int maxRange = _msize(arr)/sizeof(arr[0]);
	int maxRange = rows;
	int* count = new int[maxRange + 1];
	int count_index = 0;

	//count[maxRange] = { 0 };
	*count = { count_index };

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < rows; j++) {
			count[arr[i][j]]++;
		}
	}

	int index = 0;
	for (int i = 0; i <= maxRange; i++) {
		while (count[i] > 0) {
			for (int j = 0; j < rows; j++) {
				arr[index / rows][index % rows] = i;
				index++;
				count[i]--;
			}
		}
	}
	delete [](count);	// clean up
}


