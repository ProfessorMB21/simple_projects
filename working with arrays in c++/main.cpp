#include "sortingAlgorithm.h"
#include "header2.h"
#include "header.h"

/**
* main - program entry point
* @return - 0
*/
int main(void) {
    int* arr, len;

    std::cout << "Enter length of array : ";
    std::cin >> len; //array size

    // create and fill array
    arr = createArr(len);
    std::cout << "Success" << std::endl;

    std::cout << "Fill" << std::endl;
    fillArr2(arr, len); // a better way to add elements to an array
    //fillArr(arr, len, 50);
    //std::cout << "Enter element to find: ";
    //int element; std::cin >> element;

    bool result = sameElement(arr, len);
    if (result == true) { std::cout << "yes" << std::endl; }
    else { std::cout << "no" << std::endl; }
    //int numLocation = findNum(arr, len, element); printAtIndex(arr, len, numLocation);   //find and print to stdout
    // the results of a linear time search
    std::cout << "Success" << std::endl;

    std::cout << "Would you like to include element indices displayed (NO/0) / (YES/1) : ";
    int choice;
    std::cin >> choice;
    printArr(arr, len, choice);
    std::cout << "Before" << std::endl;
    std::cout << "Success" << std::endl;

    firstToLast(arr, len);
    std::cout << "Would you like to include element indices displayed (NO/0) / (YES/1) : ";
    std::cin >> choice;
    printArr(arr, len, choice);

    lastToFirst(arr, len);
    std::cout << "Would you like to include element indices displayed (NO/0) / (YES/1) : ";
    std::cin >> choice;
    printArr(arr, len, choice);

    std::cout << "After" << std::endl;
    std::cout << "Success" << std::endl;
    std::cout << "Freeing up allocated memory" << std::endl;
    deleteArr(arr); // delete the array
    std::cout << "Success" << std::endl;

	return (0);
}