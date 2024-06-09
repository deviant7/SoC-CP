class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int,int> m;
        for(int n : nums)m[n]++;

        set<pair<int,int> >sp;
        for(auto pr: m){
            sp.insert({pr.second,pr.first});
        }
        vector<int> v;
        auto it=(--sp.end());
        for(int i=0;i<k;i++,it--){
            v.push_back(it->second);
        }
        return v;
    }
};
