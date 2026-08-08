class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1;
        set<int> result;

        for(int num : nums1){
            s1.insert(num);
        }

        for(int num : nums2){
            if(s1.count(num)){
                result.insert(num);
            }
        }
           vector<int> ans(result.begin(), result.end());

        return ans;
    }
};
