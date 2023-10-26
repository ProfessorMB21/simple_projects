#include "header2.h"


/**
 * @isPrime - Check if the given number is prime
 * @param n - range of numbers
 * @return true if the number is prime, false otherwise
*/
bool isPrime(int n)
{
    if (n == 0 || n == 1) {return (false);}
    // iterate from 2 to n-1
    for (int i = 2; i < n-1; i++){
        if (n%i == 0) {return (false);}
    }
    return (true);
}

/**
 * @printAtIndex - Get the index of the element and prints
 * the corresponding element
 * @param arrSize - The size of the array
 * @param index - Index of element to be printed
*/
void printAtIndex(int *arr, int arrSize, int index)
{
    if (arrSize == 0 || index > arrSize) { 
        std::cout << "Invalid input" << std::endl;
    } else {
        std::cout << "Element at index [" << index << "] : " << *(arr + index) << std::endl;
    }
}

/**
 * @findNum - Find a number in an array
 * @param arr - The array to search
 * @param size - Array size
 * @param num - The number to search
 * @return - index of the number in the array, otherwise -1
*/
int findNum(int *arr, int size, int num)
{
    if (arr == NULL){return (-1);}
    int index = 0;

    while (index < size){
        if (*(arr + index) == num){return (index);}
        index++;
    }
    return (-1);
}