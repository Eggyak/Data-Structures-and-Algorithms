class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sqr(nums.size()); 
        for ( int i = 0 ; i < nums.size();i++){
            sqr[i]=nums[i]*nums[i];
        }
        sort(sqr.begin(), sqr.end());

        return sqr;
    }
};