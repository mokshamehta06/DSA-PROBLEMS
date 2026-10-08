class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int res=0;
        int maxi=0;
        for(auto it:mpp){
            if(it.second>maxi){
                maxi=it.second;
                res=it.first;
            }
        }
        return res;
    }
};