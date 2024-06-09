#include<iostream>
#include<unordered_map> //1st change
using namespace std;

//this is the same code as of maps
//differences:
//internal implimentation using hash tables instead of trees
//time complexity way o(1)vs o(logn)
//valid index-types  //you cant use complex data structures as indices in u_map

int main(){
 unordered_map<int,string> m={{2,"apple"},{5,"honey"},{4,"average"}};
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


 m.clear();
 if(m.size()==0)
 cout<<"map is empty";
}


//always use unordered_map where order doesnt matter
