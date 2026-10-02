class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        int maxifreq=0;
        int ans=0;
        for(auto it:mpp){
            if(it.second >maxifreq){
                maxifreq=it.second;
                ans=it.first;
            }
        }
        return ans;
    }
};