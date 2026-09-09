class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(), citations.end());
        int n = citations.size();
        
        for (int i = 1; i <= n; i++) {
            int paper = i - 1;
            if (citations[n - i] >= i) {
                paper = i;
            } else {
                return paper;
            }
        }
        
        return n;
    }
};
