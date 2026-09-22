class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
         int total = 0;
         int fuel = 0;
         int start =0;  

         for(int i=0;i<gas.size();i++){
            int net = gas[i] -cost[i]; 

            total += net;
            fuel += net; 

            if(fuel<0){
                start = i+1;
                fuel =0;
            } 
         } 

         if(total<0)
           return -1; 

        return start; 
    }
};
