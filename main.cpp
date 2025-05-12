#include <iostream>
#include "Sorts.h"
#include "binarySearch.h"

int main() {
//  1 Lesson
//    inputOutput();

// 2 Lesson: Binary Search
//    const int LENGTH = 10;
//    int arr[LENGTH] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
//    int target1 = 9;
//    int target2 = 4;
//    int target3 = 5;
//    int target4 = -5;

//    int steps;
//    bool found;
//    std::tie(steps, found) = binarySearchByNum(1, 100, 76);
//    std::cout << "Steps = " << steps << " was found = " << found << std::endl;

//    const int LENGTH = 10;
//    int arr[LENGTH] = {1, 7, 20, 34, 81, 192, 847, 994, 4444, 10000};
//    int lowerBound, decrLowerBound, upperBound, decrUpperBound;
//    std::tie(lowerBound, decrLowerBound) = testLowerBound(34, arr, LENGTH);
//    std::tie(upperBound, decrUpperBound) = testUpperBound(34, arr, LENGTH);
//
//    std::cout << "target = " << 34 << " arr: {1, 7, 20, 34, 81, 192, 847, 994, 4444, 10000}" << std::endl;
//    std::cout << "lower_bound: " << lowerBound << " --lower_bound: " << decrLowerBound << std::endl;
//    std::cout << "upper_bound: " << upperBound << " --upper_bound: " << decrUpperBound << std::endl;
//
//    std::tie(lowerBound, decrLowerBound) = testLowerBound(33, arr, LENGTH);
//    std::tie(upperBound, decrUpperBound) = testUpperBound(33, arr, LENGTH);
//    std::cout << "target = " << 33 << " arr: {1, 7, 20, 34, 81, 192, 847, 994, 4444, 10000}" << std::endl;
//    std::cout << "lower_bound: " << lowerBound << " --lower_bound: " << decrLowerBound << std::endl;
//    std::cout << "upper_bound: " << upperBound << " --upper_bound: " << decrUpperBound << std::endl;
//
//    std::tie(lowerBound, decrLowerBound) = testLowerBound(25, arr, LENGTH);
//    std::tie(upperBound, decrUpperBound) = testUpperBound(25, arr, LENGTH);
//    std::cout << "target = " << 25 << " arr: {1, 7, 20, 34, 81, 192, 847, 994, 4444, 10000}" << std::endl;
//    std::cout << "lower_bound: " << lowerBound << " --lower_bound: " << decrLowerBound << std::endl;
//    std::cout << "upper_bound: " << upperBound << " --upper_bound: " << decrUpperBound << std::endl;
//
//    std::tie(lowerBound, decrLowerBound) = testLowerBound(81, arr, LENGTH);
//    std::tie(upperBound, decrUpperBound) = testUpperBound(81, arr, LENGTH);
//    std::cout << "target = " << 81 << " arr: {1, 7, 20, 34, 81, 192, 847, 994, 4444, 10000}" << std::endl;
//    std::cout << "lower_bound: " << lowerBound << " --lower_bound: " << decrLowerBound << std::endl;
//    std::cout << "upper_bound: " << upperBound << " --upper_bound: " << decrUpperBound << std::endl;

//    std::cout << "sqrt 2 = " << sqrtBinSearch(2) << std::endl;
//    std::cout << "sqrt 34 = " << sqrtBinSearch(34) << std::endl;
//    std::cout << "sqrt 9 = " << sqrtBinSearch(9) << std::endl;

//
//    std::cout << "target1 = " << target1 << " has index: " << binarySearch(arr, LENGTH, target1) << std::endl;
//    std::cout << "target2 = " << target2 << " has index: " << binarySearch(arr, LENGTH, target2) << std::endl;
//    std::cout << "target3 = " << target3 << " has index: " << binarySearch(arr, LENGTH, target3) << std::endl;
//    std::cout << "target4 = " << target4 << " has index: " << binarySearch(arr, LENGTH, target4) << std::endl;

// 2 Lesson: Bubble Sort
//    const int LENGTH = 10;
//    int arr[LENGTH] = {1, 7, 10, 3, 4, -5, 12, 89, 90, 2};
//    std::cout << "sorted array: " << std::endl;
//    bubbleSort(arr, LENGTH);
//    for (int i = 0; i < LENGTH; i++) {
//        std::cout << arr[i] << " ";
//    }
//    std::cout << std::endl;

// 2 Lesson: Selection Sort
    const int LENGTH = 10;
    int arr[LENGTH] = {1, 7, 10, 3, 4, -5, 12, 89, 90, 2};
    selectionSort(arr, LENGTH);
    for (int i = 0; i < LENGTH; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "target = " << 10 << " has index: " << binarySearch(arr, LENGTH, 10) << std::endl;
}