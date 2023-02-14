#include<iostream>
using namespace std;

class B;
class A{

    int x;
public:
    void setdata(int i){
        x=i;
    }

    friend void Min(A,B);
};

class B{

    int y;
public:
    void setdata(int i){
        y=i;
    }

    friend void Min(A,B);
};

void Min(A a, B b){

    if(a.x > b.y)
    cout<<a.x;
    else
    cout<<b.y;
}

int main(){
    A a;
    B b;
    a.setdata(10);
    b.setdata(20);

    Min(a,b);
    return 0;
}

// In the above example, min() function is friendly to two classes, i.e., the min() function can access the private members 
// of both the classes A and B.