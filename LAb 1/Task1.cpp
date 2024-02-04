#include <iostream>  // Include the iostream library to enable input/output operations

// Define the summation function
int summation(int arr[], int n) {
    int sum = 0;  // Initialize sum to 0
    for(int i=0; i<n; i++) {  // Loop through each element in the array
        sum += arr[i];  // Add the current element to the sum
    }
    return sum;  // Return the sum
}

// Define the maximum function
int maximum(int arr[], int n) {
    int max = arr[0];  // Initialize max to the first element of the array
    for(int i=1; i<n; i++) {  // Loop through each element in the array starting from the second element
        if(arr[i] > max) {  // If the current element is greater than max
            max = arr[i];  // Update max to the current element
        }
    }
    return max;  // Return the maximum element
}

// Define the main function
int main() {
    int n;  // Declare an integer n
    std::cout << "Enter the number of elements in the array: ";  // Ask the user for the number of elements
    std::cin >> n;  // Get the input from the user and store it in n

    int arr[n];  // Declare an array of size n

    for(int i=0; i<n; i++) {  // Loop n times
        std::cout << "Enter element number " << i+1 << ": ";  // Ask the user for the i-th element
        std::cin >> arr[i];  // Get the input from the user and store it in the i-th position of the array
    }

    std::cout << "Sum of the array: " << summation(arr, n) << std::endl;  // Call the summation function and print the result
    std::cout << "Maximum of the array: " << maximum(arr, n) << std::endl;  // Call the maximum function and print the result

    return 0;  // Return 0 indicating successful execution
}
