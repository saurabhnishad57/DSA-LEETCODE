class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int totGas=0,totCost=0;
        totGas=accumulate(gas.begin(),gas.end(),0);
        totCost=accumulate(cost.begin(),cost.end(),0);

        if(totGas<totCost) return -1;

        //unique solution always exists
        int start=0;
        int currGas=0;
        for(int i=0;i<gas.size();i++){
            currGas+=(gas[i]-cost[i]);
            if(currGas<0){
                start=i+1;
                currGas=0;
            }
        }
        return start;
        
    }
};