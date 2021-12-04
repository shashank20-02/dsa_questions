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

// developer class is inherited by employee class
class Developer : public Employee
{
public:
    string fav_pro_lang;

    // contructor
    Developer(string name, string company, int age, string fav_pro_language) : Employee(name, company, age)
    {
        fav_pro_lang = fav_pro_language;
    }

    // class method
    void fixbugs()
    {
        cout << Name << " has fixed the buges in " << fav_pro_lang << endl;
    }
};
// teacher class is inherited by employee class
class Teacher : public Employee
{
public:
    string Subject;

    //constructor

    Teacher(string name, string company, int age, string subject) : Employee(name, company, age)
    {
        Subject = subject;
    }

    void print_sub()
    {
        cout << Name << " is teaching the subject " << Subject << endl;
    }
};
int main()
{
    Developer dev = Developer("shashank", "amazon", 19, "C++");
    Teacher tec = Teacher("nikhil", "flipkart", 19, "history");
    tec.print_sub();
    return 0;
}