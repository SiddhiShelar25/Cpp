#include <iostream>
#include <unordered_set>
using namespace std;

void findDuplicates(int arr[], int n) {
    unordered_set<int> seen;  // To store elements that have been encountered
    bool foundDuplicate = false;

    for (int i = 0; i < n; i++) {
        if (seen.find(arr[i]) != seen.end()) {
            // If the element is already in the set, it's a duplicate
            cout << arr[i] << " ";
            foundDuplicate = true;
        } else {
            // If the element is not in the set, add it to the set
            seen.insert(arr[i]);
        }
    }

    if (!foundDuplicate) {
        cout << "No duplicates found";
    }
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 2, 5, 6, 3};  // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    findDuplicates(arr, n);

    return 0;
}
