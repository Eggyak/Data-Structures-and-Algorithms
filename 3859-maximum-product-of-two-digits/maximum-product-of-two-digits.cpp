class Solution {
public:
    int maxProduct(int n) {
        vector<int> num;
        if ( n== 0 ){
            num.push_back(0);
        }
        else{
            while (n){
                int x = n%10 ;
                num.push_back(x);
                n=n/10;
            }
        }
        sort(num.begin(),num.end());
        return (num[num.size()-1]*num[num.size()-2]);
        
    }
};