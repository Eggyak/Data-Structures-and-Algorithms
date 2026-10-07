class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        sort(prices.begin(),prices.end());
        int left = money;
        left -=prices[0];
        left -=prices[1];
        if (left>=0){
            return left;
        }
        else{return money;}
    }
};