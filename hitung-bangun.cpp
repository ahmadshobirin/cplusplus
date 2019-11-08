#include<iostream>
#include<math.h>
#include<cstdlib>
using namespace std;

//interface function

void menu();
void lingkaran();
void persegi();
void persegiPanjang();
void segitiga();

int pilihmenu;
char y;

//main-function
int main()
{
    menu();
}

void menu()
{
    cout<<endl;
    cout<<"        MENU	         "<<endl;
	cout<<"1.  Lingkaran         "<<endl;
	cout<<"2.  Persegi           "<<endl;
	cout<<"3.  Segitiga          "<<endl;
	cout<<"4.  Keluar            "<<endl<<endl;
	cout<<"Masukkan pilihan anda (1,2,3,4,5) : ";cin>>pilihmenu;

	switch(pilihmenu){
        case 1:
            lingkaran();
            break;
        case 2 :
            persegi();
        case 3 : {
            cout<<"terima kasih"<<endl;
        }
	}
}

void lingkaran()
{
    int jar,m2;
	float pi , has;
    pi =3.14;
    cout<<"     Menu Lingkaran      "<<endl;
	cout<<"-------------------------"<<endl;
	cout<<"1. Hitung Luas           "<<endl;
	cout<<"2. Hitung Keliling       "<<endl;
	cout<<"3. Kembali ke Menu awal  "<<endl;

	cout<<"Masukkan pilihan anda ('1,2,3,4') : ";cin>>m2;

	switch(m2){
        case 1:
        {
            luas:
            cout<<" Menghitung Luas lingkaran"<<endl<<endl;
            cout<<"Masukkan Jari-jari :";cin>>jar;
            has = pi*jar*jar;
            cout<<"Luas Lingkaran ="<<has<<endl;
            cout<<"menghitung kembali ('y/t')";cin>>y;
            if(y == 'y')
            goto luas;
            else
            lingkaran();

        }case 2:{
            keliling:

            cout<<" Menghitung Keliling lingkaran"<<endl<<endl;
            cout<<"Masukkan Jari-jari :";cin>>jar;
            has = 2*pi*jar;
            cout<<"Keliling Lingkaran ="<<has<<endl;
            cout<<"menghitung kembali ('y/t')";cin>>y;
            if(y == 'y')
            goto keliling;
            else
            lingkaran();
        }case 3:{
            menu();
        }
	}
}


void persegi()
{

    persegi:
		int p,s,l,m3;
		float has;

      cout<<"        Menu Persegi     "<<endl;
      cout<<"-------------------------"<<endl<<endl;
	  cout<<"1. Luas Persegi             "<<endl;
	  cout<<"2. Luas Persegi panjang     "<<endl;
	  cout<<"3. Kembali ke menu utama    "<<endl;
	  cout<<"Pilihan anda ? ('1,2,3,4')";cin>>m3;

	   switch(m3)
	  {
	  	case 1:
	  	{
            luaspersegi:

                cout<<"        Luas Persegi     "<<endl;
                cout<<"-------------------------"<<endl<<endl;
                cout<<" Sisi Persegi :";cin>>s;
                has= s*s;
                cout<<" Luas = "<<has<<endl;
                cout<<" menghitung kembali ('y/t')";cin>>y;
                if(y == 'y')
                goto luaspersegi;
                else
                persegi();

	  	}
	  	case 2:{
          persegipanjang:
            cout<<"        Luas Persegi Panjang     "<<endl;
            cout<<"---------------------------------"<<endl<<endl;
            cout<<"Panjang :";cin>>p;
            cout<<"Luas    :";cin>>l;
            has = p*l;
            cout<<"Luas Persegi Panjang ="<<has<<endl;
            cout<<"menghitung kembali ('y/t')";cin>>y;

               if(y == 'y')
               goto persegipanjang;
               else
               persegi();
	  	} case 3:{
            menu();
	  	}
    }
}

void persegi(){
    float p,l,L,K;
    cout<<"menghitung luas dan keliling persegi panjang"<<endl;
    cout<<"masukkan nilai panjang:";
    cin>>p;
    cout<<"masukkan nilai lebar:";
    cin>>l;
    L=p*l;
    K=(2*p)+(2*l);
    cout<<"Keliling persegi panjang: "<<K<<"cm"<<endl;
    cout<<"Luas persegi panjang: "<<L<<"cm2"<<endl;
}
