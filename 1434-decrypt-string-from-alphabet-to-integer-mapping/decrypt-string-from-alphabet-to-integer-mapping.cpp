class Solution {
public:
    string freqAlphabets(string s) {
        unordered_map<int, char> mp;
        for (int i = 1; i <= 26; i++) {
            mp[i] = 'a' + (i - 1);
        }

        string result = "";
        int n = s.size();

        for (int i = 0; i < n; ) {
            if (i + 2 < n && s[i+2] == '#') {
                int num = (s[i] - '0') * 10 + (s[i+1] - '0');
                result += mp[num];
                i += 3;
            } else {
                int num = s[i] - '0';
                result += mp[num];
                i++;
            }
        } 
        
        return result;
    }
};