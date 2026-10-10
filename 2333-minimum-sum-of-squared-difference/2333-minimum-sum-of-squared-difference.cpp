
class Solution {
public:
    long long minSumSquareDiff(vector<int>& nums1, vector<int>& nums2, int k1, int k2) {
        int n = nums1.size();
        vector<int> diff(n);

        long long k = 1LL * k1 + k2;
        long long total = 0;
        int mx = 0;

        for (int i = 0; i < n; i++) {
            diff[i] = abs(nums1[i] - nums2[i]);
            total += diff[i];
            mx = max(mx, diff[i]);
        }

        if (total <= k) {
            return 0;
        }

       
        int low = 0, high = mx;

        while (low < high) {
            int mid = low + (high - low) / 2;
            long long required = 0;

            for (int d : diff) {
                required += max(0, d - mid);
            }

            if (required <= k) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }

        for (int i = 0; i < n; i++) {
            k -= max(0, diff[i] - low);
            diff[i] = min(diff[i], low);
        }

        for (int i = 0; i < n && k > 0; i++) {
            if (diff[i] == low) {
                diff[i]--;
                k--;
            }
        }

        long long ans = 0;

        for (int d : diff) {
            ans += 1LL * d * d;
        }

        return ans;
    }
};
