#include<iostream>
#include<map>
using namespace std;

int main(){
 map<int,string> m={{2,"apple"},{5,"honey"},{4,"average"}};
 //maps store pairs only
 m.insert({7,"hillybilly"});
 m[9]="abcd";
cout<<m.size()<<endl;//gives out size of map like vectors

 for(auto it=m.begin();it!=m.end();it++)
 cout<<it->first<<" "<<it->second<<endl;

 cout<<endl;
//swap(*(m.find(2)),*(m.find(4)));
//error since its an ordered map

 for(auto &pr : m)  //pr will copy each pair of map to itself
 cout<<pr.first<<" "<<pr.second<<endl;//while &pr refers to those ordered pairs

 cout<<m[8]<<" "<<m.size()<<endl;
 m[8];//empty string as value inserted to map m
 cout<<m.size()<<endl;

 //erasing a map element;
 //m.erase() can take two different arguments
 //one is a present key value
 //second an iterator

 m.erase(4);
 m.erase(m.find(9));

for(auto &pr : m)
 cout<<pr.first<<" "<<pr.second<<endl;
}
