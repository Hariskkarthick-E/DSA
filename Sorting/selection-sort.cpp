//
// Created by haris on 03-03-2026.
//

#include <iostream>
#include <vector>

using namespace std;

vector<int> selection_sort(vector<int> arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        int min = i;
        for (int j = i+1; j < arr.size(); j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            swap(arr[i], arr[min]);
        }
    }
    return arr;
}