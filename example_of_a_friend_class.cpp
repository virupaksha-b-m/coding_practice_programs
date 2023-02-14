#include <iostream>
using namespace std;

class A
{
    int x = 5;

    friend class B;
};

class B
{

    public:
    void display(A &a)
    {
        cout << " the value of x is " << a.x << endl;
    }
};

int main(){

    A a;
    B b;
    b.display(a);
    return 0;
}