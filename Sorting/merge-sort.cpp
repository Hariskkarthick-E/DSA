//
// Created by haris on 04-03-2026.
//


#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& arr, int lb, int mid, int ub) {
    vector<int> temp;
    int i = lb;
    int j = mid + 1;
    while (i <= mid && j <= ub) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        }
        else {
            temp.push_back(arr[j++]);
        }
    }
    if (i > mid) {
        while (j <= ub) {
            temp.push_back(arr[j++]);
        }
    }
    else {
        while (i <= mid) {
            temp.push_back(arr[i++]);
        }
    }
    for (int k = 0; k < temp.size(); k++) {
        arr[lb + k] = temp[k];
    }
}

void merge_sort(vector<int>&arr, int lb, int ub) {
    if (lb < ub) {
        int mid = (lb + ub) / 2;
        merge_sort(arr, lb, mid);
        merge_sort(arr , mid + 1, ub);
        merge(arr, lb, mid, ub);
    }
    else {
        return;
    }
}

int main() {
    vector<int> arr = {38,27,43,3,9,82,10};

    merge_sort(arr, 0, arr.size() - 1);

    for (int x : arr) {
        cout << x << endl;
    }
}