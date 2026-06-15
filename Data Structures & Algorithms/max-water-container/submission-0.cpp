class Solution {
public:
    int maxArea(vector<int>& heights) {
             int n = heights.size();
             int i= 0;
             int j = n-1;
             int waterCount = 0;
             int maxi = INT_MIN ;

             while(j>i){
                waterCount = (j-i)* min(heights[i],heights[j]);

                maxi = max(maxi, waterCount);
                if(heights[i]>heights[j]) j--;
                else if(heights[i]<=heights[j]) i++;

             }
        return maxi ;
    }
};
