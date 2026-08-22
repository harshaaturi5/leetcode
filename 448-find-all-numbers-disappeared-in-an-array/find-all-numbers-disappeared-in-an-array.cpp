class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {

    map<int,int>   temp;

    for(int i=0;i<nums.size();i++){
        temp[nums[i]]++;
    }
    vector<int>ans;
    for(int i=1;i<=nums.size();i++){
        if(temp[i]==0){
            ans.push_back(i);
        }
    }
    return ans;
    
    }
};