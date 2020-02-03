#include<iostream>

using namespace std;

struct Mahasiswa {
  int nbi, nilai;
  string nama;
};

main() {

  int jml;
  cout << "masukkan banyaknya mahasiswa = ";
  cin >> jml;

  struct Mahasiswa mhs[jml];

  for(int i=0; i<=(jml-1); i++){
    cout<<"masukkan nbi mhs ke-"<<(i+1)<<" : ";
    cin>>mhs[i].nbi;
    cout<<"masukkan nilai mhs ke-"<<(i+1)<<" : ";
    cin>>mhs[i].nilai;
    cout<<"masukkan mhs nama ke-"<<(i+1)<<" : ";
    cin>>mhs[i].nama;

    cout<<endl;

    cout<<mhs[i].nbi;
    cout<<mhs[i].nilai;
    cout<<mhs[i].nama <<endl;
  }

}
