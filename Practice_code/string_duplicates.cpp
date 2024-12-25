#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

void findDuplicates(const string& str) {
    unordered_map<char, int> frequencyMap;

    for (char ch : str) {
        frequencyMap[ch]++;
    }

    cout << "Duplicate characters: ";
    bool found = false;
    for (const auto& pair : frequencyMap) {
        if (pair.second > 1) {
            cout << pair.first << " ";
            found = true;
        }
    }

    if (!found) {
        cout << "No duplicates found";
    }
    cout << endl;
}

int main() {
    string input = "programming";
    findDuplicates(input);

    return 0;
}

