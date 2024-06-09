class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto n:nums){
            m[n]++;
        }
        for(auto pr:m){
        if(pr.second>1)
        return true;
        }
        return false;
    }
};
