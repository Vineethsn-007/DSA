class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for (int i = 0; i < n; i++) {
            if(i>0 && nums[i]==nums[i-1]) continue;
            for (int j = i + 1; j < n;) {
                int st = j + 1, end = n - 1;
                while (st < end) {
                    long long sum = (long long)nums[i] + (long long)nums[j] +
                                    (long long)nums[st] + (long long)nums[end];
                    if (sum < target)
                        st++;
                    else if (sum > target)
                        end--;
                    else if (sum == target) {
                        ans.push_back({nums[i], nums[j], nums[st], nums[end]});
                        st++;
                        end--;
                        while(st<n && nums[st]==nums[st-1]) st++;
                    }
                }
                j++;
                while(j<n && nums[j]==nums[j-1]) j++;
            }
        }
        return ans;
    }
};