class Solution {
public:
    int arraySign(vector<int>& nums) {
        int negative = 0;

        for(int n:nums) {
            if(n==0) 
               return 0;
            if(n<0) 
               negative++;
        }
        return negative%2==0 ? 1: -1;
    }
};