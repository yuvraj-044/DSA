class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int k = 0;

        for(int i = 0; i < n; i++){
            int index = i;

            while(index < n && nums[index] == nums[i]){
                index++;
            }

            nums[k] = nums[i];
            k++;

            i = index - 1; 
        }

        return k;
    }
};