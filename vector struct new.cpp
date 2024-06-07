#include<iostream>
using namespace std;

struct Vector{
 double x,y,z;

 Vector(int a,int b,int c){
 x=a;y=b;z=c;
 cout<<"Constructor called"<<endl;
 }
 Vector(){x=y=z=0;cout<<"default constructor called"<<endl;}
 Vector(int a){x=y=z=a;}

 Vector(const Vector &v){
 x=v.x; y=v.y ;z=v.z;
 cout<<"copy constructor called"<<endl;
 }
 ~Vector(){cout<<"Destructor called"<<endl;}

 Vector operator+ (const Vector &v ){
 return Vector(x+v.x,y+v.y,z+v.z);
 }
 Vector operator*(double d){
 return Vector(x*d,y*d,z*d);
 }
};

Vector operator* (double d,Vector v){
return v*d;
}

int main(){
 Vector u(1,2,3),a(4,5,6),s;
 double t=10;
 s=t*u + 0.5*t*t*a;
 cout<<s.x<<' '<<s.y<<' '<<s.z<<endl;
}
