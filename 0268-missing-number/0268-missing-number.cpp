class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();

        int expected = n * (n + 1) / 2;//Sum of numbers

        int actual = 0;

        for(int i = 0; i < n; i++) {
            actual += nums[i];
        }

        return expected - actual;
    }
};