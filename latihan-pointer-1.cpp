#include<iostream>

using namespace std;

int main()
{
    long *p, x;

    cout<<"nilai p = " <<p<<endl;
    cout<<"nilai p = " <<x<<endl;
    cout<<"----------" <<endl;

    p = &x;
    x = 40;


    cout<<"nilai P = " <<p<<endl;
    cout<<"nilai X = " <<x<<endl;
    cout<<"nilai *P = " <<*p<<endl;
    cout<<"nilai &x = " <<x<<endl;

}
