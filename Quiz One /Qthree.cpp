#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

bool contains_duplicates(vector<int>& arr) {
    unordered_set<int> s;
    for (int i = 0; i < arr.size(); i++) {
        if (s.find(arr[i]) != s.end()) {
            return true;
        }
        s.insert(arr[i]);
    }
    return false;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 6,7, 8, 9, 10};
    bool has_duplicates = contains_duplicates(arr);
    if (has_duplicates) {
        cout << "The array contains duplicates." << endl;
    } else {
        cout << "The array does not contain duplicates." << endl;
    }
    return 0;
}
