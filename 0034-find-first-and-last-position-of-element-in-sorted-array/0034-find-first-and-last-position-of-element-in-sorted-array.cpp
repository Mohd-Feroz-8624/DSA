class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
       int n = arr.size();
        int left = 0, right = n-1;
        int ans1 = -1, ans2 = -1; 
        while(left<=right){
            int mid = (left + right)/2;
            if(arr[mid] == x){
                ans1 = mid;
                right = mid-1;
            }else if(arr[mid] <x){
                left = mid+1;
            }else{
                right = mid -1;
            }
        }
        left = 0 ;
        right = n-1;
        while(left <= right){
            int mid = (left +right)/2;
            if(arr[mid] == x){
                ans2 = mid;
                left = mid + 1;
            }
            else if(arr[mid] > x){
                right = mid-1;
            }else{
                left = mid+1;
            }
            
        }
        return { ans1,ans2};
    }

};