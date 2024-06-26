/* 
Remove Duplicates from Sorted Array.
# Given a sorted array nums, remove the duplicates in-place such that each element appears only once and returns the new length.Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.
*/
/*(
Pseudocode
-->function removeDuplicate takes in array[] and number of element
   intialize i the index of the last unique element
    loop thru the array[j]
      create a second loop array[k] to compair with the element in the first loop
       check if(array[j] == array[k])
          breake loop
    check if( k == i)

*/
#include <iostream>

using namespace std;

/*
   This function will run in quadratic time
   Do you think there is another way we can write this to take less time? e.g. Use only one loop?
*/
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

