class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        for ( int i = 0 ; i< nums.size();i++){
            int sum1 , sum2 ;
            sum1 = accumulate(nums.begin(), nums.begin()+1+i, 0);
            sum2= accumulate(nums.begin()+i, nums.end(), 0);           
            if (sum1 == sum2){return i;}
        }
        return -1;
    }
};