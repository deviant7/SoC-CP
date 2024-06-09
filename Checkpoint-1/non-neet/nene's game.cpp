#include<iostream>
#include<vector>
using namespace std;

void winner_array( int elimn_pos_0, const vector<int>& line_lengths){

 for(size_t i=0;i<line_lengths.size();i++){
 if(elimn_pos_0>line_lengths[i])
 cout<<line_lengths[i]<<" ";
 else cout<<elimn_pos_0-1<<" ";
}
cout<<endl;
}

int main(){
 int no_of_testcases;
 cin>> no_of_testcases;

 vector<vector<int> > elimn_pos(no_of_testcases);
 vector<vector<int> > line_lengths(no_of_testcases);

 for(int k=0;k<no_of_testcases;k++){

 int size1,size2;
 cin>>size1>>size2;

 for(int i=0;i<size1;i++){
 int a;cin>>a;
 elimn_pos[k].push_back(a);}

 for(int i=0;i<size2;i++){
 int a;cin>>a;
 line_lengths[k].push_back(a);}
}
 for(int k=0;k<no_of_testcases;k++){
 winner_array(elimn_pos[k][0],line_lengths[k]);
}
}
