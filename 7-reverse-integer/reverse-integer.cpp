#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long long temp = x;       
        long long rev = 0;
        bool isNegative = (temp < 0);

        temp = llabs(temp);       

        while (temp > 0) {
            rev = rev * 10 + temp % 10;
            temp /= 10;
        }

        if (isNegative) rev = -rev;

        if (rev < INT_MIN || rev > INT_MAX) return 0;
        return (int)rev;
    }
};
