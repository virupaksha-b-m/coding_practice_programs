#include<iostream>
using namespace std;

struct rectangle
{
    int hight,width;

};


int main(){

    struct rectangle rec;

    rec.hight=10;
    rec.width=20;

    cout<<" the area is "<<(rec.hight*rec.width)<<endl;
    return 0;
}
