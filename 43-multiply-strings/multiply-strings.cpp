

class Solution {
public:
    std::string multiply(std::string num1, std::string num2) {
        if (num1 == "0" || num2 == "0") return "0";
        
        int m = num1.size();
        int n = num2.size();
        std::unordered_map<int, int> res_map;
        
        for (int i = m - 1; i >= 0; --i) {
            for (int j = n - 1; j >= 0; --j) {
                int mul = (num1[i] - '0') * (num2[j] - '0');
                int p1 = i + j;
                int p2 = i + j + 1;
                
                int sum = mul + res_map[p2];
                res_map[p2] = sum % 10;
                res_map[p1] += sum / 10;
            }
        }
        
        std::string res_str = "";
        for (int idx = 0; idx < m + n; ++idx) {
            if (!(res_str.empty() && res_map[idx] == 0)) {
                res_str += std::to_string(res_map[idx]);
            }
        }
        
        return res_str.empty() ? "0" : res_str;
    }
};
