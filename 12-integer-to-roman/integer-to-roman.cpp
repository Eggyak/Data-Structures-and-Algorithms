#include <string>
#include <vector>

class Solution {
public:
    std::string intToRoman(int num) {
        // Parallel arrays mapped from largest value to smallest
        const std::vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        const std::vector<std::string> symbols = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        
        std::string result = "";
        
        for (size_t i = 0; i < values.size(); ++i) {
            // Repeat the symbol as many times as its value fits into num
            while (num >= values[i]) {
                result += symbols[i];
                num -= values[i];
            }
        }
        
        return result;
    }
};
