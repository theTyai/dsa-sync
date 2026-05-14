class Solution {
public:
    bool isGood(vector<int>& nums) {
        if(nums.size()==1) return false;
        sort(nums.begin(),nums.end());
        int n=nums.size(),m=nums[n-1];
        if(nums.size()!=(m+1)) return false;
        if(nums[n-2]!=m) return false;
        for(int i=0;i<n-2;i++) if(nums[i]!=i+1) return false;
        return true;
    }
};
