//	Write a program to swap the two numbers using friend function without using third variable  
#include<iostream>
using namespace std;
class A;
class B{
    private:
    int b;
    public:
    void get_data(){
        cout<<"Enter b value : ";
        cin>>b;

    }
    void display(){
        cout<<"Before swiping b value : "<<b<<endl;
    }
friend void swap(A,B);

};
class A{
    private:
    int a;
    public:
    void get_data(){
        cout<<"Enter a value : ";
        cin>>a;

    }
    void display(){
        cout<<"Before swiping a value : "<<a<<endl;
    }
friend void swap(A,B);
};
void swap(A ob1,B ob2){
   ob1.a=ob1.a+ob2.b;
   ob2.b=ob1.a-ob2.b;
   ob1.a=ob1.a-ob2.b;

   cout<<"After swiping a value = "<<ob1.a<<endl;
   cout<<"After swiping b value = "<<ob2.b<<endl;

}
int main(){
    A a;
    B b;
    a.get_data();
    b.get_data();
    a.display();
    b.display();
    swap(a,b);
}