class Solution {
public:
    int minInsertions(string s) {
        int ans , res= 0;
        int balance = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                if (balance % 2 != 0) {
                    res++;
                    balance--;
                }
                balance = balance + 2;
            } else {

                balance--;
                if (balance < 0) {
                    res ++;
                    balance += 2 ;
                    
                }
                 
            }

        }
            ans = res + balance;
        return ans;
    }
};