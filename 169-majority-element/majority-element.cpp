class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> numberMap;
        for ( int i = 0 ; i < nums.size(); i++){
            if (numberMap.contains(nums[i])){
                numberMap[nums[i]]+=1;
            }
            else{
                numberMap[nums[i]]=1;
            }
             
        }
        set<int> set1(nums.begin(), nums.end());
        for (int ele : set1){
            int val = numberMap[ele];
            if (val>nums.size()/2){
                return ele;
            }
            
        }
        return -1;
        
    }
};