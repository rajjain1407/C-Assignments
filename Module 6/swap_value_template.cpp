#include<iostream>
using namespace std;
template<class T>
T swap(T a,T b){

   
    T temp;
    temp=a;
    a=b;
    b=temp;

    cout<<"After swap "<<a<<" "<<b<<endl;
    
}
int main(){
     int x=10,y=20;
    double a1=20.5,b1=10.5;
    cout<<"Before swap "<<x<<" "<<y<<endl;
    cout<<"Before swap "<<a1<<" "<<b1<<endl;
    
    swap(10,20);
    swap(20.5,10.5);
   

    
}