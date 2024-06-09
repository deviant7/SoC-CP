class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> ms,mt;
        for(auto ch:s){
            ms[ch]++;
        }
        for(auto ch:t){
            mt[ch]++;
        }
        if(ms.size()==mt.size()){
            for(auto it_1=ms.begin(),it_2=mt.begin();
            it_1!=ms.end() && it_2!=mt.end(); it_1++,it_2++){
                if(it_1->first!=it_2->first || it_1->second!=it_2->second)
                return false;
            }
            return true;
        }
        else return false;

    }
};
