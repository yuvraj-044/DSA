class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> rev;
        int n=nums.size();
        for(int i=0;i<n;i++){
            rev.push_back(nums[n-i-1]);
        }
        nums.insert(nums.end(),rev.begin(),rev.end());
    
        return nums;
    }
};