#include <iostream>
#include <iomanip>

using namespace std;

struct mhs{
    double kode[2],uts[2],uas[2],quiz[2];
	long akhir[2];
    int nbi;
    string nama[2],namahs;
}mah[50];

int main()
{
    int a,b,c;
    cout<<"Masukkn banyak Mahasiswa : ";cin>>c;
    
    for(a=0;a<c;a++){
        cout<<"NBI MAHASISWA (nomor)"<<a+1<<" : ";
        cin>>mah[a].nbi;
        cout<<"NAMA MAHASISWA "<<a+1<<" : ";
        cin>>mah[a].namahs;
        cout<<"######################################"<<endl<<endl;
        
        for(b=0;b<=1;b++){
	        cout<<"NAMA Matkul ke "<<b+1<<" : ";
	        cin>>mah[a].nama[b];
	        cout<<"Kode Matkul ke "<<b+1<<" : ";
	        cin>>mah[a].kode[b];
	        
	        cout<<"--------------"<<endl;
	        cout<<"Masukkan nilai uts MAHASISWA ke "<<b+1<<" : ";
	        cin>>mah[a].uts[b];
	        cout<<"Masukkan nilai uas MAHASISWA ke "<<b+1<<" : ";
	        cin>>mah[a].uas[b];
	        cout<<"Masukkan nilai quiz MAHASISWA ke "<<b+1<<" : ";
	        cin>>mah[a].quiz[b];
	        
	        mah[a].akhir[b] = 0.2*mah[a].uts[b]+0.5*mah[a].uas[b]+0.2*mah[a].quiz[b];
	        cout<<endl;
   		}
   		
   		cout<<endl<<endl;
	}
	
	
	cout<<setw(5)<<"No"<<setw(15)<<" NBI"<<setw(15)<<"Nama";
	cout<<setw(10)<<" KODE"<<setw(10)<<" MATKUL"<<setw(10)<<"UTS"<<setw(10)<<" UAS"<<setw(10)<<" QUIS"<<setw(10)<<"akhir"<<endl;
    
	for(a=0;a<c;a++){
		
		cout<<setw(5)<<a+1<<setw(15)<<mah[a].nbi<<setw(15)<<mah[a].namahs;
		
        
		for(b=0;b<=1;b++){
        	
        	if(b != 0){
        		cout<<setw(35)<<" ";
			}
			
        	cout<<setw(10)<<mah[a].kode[b];
        	cout<<setw(10)<<mah[a].nama[b];

			cout<<setw(10)<<mah[a].uts[b];
			cout<<setw(10)<<mah[a].uas[b];
			cout<<setw(10)<<mah[a].quiz[b];
			
			cout<<setw(10)<<mah[a].akhir[b];
			cout<<endl;
        }
        
        cout<<endl;
    }
}
