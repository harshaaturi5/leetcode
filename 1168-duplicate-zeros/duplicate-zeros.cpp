class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector <int>dup;
        vector <int>ans;
        int n=arr.size();
     
       
        
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                ans.push_back(arr[i]);
            }
            else{
                ans.push_back(arr[i]);
                ans.push_back(0);
            }
        }
        for(int i=0;i<n;i++){
            arr[i]=ans[i];
        } 
        
        
    }
};