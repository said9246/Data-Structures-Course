#include <iostream>
using namespace std;

int main() {
    // Sorting an array
    int n = 5; // Size of the array
    int arry[5] = {1, 2, 5, 2, 3};
    int temp;

    // Sort array using bubble sort
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arry[i] > arry[j]) {
                temp = arry[i];
                arry[i] = arry[j];
                arry[j] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arry[i] << " ";
    }
    cout << endl;

    // Searching for an element (e.g., 2)
    int target = 2;
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arry[i] == target) {
            cout << "Element found at index: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Element not found" << endl;
    }

    return 0;
}
