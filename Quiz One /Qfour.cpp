// Include necessary library
#include <iostream>  // For input/output operations

// Function to find the number that appears only once in the array
int singleNumber(int nums[], int n) {
    // Iterate over each element in the array
    for (int i = 0; i < n; i++) {
        int count = 0;  // Initialize count for the current number
        // Iterate over the array again to count occurrences of nums[i]
        for (int j = 0; j < n; j++) {
            if (nums[i] == nums[j]) {  // If nums[i] is found in the array
                count++;  // Increment the count
            }
        }
        // If count is 1, nums[i] appears only once in the array
        if (count == 1) {
            return nums[i];  // Return the single number
        }
    }
    return -1;  // Return -1 if no single number is found
}

// Main function
int main() {
    int nums[] = {2, 1, 4, 1, 2, 4, 2};  // Initialize the array
    int n = sizeof(nums) / sizeof(nums[0]);  // Calculate the size of the array
    int result = singleNumber(nums, n);  // Call the singleNumber function
    // Check the result and print the appropriate message
    if(result == -1) {
        std::cout << "No single number" << std::endl;  // If no single number is found
    } else {
        std::cout << "The single number is " << result << std::endl;  // If a single number is found
    }
    return 0;  // Return 0 indicating successful execution
}



