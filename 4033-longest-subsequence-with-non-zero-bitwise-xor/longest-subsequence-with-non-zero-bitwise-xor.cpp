class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
       int t = 0;
        bool z = true;
        
        for (int num : nums) {
            t ^= num;
            if (num != 0) z = false;
        }
        if (z) return 0; 
        if (t != 0) return nums.size();
        return nums.size() - 1;
    }
    
};