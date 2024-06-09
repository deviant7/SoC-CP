class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> v;

        if(count(nums.begin(),nums.end(),0)==0){
        int product=1;
        for(auto n:nums)
        product*=n;
          for(auto n:nums)
          v.push_back(product/n);
        return v;
        }
        else{
            if(count(nums.begin(),nums.end(),0)==1){
                int product=1;
                for(auto n:nums){
                    if(n==0)continue;
                    product*=n;
                }
                for(auto n:nums){
                    if(n==0)
                    v.push_back(product);
                    else v.push_back(0);
                }
                return v;
            }
            else{
                for(auto n:nums)
                v.push_back(0);
                return v;
                }
        }
    }
};
