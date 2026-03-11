//
// Created by haris on 11-03-2026.
//

#include <iostream>
#include <vector>

using namespace std;

int linear_search(vector<int> arr, int target) {

    for (int i =0; i < arr.size()-1; i++){
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

