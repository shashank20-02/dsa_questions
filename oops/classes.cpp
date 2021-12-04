#include <iostream>
using namespace std;

class Employee
{
public:
    string Name;
    string Company_name;
    int Age;

    // constructor
    Employee(string name, string company, int age)
    {
        Name = name;
        Company_name = company;
        Age = age;
    }

    // class method
    void IntroduceYourself()
    {
        cout << "My name is " << Name << endl
             << "My company name is " << Company_name << endl
             << "My age is " << Age << endl;
    }
};

int main()
{

    Employee employee1 = Employee("Shashank", "Amazon", 18);
    employee1.IntroduceYourself();
    Employee employee2 = Employee("Vishakha", "Amazon", 18);
    employee2.IntroduceYourself();

    return 0;
}