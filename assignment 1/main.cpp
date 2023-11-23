#include "Header.h"

int main()
{
	setlocale(LC_ALL, "");
	
    int **arr = nullptr;
    int rows;

    // Create 2D array
    std::cout<<"Enter number of rows: ";
    std::cin>>rows;
    create2dArr(arr, rows);

    // Fill 2D array with random numbers
    fill2dArr(arr);

    // Print unsorted array
    std::cout << "Unsorted Array:" << std::endl;
    print2dArr(arr);
    std::cout << std::endl;

    // Sort the array in descending order
    bubblesort2d(arr, cmpDesc);

    // Print sorted array
    std::cout << "Sorted Array (Descending Order):" << std::endl;
    print2dArr(arr);
    std::cout << std::endl;

    // Sort the array in ascending order
    bubblesort2d(arr, cmpAsc);

    // Print sorted array
    std::cout << "Sorted Array (Ascending Order):" << std::endl;
    print2dArr(arr);
    std::cout << std::endl;

    // Free memory
    del2dArr(arr);
    arr = nullptr;

    return 0;
}
