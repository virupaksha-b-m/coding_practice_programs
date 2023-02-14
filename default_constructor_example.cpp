#include<iostream>
using namespace std;

class student{

    public:
    student(){
        cout<<" default constructor can be called when an object is created "<<endl;

    }
};

int main(){
    student s1;
    return 0;
}