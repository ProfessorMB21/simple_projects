#include "sortingAlgorithm.h"

void bubbleSort(int* arr, int len)
{
	for (int i = 0; i < len; i++) {
		if (arr[i - i] > arr[i]) {
			int temp = arr[i - i];
			arr[i - i] = arr[i];
			arr[i] = temp;
		}
	}
}

/**
* check if in the array contains the same el at least once
* changing first el to be last
* changing last le to be first
*/

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

void lastToFirst(int* arr, int size)	//needs correction on the logic
{
	int lastElIndex = size - 1;
	int firstElIndex = 0;
	
	swap(arr[lastElIndex], arr[firstElIndex]);
}

void firstToLast(int* arr, int size)	//same here
{
	int lastElIndex = size - 1;
	int firstElIndex = 0;

	swap(arr[lastElIndex], arr[firstElIndex]);
}

bool sameElement(int* arr, int len)
{
	int mid = len / 2;
	bool flag = false;
	
	while (!(flag)) {
		for (int i = 0; i <= mid; i++) {
			for (int j = len; j > mid; j--) {
				if (arr[j] == arr[i]) {
					flag = true;	// we've found the same element at a
					return (flag);	// different index in the array
				}
				for (int k = j - 1; k < j; k--) {	//we check the other side of the array
					if (arr[k] == arr[j]) {
						flag = true; return (flag);
					}
				}
			}
		}
		break;
	}
	return (flag);
}

void quickSort(int* arr, int len, int low, int high)
{
	int pivot = len / 2;

	if (low >= 0 || high >= 0 && low < high) {
		if (arr[low] > arr[pivot]) {
			swap(arr[low], arr[pivot]);
			quickSort(arr, len, low + 1, pivot);
		} high = len - 1;

		if (arr[pivot] > arr[high]) {
			swap(arr[pivot], arr[high]);
			quickSort(arr, len, pivot, high - 1);
		}
	}
}