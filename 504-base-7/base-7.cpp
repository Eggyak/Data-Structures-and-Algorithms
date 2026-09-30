#include <string>
#include <algorithm>
#include <cmath>

class Solution {
public:
    std::string convertToBase7(int num) {
        if (num == 0) return "0";
        
        std::string result = "";
        bool isNegative = num < 0;
        
        // Use long long to avoid overflow when converting INT_MIN to positive
        long long n = std::abs(static_cast<long long>(num));
        
        while (n > 0) {
            result += std::to_string(n % 7);
            n /= 7;
        }
        
        if (isNegative) {
            result += "-";
        }
        
        // Reverse the string since remainders are collected in reverse order
        std::reverse(result.begin(), result.end());
        
        return result;
    }
};
