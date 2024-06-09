#include<iostream>
using namespace std;

bool can_it_stop_safely(bool p[],int n,int s,int start_index=0){

 if(s==0 && p[start_index])
 return true;

 else
 if(!p[start_index] || start_index>=n || start_index<0)
 return false;

 return
 can_it_stop_safely(p,n,s,start_index+s) ||
 can_it_stop_safely(p,n,s-1,start_index+s-1) ||
 can_it_stop_safely(p,n,s+1,start_index+s+1);
}


int main(){
 int n;
 cout<<"Enter Path Length: ";
 cin>>n;

 bool p[n];
 cout<<"Enter the obstacle course: ";
 for(int i=0;i<n;i++)cin>>p[i];

 int s;
 cout<<"Enter speed: ";
 cin>>s;

 cout<<can_it_stop_safely(p,n,s);
 }


