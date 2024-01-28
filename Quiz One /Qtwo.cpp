#include <vector>
#include <algorithm>
#include <iostream>

void rotate(std::vector<int>& nums, int k) {
    k %= nums.size();
    std::reverse(nums.begin(), nums.end());
    std::reverse(nums.begin(), nums.begin() + k);
    std::reverse(nums.begin() + k, nums.end());
}

int main() {
    std::vector<int> nums = {1, 2, 3, 4, 5, 6, 7};
    int k = 3;
    rotate(nums, k);

    // Print the rotated array
    for(int num : nums) {
        std::cout << num << ' ';
    }

    return 0;
}