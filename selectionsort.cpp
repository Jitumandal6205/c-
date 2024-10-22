#include <iostream>
#include <vector>
using namespace std;

void SelectionSort(vector<int>& arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minindex = i;  // Initialize minindex with i
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minindex])
                minindex = j;
        }
        swap(arr[minindex], arr[i]);
    }
}

int main() {
    vector<int> arr = {64, 25, 12, 22, 11};
    int n = arr.size();
    SelectionSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
