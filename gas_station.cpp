class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int n=gas.size();
        vector<int> diff_arr(n);

        for(int i=0;i<n;i++){
            diff_arr[i]=gas[i]-cost[i];
        }
        int summ_arr=accumulate(diff_arr.begin(),diff_arr.end(),0);
        if(summ_arr<0)return -1;

        int sum=0;
        int start=0;
        int i=0;
        
        do{sum+=diff_arr[i%n];

            if(sum<0){
                sum=0;
                start=(i%n)+1;
                }
                i++;
            }
        while((i%n<start)||(i>=start && i<n));

        return start;
    }
};
