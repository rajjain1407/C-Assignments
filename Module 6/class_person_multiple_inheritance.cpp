#include <iostream>
using namespace std;
class person
{
protected:
    string name;
    int age;
};
class student
{
protected:
    float percentage;
};
class teacher : public person, public student
{
private:
    long int salary;

public:
    void get_data()
    {
        cout << "\n Enter name : ";
        cin >> name;

        cout << "\n Enter age : ";
        cin >> age;
    }

    void precent()
    {
        cout << "\n Enter percentage : ";
        cin >> percentage;
    }
    void money()
    {
        cout << "\n Enter salary : ";
        cin >> salary;
    }
    void dispaly()
    {
        cout << "\n Name : " << name;
        cout << "\n Age : " << age;
        cout << "\n Percentage : " << percentage;
        cout << "\n Salary : " << salary;
    }
};
int main()
{
    teacher obj;
    obj.get_data();
    obj.precent();
    obj.money();
    obj.dispaly();
}