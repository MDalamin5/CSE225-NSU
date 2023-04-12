#include <bits/stdc++.h>
using namespace std;
class Person
{
private:
    string name;
    int age;

public:
    Person(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void setAge(int age)
    {
        this->age = age;
    }
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
};
int main()
{
    Person p1("Al Amin", 12);
    cout << p1.getAge() << endl;
}