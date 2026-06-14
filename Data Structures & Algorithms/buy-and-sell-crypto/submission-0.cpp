class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        int profit = INT_MIN;
        stack<int>st;
        for(int i=0;i<n;i++){
            if(st.size()!=0 && nums[i]>st.top()){
                int diff = nums[i]- st.top();
                profit = max(profit,diff);
            }
            if(st.size()==0 || st.top()>nums[i]){
                st.push(nums[i]);
            }
        }
        if(profit==INT_MIN) return 0;
        return profit;
        
    }
};
