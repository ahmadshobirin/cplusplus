#include <iostream>

using namespace std;

int main()
{
     // Mendeklarasikan variabel MD sebagai
     // Indeks perulangan
     int MD;

     // Melakukan inisialisasi nilai terhadap variabel MD
     // Perhatikan nilai MD = 25
     // Tidak sesuai dengan kondisi "MD < 8"
     // Namun tetap akan melakukan satu kali
     // Eksekusi statemen yang ada dalam blok perulangan
     MD = 25;

     do{
          cout<<"Belajar C++";

          // Statemen ini berguna untuk menaikkan nilai MD
          // Setelah MD bernilai 8 maka perulangan berhenti
          MD++;
     }while (MD<8);

     return 0;
}
