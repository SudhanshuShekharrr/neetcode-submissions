class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n = nums.size();
        int sum =0;
        int count =0;
        int mini = INT_MAX ;
        int i=0;
        int j=0;
        while(j<n){
            sum += nums[j];
           if(sum>=target){
           
            while(sum-nums[i]>=target){
                sum = sum - nums[i];
                i++;
            }
             count = (j-i+1);
               mini = min(mini,count);

           }
         
           j++;
        }
        if(mini==INT_MAX) return 0;
        return mini;

        
    }
};