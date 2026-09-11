class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        unordered_map<int, int> cnt; 
        unordered_map<int, vector<int>> invertedcnt;
        for (int num : nums) {
            cnt[num]++; 
        }
        for (const auto& [number, frequency] : cnt) {
            
            invertedcnt[frequency].push_back(number);
        }
        for (const auto& [frequency, numberList] : invertedcnt) {
            if (frequency >= 2) {
                
                return numberList[0]; 
            }
        }
        return -1;

    }
};