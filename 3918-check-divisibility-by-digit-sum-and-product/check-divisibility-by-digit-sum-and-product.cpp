class Solution {
public:
    bool checkDivisibility(int n) {
        int count=0;
        int sum=0,prod=1;
        int k=n;
        while(n>0){
            count++;
            sum=sum+n%10;
            prod=prod*(n%10);
            n=n/10;
        }
   
     if(k%(sum+prod)==0){
        return true;
     }
     
     return false;
    }
};