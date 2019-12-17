#include <iostream>

using namespace std;

main()
{

    int matkul[100],sks[100],input;

    cout<<"banyaknya matkul: ";cin>>input;

    for(int i=0; i<input; i++){
        cout<<"nilai matkul ke-"<<(i+1)<<"      : ";cin>>matkul[i];
        cout<<"jumlah sks matkul ke-"<<(i+1)<<" : ";cin>>sks[i];
    }

    for(int i=0; i<input; i++){
        cout<<"nilai matkul: "<<matkul[i]<<" jumlah sks: "<<sks[i]<<endl;
    }
}
