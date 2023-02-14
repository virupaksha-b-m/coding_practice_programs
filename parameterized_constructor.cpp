#include<iostream>
using namespace std;

class student{
    public:
     int id;
     string name;

    student(int i, string name){
        id=i;
        name=name;

    }

void display(){

    cout<<"id is "<<id<<" name is"<<name<<endl;

}
};

int main(){

    student s1 = student(20,"virupaksha");
    student s2= student(30,"viru");

    s1.display();
    s2.display();

    return 0;
}