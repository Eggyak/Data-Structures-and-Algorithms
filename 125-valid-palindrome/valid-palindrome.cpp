class Solution {
public:
    bool isPalindrome(string s) {
        string a ;
        for (int i = 0 ; i < s.length();i++){
            if (isalnum(s[i])){
                a +=tolower(s[i]);
            }
        }
        int mid = a.length()/2;
        if (a.length()%2!=0){
            int left , right ; 
            left = mid-1 ;
            right = mid +1 ;
            while (left >= 0 && right < a.length()  ){                
                if (a[left]!=a[right]){
                    return false;
                }
                left --;
                right ++;
            }
            
        }
        else{
            int left = mid - 1;
            int right = mid;
            while (left >= 0 && right < a.length() ){                
                if (a[left]!=a[right]){
                    return false;
                }
                left --;
                right ++;
            }
        }
        return true;
    }
};