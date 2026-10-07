class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long ans = 0;
        int i = 0, j = 0;
        int n = nums.size();

        unordered_map<int, int> mpp;
        long long sum = 0;

        while (j < n) {

            mpp[nums[j]]++;
            sum += nums[j];

            while (mpp[nums[j]] > 1) {
                mpp[nums[i]]--;
                sum -= nums[i];
                i++;
            }

            if (j - i + 1 == k) {
                ans = max(ans, sum);

                mpp[nums[i]]--;
                sum -= nums[i];
                i++;
            }

            j++;
        }

        return ans;
    }
};