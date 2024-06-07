#include<iostream>
#include<vector>
using namespace std;

template<typename T>
void print(vector<T> v){
for(unsigned int i=0; i<v.size(); i++)
cout << v[i] <<' ';

cout << endl;
}



int main(){
 vector<int> v(10,7);
 int a;
 while(cin>>a)
 cout<<a<<endl;

 v.resize(16,8);
 for(size_t i=0;i<v.size();i++)
 cout<<v[i];

}
