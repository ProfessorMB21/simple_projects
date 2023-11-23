#include "Header.h"

/**
* create2dArr - Creates a 2d array
* @arr: pointer to array
* @size: required size of the array
*
* @return: new allocated memory for the array, otherwise nullptr
*/
void create2dArr(int **&arr, int rows)
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
void del2dArr(int **arr)
{
	int rows = _msize(arr) / sizeof(*arr[0]);
	
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
void print2dArr(int **arr)
{
	int rows = _msize(arr) / sizeof(*arr[0]);

	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < rows; j++)
		{
			std::cout << arr[i][j] << " ";
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
void fill2dArr(int **arr)
{
	int rows;

	rows = _msize(arr) / sizeof(*arr[0]);

	for (int index = 0; index < rows; index++)
	{
		/** we seed the value */
		srand(time(NULL));
		for (int j = 0; j < rows; j++)
		{
			arr[index][j] = rand() - RAND_MAX / 1008;			
		}
	}
}

/**
* swap - swaps two integers
* @a: integer
* @b: integer
*
* @return: void
*/
void swap(int &a, int &b)
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
void bubblesort2d(int **arr, bool (*cmp)(int a, int b))
{
	bool flag;
	int len;

	len = _msize(arr) / sizeof(*arr[0]);

	for (int i = 0; i < len; i++)
	{
		flag = false; /** we haven't swapped anything yet */
		for (int j = 0; j < len; j++)
		{
			int a = i;
			int b = j + 1;
			while (true)
			{
				if (b == len)
				{
					b = 0;
					a++;
					if (a == len) break;
				}

				if (cmp(arr[i][j], arr[a][b]))
				{
					swap(arr[i][j], arr[a][b]);
				}

				b++;
			}
		}
	}
}
