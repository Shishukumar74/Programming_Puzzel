class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(int i=0;i<nums.size();i++){
            ans += (int)log10(nums[i])&1;
        }
        return ans;
        
    }
};