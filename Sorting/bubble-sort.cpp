//
// Created by haris on 02-03-2026.
//

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> bubble_sort(vector<int> arr) {
    int n = arr.size();

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j],arr[j + 1]);
            }
        }
    }
    return arr;
}

int main() {
    vector<int> arr = {8,5,5,9,2,7};
    vector<int> ans = bubble_sort(arr);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
}