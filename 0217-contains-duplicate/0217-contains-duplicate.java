class Solution {
    public boolean containsDuplicate(int[] nums) {
        boolean d = false;
        Arrays.sort(nums);
        for(int i=1;i<nums.length;i++){
            if(nums[i] == nums[i-1]){
                    d = true;
                }
            }
        if(d){
            return true;
        }else{
            return false;
        }
    }
}