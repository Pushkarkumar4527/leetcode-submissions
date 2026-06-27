int maxArea(int height[], int n) {
    int left = 0;
    int right = n-1;
    int max = 0;
    
    while(left<right){
        int width = right - left;
        int ht = (height[left] < height[right]? height[left]:height[right]);
                                               //true condn // false condn
        int area = width * ht;
        if(area>max){
            max = area;
        }
        if(height[left]<height[right]){
            left++;
        } else{
            right--;
        }
    }
    return max;
}