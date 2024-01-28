#include <vector>
#include <numeric>
#include <iostream>

int singleNumber(std::vector<int>& nums) {
    return std::accumulate(nums.begin(), nums.end(), 0, std::bit_xor<int>());
}

int main() {
    std::vector<int> nums = {2, 1, 4, 1, 2};  // Replace with your input
    std::cout << "The single number is " << singleNumber(nums) << std::endl;
    return 0;
}
