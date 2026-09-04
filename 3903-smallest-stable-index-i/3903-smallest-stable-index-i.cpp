class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        
        int n = nums.size();
        int leftmax = 0;
        int instability_score = 0;

        for(int i = 0;i<n;i++){
          leftmax = max(leftmax, nums[i]);

          int rightmin = INT_MAX;

          for(int j = i;j<n;j++){
            if(nums[j] < rightmin){
                rightmin = nums[j];
            }
          }

          instability_score = leftmax - rightmin;
         
         if(instability_score <= k){
            return i;
           }  
      }    
     return -1;
    }
};