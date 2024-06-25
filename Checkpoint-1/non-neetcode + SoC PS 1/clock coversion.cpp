#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;

string to_strings(int a){
 stringstream ss;
 ss<<a;
 string s;
 ss>>s;
 return s;
}

int to_ints(string s){
 stringstream ss;
 ss<<s;
 int a;
 ss>>a;
 return a;
}



string twelve_hour_format(const string &s,string &am_or_pm ){

 vector<int> a(2);
 a[0]=to_ints(s.substr(0,2));
 a[1]=to_ints(s.substr(3,2));

 if (a[0]>=12){am_or_pm="PM";
 if(a[0]>12)a[0]=a[0]-12;}
 else{am_or_pm="AM";
 if (a[0]==0)a[0]=12;}

 if(a[0]<10&&a[1]<10){
 return ("0"+to_strings(a[0])+":"+"0"+to_strings(a[1]));
 }
 else if(a[0]<10&&a[1]>=10){
 return ("0"+to_strings(a[0])+":"+to_strings(a[1]));
 }
 else if(a[0]>=10&&a[1]<10){
 return (to_strings(a[0])+":"+"0"+to_strings(a[1]));
 }
 else
 return (to_strings(a[0])+":"+to_strings(a[1]));
}

int main(){
 int no_of_testcases;
 cin>> no_of_testcases;

 vector<string> v(no_of_testcases);

 for(int i=0;i<no_of_testcases;i++)
 cin>> v[i];

 string am_or_pm="AM";

 for(int i=0;i<no_of_testcases;i++){
 cout<<twelve_hour_format(v[i],am_or_pm)<<" "<<am_or_pm<<endl;
}
}
