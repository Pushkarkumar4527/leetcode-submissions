class Solution {
public:
    int findGCD(vector<int>& nums) {
        int min = *min_element(nums.begin(),nums.end()); //b
       int max = *max_element(nums.begin(),nums.end()); //a
        while (max != 0){
            int r = min % max;
            min = max;
            max = r;
        }
        return min;
    }
};