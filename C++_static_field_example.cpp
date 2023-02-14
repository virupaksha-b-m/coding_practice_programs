#include<iostream>
using namespace std;

class account {
    public:
        int acc;
        string name;
        static float rateofinterest;


    account( int acc, string name){
        this->acc=acc;
        this->name=name;

    }

    void display(){
        cout<<"acc "<<acc<<" name "<<name<<"interest rate is "<<rateofinterest++<< endl;

    }

};

float account::rateofinterest = 6.5;

int main(){

    account a1 = account(201,"virupaksha ");
    account a2 = account(202,"seema ");

    a1.display();
    a2.display();

    return 0;
}