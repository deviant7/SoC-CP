//multiset is also an ordered set but here duplicates are allowed
#include<iostream>
 #include<set>
 using namespace std;

 template <class T>
 void print(multiset<T> &s){
  cout<<"size : "<<s.size()<<endl;

  for(auto v: s)
  cout<<v<<endl;
  cout<<endl;
 }

int main(){
  multiset<string> s;
  s.insert("apple");  //log(n)
  s.insert("anuj");
  s.insert("cat");
  s.insert("cat");
 print(s);

cout<<s.count("cat")<<endl;
 //if some entry "a" in a multiset s is present
 //more than once then s.find("a") will return the
 //iterator to the first apperance of "a"

 if(s.find("cat")!=s.end())
 s.erase(s.find("cat"));
 print(s);

 //now if you directly pass an entry to s.erase(entry)
 //itll delete all the instances of that entry unlike the above method
 s.insert("cat");
 print(s);

 s.erase("cat");
 print(s);

 //one question on multisets
 //monk and the magical candy bags.cpp
 }