#include <iostream>

#include <stdlib.h>

#include <string>

#include <iomanip>


using namespace std;

//declare-struct-mhs
struct Mahasiswa {
  int nbi;
  string nama, alamat;
};

//global-variabel
int pil;
int jmldata = 0;
struct Mahasiswa mhs[100], temp;

void menu(int pil);
void input();
void tampil();
void sort_data(int type);
void search_data();

int main() {
  system("clear");

  cout << "---      Menu      ---" << endl;
  cout << "1. Input data         " << endl;
  cout << "2. Tampilkan data     " << endl;
  cout << "0. Keluar             " << endl;
  cin >> pil;

  menu(pil);

}

void menu(int pil){
    if(pil == 0){
        main();
    }else if(pil == 1){
        input();
    }else if(pil == 2){
        tampil();
    }else{
        cout<< "menu tidak ditemukan"<<endl;
    }
}

void input() {
  pil = 0; //reset var pil

  system("clear");
  cout << "***   Input data   ***" << endl << endl;
  cout << "Jmlah data: ";
  cin >> jmldata;
  cout << endl << "--" << endl;

  for (int i = 0; i <= (jmldata - 1); i++) {
    cout << "NBI:   ";
    cin >> mhs[i].nbi;
    cout << "Nama:   ";
    cin >> mhs[i].nama;
    cout << "Alamat: ";
    cin >> mhs[i].alamat;
    cout << endl;
  }

  cout << endl;
  cout << "***   Sub-Menu      ***" << endl;
  cout << "0. kembali ke menu     " << endl;
  cout << "2. tampilkan data      " << endl;
  cin >> pil;

  menu(pil);
}

void tampil() {
  system("clear");
  cout << "*** Menampilkan data ***" << endl;

  if (jmldata != 0) {
    cout << setw(5) << "No" << setw(15) << " NBI" << setw(15) << "Nama" << setw(15) << " Alamat" << endl;
    for (int i = 0; i <= (jmldata - 1); i++) {
      cout << setw(5) << (i + 1);
      cout << setw(15) << mhs[i].nbi;
      cout << setw(15) << mhs[i].nama;
      cout << setw(15) << mhs[i].alamat << endl;
    }
  } else {
    cout << "Data Kosong!";
  }

  cout << endl;
  cout << "---   Sub-Menu         ---" << endl;
  cout << "1. Urutkan berdasarkan NBI" << endl;
  cout << "2. Cari berdasarkan NBI" << endl;
  cout << "0. Kembali ke menu awal   " << endl;
  cin >> pil;

  if (pil == 1) {
    sort_data(pil);
  } else if (pil == 2) {
    search_data();
  } else {
    main();
  }
}

void sort_data(int type) {
  system("clear");
  for (int x = 0; x < (jmldata - 1); x++) { //bubble-short
    for (int y = 0; y < (jmldata - 1); y++) {

      if (mhs[y].nbi > mhs[y + 1].nbi) {
        temp = mhs[y];

        mhs[y] = mhs[y + 1];
        mhs[y + 1] = temp;
      }
    }
  }
  tampil();
}

void search_data() {
    int src, searchnbi, j;
    bool anchor = false;
    //int j = 0;

    system("clear");
    cout << "*** Mencari data ***" << endl;

    if (jmldata != 0) {

      int i, k;
      bool found;
      cout << "NBI yang dicari: ";
      cin >> k;
      found = false;
      i = 0;
      while ((i < 100) & (!found)) {
        if (mhs[i].nbi == k)
          found = true;
        else
          i = i + 1;
      }
      if (found) {

      cout << "Mahasiswa NBI: " << k << " ditemukan  di index ke-" << i <<endl;
      cout << setw(15) << " NBI" << setw(15) << "Nama" << setw(15) << " Alamat" << endl;
      cout << setw(15) << mhs[i].nbi;
      cout << setw(15) << mhs[i].nama;
      cout << setw(15) << mhs[i].alamat << endl;

      } else {
        cout << "Mahasiswa NBI: " << k << " tidak ditemukan  " <<endl;
      }
    }else{
        cout << "Data Mahasiswa kosong";
    }

    cout << endl;
    cout << "---   Sub-Menu         ---" << endl;
    cout << "1. Coba cari data lain?   " << endl;
    cout << "0. Kembali ke menu awal   " << endl;
    cin >> pil;

    if(pil == 1) search_data(); else main();

}
