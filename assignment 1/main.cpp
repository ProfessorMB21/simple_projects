///////////////////////////////////////// MAIN.CPP ////////////////////////////
#include "main.h"

int main()
{
	setlocale(LC_ALL, "");
	
    int** arr;
    int rows;
    //auto cmpDesc = [](int a, int b) -> bool { return (a < b);};

    // Create 2D array
    std::cout<<"Enter number of rows: ";
    std::cin>>rows;
    create2dArr(arr, rows);

    // Fill 2D array with random numbers
    fill2dArr(arr, rows);

    // Print unsorted array
    std::cout << "Unsorted Array:" << std::endl;
    print2dArr(arr, rows);

	/*for (int index = 0; index < rows; index++)
	{
		for (int j = 0; j < rows; j++)
		{
			std::cout<< *arr[j] <<" ";
		}
		std::cout << std::endl;
	}*/

    std::cout << std::endl;

    std::cout << "Bubble sort:" << std::endl;
    // Sort the array in descending order
    bubblesort2d(arr, [](int a, int b) -> bool { return (a < b);});

    // Print sorted array
    std::cout << "Sorted Array (Descending Order):" << std::endl;
    print2dArr(arr, rows);
    std::cout << std::endl;

    // Sort the array in ascending order
    bubblesort2d(arr, [](int a, int b) -> bool { return (a > b);});

    // Print sorted array
    std::cout << "Sorted Array (Ascending Order):" << std::endl;
    print2dArr(arr, rows);
    std::cout << std::endl;

    
    // Sort the array in ascending order
    //countingSort(arr, rows);
    std::cout << "::RADIX sort::" << std::endl;
    radixSort(arr, rows, [](int a, int b) -> bool {return (a < b); });

    // Print sorted array
    std::cout << "Sorted arrray (Ascending Order):" << std::endl;
    print2dArr(arr, rows);
    std::cout << std::endl;

    //another order here

    // Free memory
    del2dArr(arr, rows);
    arr = NULL;

    return 0;
}
