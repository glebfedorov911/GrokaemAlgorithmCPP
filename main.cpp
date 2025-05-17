#include <iostream>
#include "Sorts.h"
#include "binarySearch.h"

int main() {
    const int LENGTH = 7;
    int arr[LENGTH] = {5, 3, 4, 7, 13, 12, 1};
    for (int i = 0; i < LENGTH; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    insertionSort(arr, LENGTH);
    for (int i = 0; i < LENGTH; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}