 #include<iostream>
 #include<set>
 using namespace std;

 template <class T>
 void print(set<T> &s){
  cout<<"size : "<<s.size()<<endl;

  for(auto v: s)
  cout<<v<<" ";
  cout<<endl;
 }

int main(){
  set<string> s;
  s.insert("apple");  //log(n)
  s.insert("anuj");
  s.insert("cat");
  s.insert("cat");
 print(s);

auto it=s.find("apple"); //log(n)
  if(it!=s.end())
  s.erase(it);
  print(s);
  s.erase("anuj");
  print(s);
 }
/*unordered_sets have the same differences
as b/w maps and unordered_maps

one ques solved on unord_set named ques_on_unord_sets*/
