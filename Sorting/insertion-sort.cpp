//
// Created by haris on 02-03-2026.
//
#include <iostream>
#include <vector>

using namespace std;

vector<int> insertion_sort(vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        int temp = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > temp) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
    return arr;
}

int main() {
    vector<int> arr = {5,4,10,1,6,2};
    vector<int> ans = insertion_sort(arr);

    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
}