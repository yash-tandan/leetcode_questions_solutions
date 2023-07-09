class Solution {
public:
    void sortColors(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(auto nums: nums)
            cout<<nums;
    }
};
