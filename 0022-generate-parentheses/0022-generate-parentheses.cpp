class Solution {
public:
    vector<string> output;
    void generate(string current, int open, int close, int n){
        if (current.length() == 2 * n){
            output.push_back(current);
            return;
        }

        if (open < n){
            generate(current + '(', open + 1 , close, n);
        }

        if (close < open){
            generate(current + ')' , open, close +1, n);
        }
    }
    vector<string> generateParenthesis(int n){
        output.clear();
        generate("", 0, 0, n);
        return output;
    }
};