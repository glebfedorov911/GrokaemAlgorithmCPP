#include "Sorts.h"
#include <iostream>


void bubbleSort(int *arr, int n) {
    int temp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-1; j++) {
            std::cout << "i = " << i << " j = " << j << " arr[i] = " << arr[i] << " arr[j] = " << arr[j] << std::endl;
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                std::cout << "Change: i = " << i << " j = " << j << " arr[i] = " << arr[i] << " arr[j] = " << arr[j] << std::endl;
            }
        }
    }
}

void selectionSort(int *arr, int len) {
    int temp;
    for (int i = 0; i < len-1; i++) {
        for (int j = i+1; j < len; j++) {
            std::cout << "i = " << i << " j = " << j << " arr[i] = " << arr[i] << " arr[j] = " << arr[j] << std::endl;
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
                std::cout << "Change: i = " << i << " j = " << j << " arr[i] = " << arr[i] << " arr[j] = " << arr[j] << std::endl;
            }
        }
    }
}
