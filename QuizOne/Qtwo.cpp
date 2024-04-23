/* 
It is better to have a comment here mentioning the question (problem you are solb=ving and explaining your solution
*/

// Include necessary libraries
#include <vector>    // For using vector data structure
#include <algorithm> // For using algorithms like std::reverse
#include <iostream>  // For input/output operations

/*
The aim of the assignment is that you actually code the methods ---> Do not use the predifined methods in the Programing Language
*/
// Function to rotate an array
void rotate(int nums[], int n, int k) {
    k %= n;  // Ensure k is less than n
    int temp[n];  // Create a temporary array to hold the rotated elements

    // Copy the last 'k' elements to the temporary array
    for(int i = 0; i < k; i++) {
        temp[i] = nums[n - k + i];
    }

    // Shift the first 'n - k' elements to the right by 'k' positions
    for(int i = n - 1; i >= k; i--) {
        nums[i] = nums[i - k];
    }

    // Copy the temporary array (which holds the last 'k' elements) to the beginning of the array
    for(int i = 0; i < k; i++) {
        nums[i] = temp[i];
    }
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

