class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int idx=1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==idx) idx++;
        }
         return idx;
    }
};