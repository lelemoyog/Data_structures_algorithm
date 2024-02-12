#include <iostream>

using namespace std;

int removeDuplicates(int nums[], int n) {
   
    int i = 0; // i is the index of the last unique element
    for (int j = 0; j < n; ++j) { // Outer loop
        int k;
        for (k = 0; k < i; ++k) { // Inner loop
            if (nums[j] == nums[k]) {
                break; // If the current element is found in the array before index i, break the loop
            }
        }
        if (k == i) { // If the current element is not found in the array before index i
            nums[i] = nums[j]; // Set the current element to the ith position
            ++i; // Increment i
        }
    }
    return i; // Return the number of unique elements
}

int main() {
    int nums[] = {1, 1, 2, 2, 3, 4, 4, 5, 5}; // Initialize the array
    int n = sizeof(nums) / sizeof(nums[0]); // Get the length of the array
    int len = removeDuplicates(nums, n); // Call the function to remove duplicates
    cout << "The new length of the array is " << len << endl; // Print the new length of the array
    cout << "The array with unique elements is: ";
    for (int i = 0; i < len; ++i) { // Loop through the array and print the unique elements
        cout << nums[i] << " ";
    }
    cout << endl;
    return 0;
}

