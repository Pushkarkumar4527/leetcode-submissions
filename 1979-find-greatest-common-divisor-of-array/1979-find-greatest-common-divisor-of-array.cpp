class Solution {
public:
    int findGCD(vector<int>& nums) {
        // int min = *min_element(nums.begin(),nums.end()); //b
        // int max = *max_element(nums.begin(),nums.end()); //a
        // while (max != 0){
        //     int r = min % max;
        //     min = max;
        //     max = r;
        // }
        // return min;

        int minm = nums[0];
        int maxm = nums[0];
        for(int i : nums){
            minm = min(minm,i);  // we can do either way it min or max
            maxm = max(maxm,i);
        }

        while (maxm != 0){
            int r = minm % maxm;
            minm = maxm;
            maxm = r;
        }
        return minm;
    }
};