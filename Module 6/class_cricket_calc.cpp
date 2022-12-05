#include<iostream>
using namespace std;
class cricketer
{
    protected:
    char name[40][25];
    int age[30];
    int run[30];
    public:
    void get_data()
    {
        for (int i = 0; i < 3; i++)
        {
           cout<<"Enter name:";
           cin>>name[i];

           cout<<"Enter age:";
           cin>>age[i];

           cout<<"Enter run:";
           cin>>run[i];
        }
        cout<<"\n";
        for (int i = 0; i < 3; i++)
        {
            cout<<"name:"<<name[i]<<endl;
            cout<<"age:"<<age[i]<<endl;
            cout<<"run:"<<run[i]<<endl;

        }
        cout<<"\n ";
        
    }
};
class batsman:public cricketer{
    private:
    int total_run=0,average_run,best_performance;
    public:
    void run_count(){
        for (int i = 0; i < 3; i++)
        {
            total_run+=run[i];
        }
        cout<<"\n Total run="<<total_run;
    }
    void run_avarage(){
        cout<<"\n avarage run:"<<total_run/3;
    }

};
int main(){
    batsman b;
    b.get_data();
    b.run_count();
    b.run_avarage();
    
}