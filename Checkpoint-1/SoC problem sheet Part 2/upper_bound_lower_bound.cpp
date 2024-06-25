#include <iostream>
#include <algorithm>
using namespace std;

int main() {
int n;
cin >> n;
int a[n];
for(int i = 0; i < n; ++i){
cin >> a[i];
}
sort(a, a+n);
for(int i = 0; i < n; ++i){
cout << a[i] << " ";
}
cout << endl;

//lower_bound(a,a+6,8)
//arguments are
//1. pointer/iterator of starting element //array must be sorted
//2. pointer/iterator of address just next to last element
//3. number whose lower_bound is to be found
//in above case it starts at a[0] checks till a[5] and returns
//pointer to either 8,if present, else, pointer to element just greater than 8

//upper_bound(a,a+6,8)
//only difference is that//
//it returns pointer/iterator to the  
//element just greater than 8

int *ptr = lower_bound(a,a+n,8);  //log(n)
if(ptr=a+n)cout<<"NOT FOUND"<<"\n";  //if no upper or lower bound present,returns pointer/iterator next to last element used
else
cout<<(*ptr)<<"\n";

int *ptr2 = upper_bound(a,a+n,8);
if(ptr2=a+n)cout<<"NOT FOUND"<<"\n";
else
cout<<(*ptr2);
}
// for implimenting on vectors
//just use iterators in place of pointers


// caution: if similiar syntax is used with sets and maps
// it runs in o(n) time instead of o(log(n))
// hence we use slightly different syntax which does it in o(log(n))
// ex=

int n;
cin>>n;
set<int> s;
while(n--){
    int a;
    cin>>a;
    s.insert(a);
}
/*no need to sort*/
auto it=lower_bound(s.begin(),s.end(),8)//not wrong but takes o(n)
auto it_1=s.lower_bound(8);//o(logn)

//set wala type of syntax is used with maps too
//auto it=m.upper_bound(8);
//in maps the checking is done on keys 
//the check can be done for any datatype on which '<' operator is defined