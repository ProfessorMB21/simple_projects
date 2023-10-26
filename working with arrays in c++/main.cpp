#include "header2.h"
#include "header.h"

/**
 * @main - Program entry point
 * @return 0 (success)
*/
int main(void){
    int* arr, len;

    std::cout << "Enter length of array : ";
    std::cin>>len; //array size

    // create and fill array
    arr = createArr(len);
    std::cout << "Success" << std::endl;
    std::cout << "Fill" << std::endl;
    fillArr2(arr, len); // a better way to add elements to an array
    //fillArr(arr, len, 50);
    std::cout << "Enter element to find: ";
    int element; std::cin >> element;
    int numLocation = findNum(arr, len, element); printAtIndex(arr, len, numLocation);   //find and print to stdout
                                                                                    // the results of a linear time search
    std::cout << "Success" << std::endl;
    std::cout << "Would you like to include element indices displayed (NO/0) / (YES/1) : ";
    int choice;
    std:: cin >> choice;
    printArr(arr, len,choice);
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