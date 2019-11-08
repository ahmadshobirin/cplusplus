#include<iostream>

using namespace std;

main()
{
    int input;
    cout<<"lebokno : "; cin>>input;

    for(int i=1; i<input; i++){
        if(i%2!=0){
            cout<<i<<endl;
        } else {
            if(input%2==0){
                cout<<(input-i)<<endl;
            } else {
                cout<<(input-(i-1))<<endl;
            }
        }
    }
}
