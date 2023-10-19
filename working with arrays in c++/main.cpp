#include "header.h"

/**
 * @main - Program entry point
 * @return 0 (success)
*/
int main(void){
    int *arr;

    // create and fill array
    arr = createArr(10);
    fillArr(arr, 10, 50);
    printArr(arr);
    deleteArr(arr); // delete the arrays

    return (0);
}