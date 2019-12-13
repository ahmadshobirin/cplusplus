#include <iostream>
#include <windows>

/*
    TEKNIK INFORMATIKA (R)
    CAHYO DWI PUTRO
    1461900333          */

using namespace std;

struct mhs{
    float uts[2],uas[2],quiz[2],akhir[2];
    long int nbi;
    string nama[2],kode[2],namahs;
} mhs[50];

void gotoxy(int x, int y) {
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{
    int a,b,c;
    cout<<"[?] Masukan banyak Mahasiswa : ";cin>>c;

    for(a=0;a<c;a++){
        cout<<"=====================================\n";
        cout<<"=> NBI Mahasiswa ke-"<<a+1<<"\t\t: ";
        cin>>mhs[a].nbi;
        cout<<"=> Nama Mahasiswa ke-"<<a+1<<"\t\t: ";
        cin>>mhs[a].namahs;

        for(b=0;b<=1;b++) {
            cout<<"=> Kode Mata Kuliah ke-"<<b+1<<"\t: ";
            cin>>mhs[a].kode[b];
            cout<<"=> Nama Mata Kuliah ke-"<<b+1<<"\t: ";
            cin>>mhs[a].nama[b];
            cout<<"=> Nilai UTS ke-"<<b+1<<"\t\t: ";
            cin>>mhs[a].uts[b];
            cout<<"=> Nilai UAS ke-"<<b+1<<"\t\t: ";
            cin>>mhs[a].uas[b];
            cout<<"=> Nilai Quiz ke-"<<b+1<<"\t\t: ";
            cin>>mhs[a].quiz[b];
            mhs[a].akhir[b]=0.2*mhs[a].uts[b]+0.5*mhs[a].uas[b]+0.2*mhs[a].quiz[b];
            cout<<endl;
        }
    }

        system("cls");
        gotoxy (2,2);  cout<<"----------------------------------------------------------------------------------------------------------------------------";
        gotoxy (2,3);  cout<<"|";
        gotoxy (17,3); cout<<"|";
        gotoxy (35,3); cout<<"|";
        gotoxy (75,3); cout<<"Mata Kuliah";
        gotoxy (125,3); cout<<"|";
        gotoxy (2,4);  cout<<"|";
        gotoxy (17,4); cout<<"|";
        gotoxy (35,4); cout<<"|-----------------------------------------------------------------------------------------|";
        gotoxy (2,5);  cout<<"|";
        gotoxy (9,5);  cout<<"NBI";
        gotoxy (17,5); cout<<"|";
        gotoxy (20,5); cout<<"Nama Mahasiswa";
        gotoxy (35,5); cout<<"|";
        gotoxy (44,5); cout<<"|";
        gotoxy (53,5); cout<<"|";
        gotoxy (65,5); cout<<"Nilai";
        gotoxy (80,5); cout<<"|";
        gotoxy (89,5); cout<<"|";
        gotoxy (98,5); cout<<"|";
        gotoxy (2,6);  cout<<"|";
        gotoxy (17,6); cout<<"|";
        gotoxy (35,6); cout<<"|  Kode  ";
        gotoxy (44,6); cout<<"|  Nama  ";
        gotoxy (53,6); cout<<"|--------------------------|";
        gotoxy (2,7);  cout<<"|";
        gotoxy (17,7); cout<<"|";
        gotoxy (35,7); cout<<"|";
        gotoxy (44,7); cout<<"|";
        gotoxy (53,7); cout<<"|";
        gotoxy (55,7); cout<<"UTS";
        gotoxy (59,7); cout<<"|";
        gotoxy (61,7); cout<<"UAS";
        gotoxy (65,7); cout<<"|";
        gotoxy (67,7); cout<<"Quiz";
        gotoxy (72,7); cout<<"|";
        gotoxy (74,7); cout<<"Akhir";
        gotoxy (80,7); cout<<"|";
        gotoxy (89,7); cout<<"|";
        gotoxy (98,7); cout<<"|";
        gotoxy (83,6); cout<<"Kode  ";
        gotoxy (89,6); cout<<"|  Nama  ";
        gotoxy (98,6); cout<<"|--------------------------|";
        gotoxy (107,5); cout<<"Nilai";
        gotoxy (125,5); cout<<"|";
        gotoxy (100,7); cout<<"UTS";
        gotoxy (104,7); cout<<"|";
        gotoxy (106,7); cout<<"UAS";
        gotoxy (110,7); cout<<"|";
        gotoxy (112,7); cout<<"Quiz";
        gotoxy (117,7); cout<<"|";
        gotoxy (119,7); cout<<"Akhir |";
        gotoxy (2,8);   cout<<"----------------------------------------------------------------------------------------------------------------------------";

        for(a=0;a<c;a++) {
            gotoxy (2,9+a);  cout<<"|";
			gotoxy (4,9+a);  cout<<mhs[a].nbi;
			gotoxy (17,9+a); cout<<"|";
			gotoxy (19,9+a); cout<<mhs[a].namahs;
			gotoxy (35,9+a); cout<<"|";

        for(b=0;b<1;b++) {
            gotoxy (38,9+a); cout<<mhs[a].kode[b];
			gotoxy (44,9+a); cout<<"|";
			gotoxy (46,9+a); cout<<mhs[a].nama[b];
			gotoxy (53,9+a); cout<<"|";
			gotoxy (55,9+a); cout<<mhs[a].uts[b];
			gotoxy (59,9+a); cout<<"|";
			gotoxy (61,9+a); cout<<mhs[a].uas[b];
			gotoxy (65,9+a); cout<<"|";
			gotoxy (68,9+a); cout<<mhs[a].quiz[b];
			gotoxy (71,9+a); cout<<"|";
			gotoxy (74,9+a); cout<<mhs[a].akhir[b];
			gotoxy (80,9+a); cout<<"|";
            gotoxy (83,9+a); cout<<mhs[a].kode[b];
            gotoxy (89,9+a); cout<<"|";
            gotoxy (91,9+a); cout<<mhs[a].nama[b];
            gotoxy (98,9+a); cout<<"|";
            gotoxy (100,9+a); cout<<mhs[a].uts[b];
            gotoxy (104,9+a); cout<<"|";
            gotoxy (106,9+a); cout<<mhs[a].uas[b];
            gotoxy (110,9+a); cout<<"|";
            gotoxy (112,9+a); cout<<mhs[a].quiz[b];
            gotoxy (117,9+a); cout<<"|";
            gotoxy (119,9+a); cout<<mhs[a].akhir[b];
            gotoxy (125,9+a); cout<<"|";
        }
    }
        gotoxy (2,9+c); cout<<"----------------------------------------------------------------------------------------------------------------------------\n\n";
}
