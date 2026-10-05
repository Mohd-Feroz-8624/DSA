class Solution {
public:
    int scoreOfParentheses(string s) {
        int score = 0;
        stack<int> st;
        for(int i=0;i<s.size();i++){
            if(s[i] == '('){
                st.push(score);
                score = 0;
            }else{
                int inside = score;

                if(inside == 0)
                    score = 1;
                else
                    score = 2 * inside;

                score += st.top();
                st.pop();
            }
        }
        return score;
    }
};