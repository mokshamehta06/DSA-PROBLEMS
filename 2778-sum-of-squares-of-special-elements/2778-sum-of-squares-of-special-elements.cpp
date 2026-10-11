class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        int product=1;
        for(int i=0;i<nums.size();i++){
            if(n%(i+1)==0){
                product=pow(nums[i],2);
                sum+=product;
            }
        }
        return sum;
    }
};