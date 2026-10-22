class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int x = 0;
        bool rev = false;
        int i = min_element(nums.begin(),nums.end())-nums.begin();
        for(int j=i;j<n;j++,x++)if(nums[j] != x){rev = true; break;}
        if(!rev) for(int j=0;j<i;j++,x++) if(nums[j] != x){rev = true;break;}

        if(rev){
            x = 0;
            for(int j= i;j>=0;j--,x++) if(nums[j] != x) return -1;
            for(int j = n-1;j>i;j--,x++) if(nums[j] != x) return -1;

            return min(1+(n-1-i),(i+1)%n + 1);
            
        }
        return min(i,1+(n-i)%n+1);
    }
};