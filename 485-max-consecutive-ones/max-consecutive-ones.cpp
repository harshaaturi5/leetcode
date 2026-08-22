class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        
        int i=0,j=0;
        int len=0,max=0;
        int n=nums.size();

        while(j<n && i<n){
            if(nums[j]==1){
                j++;
                len++;
                if(len>max) max=len;
            }
            else{
                len=0;
                i=j+1;
                j++;
            }
        }
        return max;


    }
};