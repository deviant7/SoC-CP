#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> s;
        vector<int> v(temperatures.size(),0);
        for(int i=0;i<temperatures.size();i++){
            while(!s.empty() && temperatures[i]>temperatures[s.top()]){
                v[s.top()]=i;
                s.pop();
            }
            s.push(i);
        }
        vector<int> v1(temperatures.size());
        for(int i=0;i<temperatures.size();i++){
            if(v[i]==0)v1[i]=0;
            else v1[i]=v[i]-i;
        }
        return v1;
    }
};

