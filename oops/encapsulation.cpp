#include <iostream>
using namespace std;

class Employee
{
private:
    string Name;
    string Company;
    int Age;

public:
    Employee(string name, string company, int age)
    {
        Name = name;
        Company = company;
        Age = age;
    }

    // setter
    void set_name(string name)
    {
        Name = name;
    }
    void set_company(string company)
    {
        Company = company;
    }
    void set_age(int age)
    {
        Age = age;
    }
    // getter
    string get_name()
    {
        return Name;
    }
    string get_company()
    {
        return Company;
    }
    int get_age()
    {
        return Age;
    }

    void introduce_yourself()
    {
        cout << "my name is " << Name << " \n my company is " << Company << " \n my age is" << Age << endl;
    }
};

int main()
{
    Employee employee1 = Employee("shashank ", "amazon", 19);
    Employee employee2 = Employee("saldina ", "amazon", 20);
    // employee1.introduce_yourself();
    // employee2.introduce_yourself();
    employee1.set_name("saldina");
    cout << employee1.get_name();
    return 0;
}