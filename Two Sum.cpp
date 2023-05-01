class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,k;
        vector<int> ans;
        int j =nums.size();
        for(i = 0; i < j; i++){
            for(k = i+1; k<j; k++){
                if(nums[i]+nums[k]==target){
                    ans.push_back(i);
                    ans.push_back(k);
                }
            }
        }
        return ans;
    }
};