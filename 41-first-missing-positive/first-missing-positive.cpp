class Solution {
public:
    int firstMissingPositive(std::vector<int>& nums) {
       unordered_set<int> seen(nums.begin(), nums.end());
       int num =1 ; 
       while(true){
        if (seen.contains(num)){
            num ++;

        }
        else{
            return num;
        }
       } 
         
        
        
        
         
    }
};
