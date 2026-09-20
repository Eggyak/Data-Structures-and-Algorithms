#include <vector>
#include <algorithm>

class Solution {
public:
    bool uniformArray(std::vector<int>& nums) {
        // Find the absolute minimum element in the array
        int minElement = *std::min_element(nums.begin(), nums.end());
        
        // Rule 1: If the minimum element is odd, it's always possible
        if (minElement % 2 != 0) {
            return true;
        }
        
        // Rule 2: If the minimum element is even, no odd elements are allowed
        for (int num : nums) {
            if (num % 2 != 0) {
                return false;
            }
        }
        
        return true;
    }
};
