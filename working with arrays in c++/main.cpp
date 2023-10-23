#include "header.h"

/**
 * @main - Program entry point
 * @return 0 (success)
*/
int main(void){
    int* arr, len;

    std::cin>>len; //array size

    // create and fill array
    arr = createArr(len);
    std::cout << "Success" << std::endl;
    fillArr(arr, len, 50);
    std::cout << "Success" << std::endl;
    printArr(arr, len);
    std::cout << "Success" << std::endl;
    deleteArr(arr); // delete the arrays
    std::cout << "Success" << std::endl;

    /*
    for (int i = 0; i < 1000; i++) {
        (isPrime(i) == true) ? std::cout << "Prime : " << i << std::endl : std::cout << "Not Prime!" << std::endl;
    }
    */
    return (0);
}