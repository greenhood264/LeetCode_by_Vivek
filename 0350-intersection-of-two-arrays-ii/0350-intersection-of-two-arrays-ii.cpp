class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();

        if(m>n)  return intersect(nums2,nums1);

        unordered_map<int,int> mpp;
        for(int x:nums1){
            mpp[x]++;
        }

        vector<int> ans;
        for(int x:nums2){
            if(mpp[x]!=0){
                mpp[x]--;
                ans.push_back(x);
            }
        }
        
        return ans;
    }
};