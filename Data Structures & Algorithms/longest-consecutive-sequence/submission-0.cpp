class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        unordered_set<int>s;
        for(int i=0;i<n;i++){
            s.insert(nums[i]);
        }
        int maxi = 1;
        for(auto a:s){
            if(s.count(a-1)){
                continue;
            }
            else {
               int count = 1;
                while(s.count(a+1)){
                    count++;
                    a= a+1;
                }
               if(count>maxi) maxi = count ;
            }
        }
        return maxi ;
        
    }
};
