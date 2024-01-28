#include <iostream>
#include <vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
    if (nums.empty()) { // If the vector is empty, return 0
        return 0;
    }
    int i = 0; // i is the index of the last unique element
    for (int j = 1; j < nums.size(); ++j) { // j is the index of the current element
        if (nums[j] != nums[i]) { // If the current element is not equal to the last unique element
            ++i; // Increment i
            nums[i] = nums[j]; // Set the current element to the ith position
        }
    }
    return i + 1; // Return the number of unique elements
}

int main() {
    vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5, 5}; // Initialize the vector
    int len = removeDuplicates(nums); // Call the function to remove duplicates
    cout << "The new length of the array is " << len << endl; // Print the new length of the vector
    cout << "The array with unique elements is: ";
    for (int i = 0; i < len; ++i) { // Loop through the vector and print the unique elements
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}