#include <algorithm>

class Solution {
public:
    int sumOfGoodIntegers(int n, int k) {
        int totalSum = 0;
        int lowerBound = std::max(1, n - k);
        int upperBound = n + k;
        
        for (int x = lowerBound; x <= upperBound; ++x) {
            if ((n & x) == 0) {
                totalSum += x;
            }
        }
        
        return totalSum;
    }
};
