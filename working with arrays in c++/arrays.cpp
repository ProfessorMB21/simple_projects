#include "header.h"

/**
 * @createArr - Returns a pointer to a new array of given size
 * @param arrSize - The size of the array to be returned
 * @return pointer to the new array, otherwise NULL
*/
void *createArr(int arrSize)
{
    if (arrSize <= 0){ return nullptr;} 
    return new int[arrSize];  
}

/**
 * @fillArr - Fill the given array with the given value
 * @param arr - The array to fill
 * @param arrSize - The size of the array
 * @param value - The value to fill
 * @return void
*/
void fillArr(int *arr, int arrSize, int value)
{
    for (int i = 0; i < arrSize; i++){
        *(arr + i) = value;
    }
}

/**
 * @deleteArr - Delete the given array
 * @param arr - The array to delete 
 * @return void
*/
void deleteArr(int *arr)
{
    delete(arr);
}

/**
 * @printArr - Print the given array
 * @param arr - The array to whose elements are to be printed
 * @return void
*/
void printArr(int *arr)
{
    while (*arr){
        std::cout<<*(arr)<<endl;
        arr++;
    }
}
