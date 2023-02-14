#include <iostream>
using namespace std;

class student
{
public:
    int id;
    string name;

    student(int i, string n)
    {
        this->id = i;
        this->name = n;
    }   

    void display()
    {
        cout<< "id is " << id << " name is " << name << endl;
    }
};

int main()
{

    student s1 = student(1, "virupaksha");

    student s2 = student(2, "seema");

    s1.display();
    s2.display();
}