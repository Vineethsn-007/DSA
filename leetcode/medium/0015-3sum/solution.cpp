class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>> uniqueTriplets;
        for(int i=0;i<n;i++){
            if(i>0 && nums[i]==nums[i-1]) continue;
            int st=i+1,end=n-1;
            while(st<end){
                int sum=nums[i]+nums[st]+nums[end];
                if(sum<0){
                    st++;
                }
                else if(sum>0){
                    end--;
                }
                else {
                    ans.push_back({nums[i],nums[st],nums[end]});
                    st++;end--;
                    while(st<end && nums[st]==nums[st-1]) st++;
                }
            }
        }
        return ans;
    }
};