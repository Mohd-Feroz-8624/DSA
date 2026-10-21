
class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<long long> squares;
        for(int i : nums){
            squares.push_back(i*i);
        }
        sort(squares.begin(),squares.end());

        long long posSquare = 0;
        long long negSquare = 0;
        for(int i= n/2;i<n;i++){
            posSquare += squares[i];
        }
        for(int i =0;i<n/2;i++){
            negSquare += squares[i];
        }
        return posSquare - negSquare;

    }
};
