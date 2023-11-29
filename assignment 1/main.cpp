///////////////////////////////////////// MAIN.CPP ////////////////////////////
#include "main.h"

int main()
{
	setlocale(LC_ALL, "");
	
    int **arr;
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
    std::cout << std::endl;

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

    // Free memory
    del2dArr(arr, rows);
    arr = nullptr;

    return 0;
}
