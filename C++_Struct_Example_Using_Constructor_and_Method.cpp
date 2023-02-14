#include<iostream>
using namespace std;

struct rectangle{

    int hight, width;

    rectangle(int hight, int width){

        this->hight=hight;
        this->width=width;

    }
    void areais(){
        cout<<" thr area is "<<(hight*width)<<endl;
    }

};

int main()
{
    struct rectangle rec = rectangle(2,3);
    rec.areais();
    return 0;
}