#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

class person // this is first class
{
public:
    string employname;
    int age;
    void getdetail()
    {
        cout << "enter mamber details" << endl;
        cout << "enter mamber Name" << endl;
        getline(cin, employname); // using string fuction fo taking full name
        cout << "enter mamber Age" << endl;
        cin >> age;
    }
};
class student // second class
{
public:
    float percentge;
    void getpercentge()
    {
        cout << "enter mamber Percentge :" << endl;
        cin >> percentge;
    }
};
class teacher : public student, public person // Multipal inharitance using hear
{
public:
    int salary;
    void getsalary()
    {
        cout << "enter mamber Salary" << endl;
        cin >> salary;
    }
    void getoutput()
    {
        cout << "member deteils is" << endl;
        cout << "\t----------------------------------\t" << endl;
        cout << "memeber Name is :" << employname << endl;
        cout << "memeber Age is :" << age << endl;
        cout << "memeber Percentge is :" << percentge << endl;
        cout << "memeber Salary is :" << salary << endl;
        cout << "\t----------------------------------\t" << endl;
        cout << "Thank you for your lovly response" << endl;
    }
};

int main()
{
    teacher obj;
    obj.getdetail();
    obj.getpercentge();
    obj.getsalary();
    obj.getoutput();

    return 0;
}
// ahiya aa program puro thai chhe ahiya badha ne avva badal dhanyavad