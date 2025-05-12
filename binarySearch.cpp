#include <iostream>
#include <algorithm>
#include "binarySearch.h"

int binarySearch(int *arr, int len, int target) {
    int left = 0;
    int right = len-1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target) {
            return mid;
        } else if (arr[mid] > target) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    return -1;
}

std::tuple<int, bool> binarySearchByNum(int l, int r, int t) {
    int m;
    int steps = 0;
    while (l < r) {
        steps++;
        m = (l + r) / 2;
        std::cout << "l = " << l << " r = " << r << " t = " << t << std::endl;
        if (m == t) {
            return std::make_tuple(steps, true);
        } else if (m < t) {
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return std::make_tuple(steps, false);
}

std::tuple<int, int> testLowerBound(int target, int* arr, int len) {
    auto it = std::lower_bound(arr, arr+len, target);
    int r1 = *it;
    int r2 = *--it;
    return std::make_tuple(r1, r2);
}

std::tuple<int, int> testUpperBound(int target, int* arr, int len) {
    auto it = std::upper_bound(arr, arr+len, target);
    int r1 = *it;
    int r2 = *--it;
    return std::make_tuple(r1, r2);
}

float sqrtBinSearch(float x) {
    float l = 0, r = x;
    for (int i = 0; i < 100; i++) {
        float m = (l + r) / 2;
        if (m * m < x) {
            l = m;
        } else {
            r = m;
        }
    }
    return l;
}