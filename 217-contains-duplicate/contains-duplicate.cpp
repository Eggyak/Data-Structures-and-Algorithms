class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        set<int> set1(nums.begin(), nums.end());    
             
        return set1.size() != nums.size();
    }
};
