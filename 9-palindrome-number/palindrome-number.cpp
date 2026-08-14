class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;


    long rev,tem;
    rev=0;
    tem=x;
    while(tem>0){
        rev = rev*10+ tem%10;
        tem /=10;
    }
    return rev==x;
        
    }
};