class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        int n = nums.size();

       int total_sum = 0;
        for(int x : nums) {
         total_sum += x;
        
        }
        int left_sum = 0;

        for(int i = 0;i<n;i++){

          int right_sum = total_sum - left_sum - nums[i];

          if(right_sum == left_sum)
        {
         return i;
        }

        left_sum += nums[i];
        
      }
      return -1;
    }
};