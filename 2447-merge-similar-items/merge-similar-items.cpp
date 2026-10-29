class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        vector<int> weightSum(1001, 0);
        for (const auto& item : items1) weightSum[item[0]] += item[1];
        for (const auto& item : items2) weightSum[item[0]] += item[1];
        
        vector<vector<int>> result;
        for (int value = 1; value <= 1000; ++value) {
            if (weightSum[value] > 0) result.push_back({value, weightSum[value]});
        }
        return result;
    }
};
