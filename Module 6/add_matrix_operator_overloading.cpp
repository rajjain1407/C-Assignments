#include <iostream>
using namespace std;
#define N 3
class O
{
private:
    int a[30];

public:
    void enter_value()
    {
        for (int i = 0; i < N; i++)
        {
            cout << "\n Enter value : ";
            cin >> a[i];
        }
    }
    void display()
    {
        for (int i = 0; i < N; i++)
        {
            cout << a[i] << "\t";
        }
        cout << endl;
    }
    void operator+(O n)
    {
        int add[30];
        for (int i = 0; i < N; i++)
        {
            add[i] = a[i] + n.a[i];
        }
        for (int i = 0; i < N; i++)
        {
            cout << add[i] << "\t";
        }
    }
};
int main()
{
    O obj1;
    O obj2;
    obj1.enter_value();
    obj2.enter_value();
    obj1.display();
    obj2.display();
    obj1 + obj2;
}