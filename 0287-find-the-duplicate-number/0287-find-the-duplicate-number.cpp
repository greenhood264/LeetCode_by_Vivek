class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        // Phase 1: Find meeting point
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        // Phase 2: Find cycle entry
        int ptr = nums[0];

        while (ptr != slow) {
            ptr = nums[ptr];
            slow = nums[slow];
        }

        return ptr;
    }
};