//
// Created by haris on 11-03-2026.
//

#include <iostream>
#include <vector>

using namespace std;

int binary_search(int target, vector<int> arr) {
    int low,high;
    low = 0;
    high = arr.size()-1;

    while (low<=high) {
        int mid = (low+high)/2;

        if (arr[mid] == target) {
            return mid;
        }
        else if (arr[mid] < target) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return -1;
}