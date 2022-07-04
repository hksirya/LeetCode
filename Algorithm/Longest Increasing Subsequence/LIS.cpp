// DYNAMMIC PROGRAMMING 

class Solution {
    int helper(vector<int>& nums){
        vector<int>dp(nums.size(),1);
        
        for(int i=0;i<nums.size();i++){
            
            for(int j=0;j<=i;j++){
                
                if(nums[i]>nums[j] && dp[i]<dp[j]+1)
                    dp[i]=dp[j]+1;
            }
        }
        int best=0;
        for(int i=0;i<nums.size();i++){
            best=max(best,dp[i]);
        }
        
        return best;
    }
public:
    int lengthOfLIS(vector<int>& nums) {
      
        return helper(nums);
    }
};
