#include <iostream>
using namespace std;

class student
{
    public:
    int id;

    string name;
};

int main()
{
    student s1;
    s1.id = 20;
    s1.name = "virupaksha";
    cout<<"id is "<<s1.id<<endl;
    cout<<"name is "<<s1.name<<endl;

    return 0;


}
