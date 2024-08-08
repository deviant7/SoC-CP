class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();
        if(n%groupSize!=0)return false;
        int n_groups=n/groupSize;

        map<int,int> m;
        for(auto &k:hand){
            m[k]++;
        }
        for(int i=0;i<n_groups;i++){
            auto it=m.begin();
            int k=it->first;
            for(int j=k;j<k+groupSize;j++){
                m[j]--;
                if(m[j]<0)return false;
                if(m[j]==0)m.erase(j);
            }
        }
        return true;
    }
};
