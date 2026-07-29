class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
       int n = nums.size();
        vector<int> temp = nums;
        sort(temp.begin(), temp.end());

        int left = -1, right = -1;

        for (int i = 0; i < n; i++) {
            if (nums[i] != temp[i]) {
                left = i;
                break;
            }
        }

        if (left == -1) return 0; // Already sorted

        for (int i = n - 1; i >= left; i--) {
            if (nums[i] != temp[i]) {
                right = i;
                break;
            }
        }

        return right - left + 1; 
    }
};