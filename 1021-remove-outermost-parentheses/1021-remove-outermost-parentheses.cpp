class Solution {
public:
    string removeOuterParentheses(string s) {
        int balance = 0;
        string ans= "";
        for(char c : s){
            if(c == '('){
                if(balance >0)
                    ans.push_back('(');
                balance++;
                
            } else{
                    balance--;
                if(balance > 0){
                    ans.push_back(')');
                }
            }
        }
        return ans;
    }
};