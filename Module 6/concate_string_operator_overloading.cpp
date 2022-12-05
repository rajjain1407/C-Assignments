#include <string.h>
#include <iostream>
using namespace std;
class A
{
private:
    char a[10];

public:
    void accept_val()
    {
        cout << "Enter string : ";
        cin >> a;
    }

    void display()
    {
        cout << "Befor string concatenate : " << a << endl;
    }

    void operator+(A m)
    {
        strcat(a, m.a);
        cout << "After string concatenate : " << a;
    }
};
int main()
{
    A obj1;
    A obj2;

    obj1.accept_val();
    obj2.accept_val();

    obj1.display();
    obj2.display();

    obj1 + obj2;
}