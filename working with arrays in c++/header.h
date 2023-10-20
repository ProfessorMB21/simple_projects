#pragma once

#include <stdlib.h>
#include <iostream>

/**
 * These are functions which you'll write
 * create an array
 * fill an array with a given value
 * delete an array
 * print contents of an array
 * sum of prime numbers in an array
 *  - check for prime numbers in array and sum them up
 * print contents and their indices in the array
 * 
*/
int *createArr(int arrSize);
void fillArr(int *arr, int arrSize, int value);
void deleteArr(int *arr);
void printArr(int *arr);

