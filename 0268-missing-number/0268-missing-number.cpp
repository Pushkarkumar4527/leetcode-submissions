class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int actual=0;
        for(int val:nums){
            actual+=val;
        }
        int exp=(n*(n+1))/2;
        int ans=exp-actual;
        return ans;
    }
};