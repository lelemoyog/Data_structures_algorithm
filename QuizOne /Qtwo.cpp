// Include necessary libraries
#include <vector>    // For using vector data structure
#include <algorithm> // For using algorithms like std::reverse
#include <iostream>  // For input/output operations

// Function to rotate an array
void rotate(int nums[], int n, int k) {
    k %= n;  // Ensure k is less than n
    std::reverse(nums, nums + n);  // Reverse the entire array
    std::reverse(nums, nums + k);  // Reverse the first 'k' elements
    std::reverse(nums + k, nums + n);  // Reverse the remaining elements
}

// Main function
int main() {
    int nums[] = {1, 2, 3, 4, 5, 6, 7};  // Initialize the array
    int n = sizeof(nums) / sizeof(nums[0]);  // Calculate the size of the array
    int k = 3;  // Set the number of positions to rotate
    rotate(nums, n, k);  // Call the rotate function

    // Print the rotated array
    for(int i = 0; i < n; i++) {
        std::cout << nums[i] << ' ';  // Print each element followed by a space
    }

    return 0;  // Return 0 indicating successful execution
}

