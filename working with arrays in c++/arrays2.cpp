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
*/
void printAtIndex(int *arr, int arrSize)
{
    if (arrSize == 0) {return;}
    for (int i = 0; i < arrSize; i++) {
        std::cout << "At index " << i << " : " << arr[i] << std::endl;
    }
}

/**
 * @findNum - Find a number in an array
 * @param arr - The array to search
 * @param num - The number to search
 * @return - index of the number in the array, otherwise -1
*/
int findNum(int *arr, int num)
{
    if (arr == NULL){return (0);}
    int index = 0;

    while (*(arr + index)){
        if (*(arr + index) == num){return (index);}
        index++;
    }
    return (-1);
}