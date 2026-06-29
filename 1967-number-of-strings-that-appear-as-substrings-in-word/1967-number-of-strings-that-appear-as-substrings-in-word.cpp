class Solution {
public:
    int numOfStrings(vector<string>& arr, string s) {
        int n=s.length();
        unordered_set<string>st;
        for(int i=0;i<n;i++)
        {
            string t="";
            for(int j=i;j<n;j++)
            {
                t+=s[j];
                st.insert(t);
            }
        }
        int count=0;
        for(int i=0;i<arr.size();i++)
        {
            if(st.find(arr[i])!=st.end())count++;
        }
        return count;
    }
};