#include<iostream>
using namespace std;

class employee{

    public:
  employee(){
    cout<<"constructor is called "<<endl;
  }  

  ~employee(){
    cout<<"destructor is called "<<endl;
  }
};

int main(){
    employee e1;
    employee e2;

    return 0;
}