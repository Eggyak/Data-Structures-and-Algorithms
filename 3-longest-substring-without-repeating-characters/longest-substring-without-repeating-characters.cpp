class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> unique_chars;
        int max_len = 0;
        int left = 0;
        for (int right = 0; right < s.length(); right++) {
            while (unique_chars.count(s[right])) {
                unique_chars.erase(s[left]);
                left++;
            }
            unique_chars.insert(s[right]);
            max_len = max(max_len, (int)unique_chars.size());
        }
        return max_len;
    }
};