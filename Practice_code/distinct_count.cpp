#include <iostream>
#include <unordered_set>
#include <string>

using namespace std;

int countDistinctCharacters(const string& str) {
    unordered_set<char> distinctChars;

    // Traverse the string and insert each character into the set
    for (char ch : str) {
        distinctChars.insert(ch);
    }

    // The size of the set is the count of distinct characters
    return distinctChars.size();
}

int main() {
    string input = "programming";  // Example string

    int distinctCount = countDistinctCharacters(input);

    cout << "The number of distinct characters is: " << distinctCount << endl;

    return 0;
}
