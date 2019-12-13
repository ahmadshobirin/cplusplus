#include <iostream>
using namespace std;

class Mahasiswa {
  private:

    string nama,alamat,tgl;

  public:

    void setAttribut(string n, string a, string t){
        nama = n; alamat = a; tgl = t;
    }

    // Setter
    void setNama(string n) {
      nama = n;
    }

    void setAlamat(string a) {
      alamat = a;
    }

    void setTgl(string t) {
      tgl = t;
    }

    // Getter
    string getName() {
      return nama;
    }

    string getAlamat() {
      return alamat;
    }

    string getTanggal() {
      return tgl;
    }
};

int main() {

    string n,a,t;

    Mahasiswa myObj;
    cout<<"Nama Mahasiswa: ";getline(cin, n);
    cout<<"Nama Alamat: ";getline(cin, a);
    cout<<"Nama Tanggal Lahir: ";getline(cin, t);

    myObj.setNama(n);
    myObj.setAlamat(a);
    myObj.setTgl(t);

    cout<<endl;
    cout<<"--"<<endl;
    cout <<"Nama:          "<<myObj.getName()<<endl;
    cout <<"Alamat:        "<<myObj.getAlamat()<<endl;
    cout <<"Tanggal Lahir: "<< myObj.getTanggal()<<endl;
    cout<<"--"<<endl;

    return 0;
}
