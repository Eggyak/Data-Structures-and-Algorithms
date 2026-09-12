class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> sum;
        for ( int i =0;i<nums.size(); i++){
            sum.push_back(accumulate(nums.begin(), nums.begin()+i + 1,0));
        }
        return sum;
    }
};