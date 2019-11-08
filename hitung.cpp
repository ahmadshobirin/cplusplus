#include<iostream>
#include<conio.h>
#include<math.h>
#include<cstdlib>
using namespace std;

void main()
{
	char y;
	int m1,m2,m3,m4,m5;
		
	menu:
	if(system ("CLS")) system("clean");
	cout<<"       MENU	          "<<endl;
	cout<<"1.  Lingkaran          "<<endl;
	cout<<"2.  Persegi panjang    "<<endl;
	cout<<"3.  Balok              "<<endl;
	cout<<"4.  Segitiga           "<<endl;
	cout<<"5.  Keluar           "<<endl<<endl;
	cout<<"Masukkan pilihan anda (1,2,3,4,5) : ";cin>>m1;
	
	if(m1 == 1)
	{
		lingkaran:
		if(system ("CLS")) system("clean");
			int jar;
			float pi , has;
			pi =3.14;
		cout<<"     Menu Lingkaran      "<<endl;
		cout<<"-------------------------"<<endl;		
		cout<<"1. Hitung Luas           "<<endl;
		cout<<"2. Hitung Keliling       "<<endl;
		cout<<"3. Kembali ke Menu awal  "<<endl;
		cout<<"4.      Keluar          "<<endl;
		
	cout<<"Masukkan pilihan anda ('1,2,3,4') : ";cin>>m2;
			if(system ("CLS")) system("clean");
		switch(m2){
		  case 1:
	  		{
	  			luas:
	  			if(system ("CLS")) system("clean");
	  			
	  			cout<<" Menghitung Luas lingkaran"<<endl<<endl;
		  		cout<<"Masukkan Jari-jari :";cin>>jar;
		  		has = pi*jar*jar;
		  		cout<<"Luas Lingkaran ="<<has<<endl;
		  		cout<<"menghitung kembali ('y/t')";cin>>y;
		  		if(y == 'y')
		  		goto luas;
		  		else
		  		goto lingkaran;
		  		
		  	}
  	     case 2:
  	        {
  	        	keliling:
  	        	if(system ("CLS")) system("clean");
  	        	
  	        	cout<<" Menghitung Keliling lingkaran"<<endl<<endl;
  	        	cout<<"Masukkan Jari-jari :";cin>>jar;
		  		has = 2*pi*jar;
		  		cout<<"Keliling Lingkaran ="<<has<<endl;
		  		cout<<"menghitung kembali ('y/t')";cin>>y;
		  		if(y == 'y')
		  		goto keliling;
		  		else
		  		goto lingkaran;
  	        }
        case 3:
        	{
        		goto menu;
			}
		case 4:
			{
				exit;
				cout<<"_____ Thanks For Watching ______"<<endl;
				
			}
		}
	}
	if(m1 == 2)
	{
		persegi:
		if(system ("CLS")) system("clean");
		int p,s,l;
		float has;
		
      cout<<"        Menu Persegi     "<<endl;
      cout<<"-------------------------"<<endl<<endl;
	  cout<<"1. Luas Persegi             "<<endl;
	  cout<<"2. Luas Persegi panjang     "<<endl;
	  cout<<"3. Kembali ke menu utama    "<<endl;
	  cout<<"4.      Keluar              "<<endl<<endl;
	  cout<<"Pilihan anda ? ('1,2,3,4')";cin>>m3;
	  
	  switch(m3)
	  {
	  	case 1:
	  	{
	  	luaspersegi:
	  	if(system ("CLS")) system("clean");
	  	
	  	cout<<"        Luas Persegi     "<<endl;
	  	cout<<"-------------------------"<<endl<<endl;
	  	cout<<" Sisi Persegi :";cin>>s;
	  	has= s*s;
	  	cout<<" Luas = "<<s<<endl;
	  	cout<<"menghitung kembali ('y/t')";cin>>y;
	  	if(y == 'y')
  		goto luaspersegi;
		else
		goto persegi;
	  	}
	  	case 2:
		  {
	  	persegipanjang:
	  	if(system ("CLS")) system("clean");
	  	
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
		   goto persegi;
		  }
	    case 3:
        	{
        		goto menu;
			}
		case 4:
			{
				exit;
				cout<<"_____ Thanks For Watching ______"<<endl;
				
			}
	  }
	}
	if(m1 == 3)
	{
		balok:
		if(system ("CLS")) system("clean");
		int p,l,t;
		float lu,v;
		
		cout<<"        Menu Balok       "<<endl;
	  	cout<<"-------------------------"<<endl<<endl;
		cout<<"1. Luas Permukaan Balok  "<<endl;
		cout<<"2. Volume Balok          "<<endl;
		cout<<"3. Kembali ke Menu       "<<endl;
		cout<<"4.      Keluar           "<<endl;
		cout<<"Pilihan anda ? ('1,2,3,4')";cin>>m4;
		
		switch(m4)
		{
			case 1:
			{
			  luaspb:
			  if(system ("CLS")) system("clean");
			  cout<<"        Luas Permukaan Balok       "<<endl;
	  	      cout<<"-----------------------------------"<<endl<<endl;
	  	      cout<<"Panjang balok :";cin>>p;
	  	      cout<<"lebar   balok :";cin>>l;
	  	      cout<<"Tinggi  balok :";cin>>t;
	  	      lu=2*(p*l+p*t+l*t);
	  	      cout<<"Luas Permukaan ="<<lu<<endl;
	  	      cout<<"menghitung kembali ('y/t') :";cin>>y;
	  	      if(y == 'y')
  		      goto luaspb;
		      else
		      goto balok;
	  	      
	  	      
			}
			case 2:
			{
				volumeb:
				if(system ("CLS")) system("clean");
			  cout<<"        Volume Balok       "<<endl;
	  	      cout<<"-----------------------------------"<<endl<<endl;
	  	      cout<<"Panjang balok :";cin>>p;
	  	      cout<<"lebar   balok :";cin>>l;
	  	      cout<<"Tinggi  balok :";cin>>t;
	  	      v=p*l*t;
	  	      cout<<"Volume Balok  ="<<v<<endl;
	  	      cout<<"menghitung kembali ('y/t') :";cin>>y;
	  	      if(y == 'y')
  		      goto volumeb;
		      else
		      goto balok;
			}
			 case 3:
        	{
        		goto menu;
			}
		     case 4:
			{
				exit;
				cout<<"_____ Thanks For Watching ______"<<endl;
				
			}
		}
	}
	if(m1 == 4)
	{
	  segitiga:
	  if(system ("CLS")) system("clean");
	  int als,tng,s1,s2,s3;
	  float luas,kel;
      cout<<"        Menu Segitiga     "<<endl;
      cout<<"--------------------------"<<endl<<endl;
	  cout<<"1. Luas Segitiga             "<<endl;
	  cout<<"2. Keliling Segitiga         "<<endl;
	  cout<<"3. Kembali ke Menu       "<<endl;
	  cout<<"4.      Keluar           "<<endl;
	  cout<<"Pilihan anda ? ('1,2,3,4')";cin>>m5;
	  switch(m5)
	  {
	  	case 1:
	  	{
		  luseg:
			if(system ("CLS")) system("clean");
			  cout<<"        Luas Segitiga       "<<endl;
	  	      cout<<"----------------------------"<<endl;
	  	      cout<<"Alas   :";cin>>als;
	  	      cout<<"Tinggi :";cin>>tng;
	  	      luas=als*tng/2;
	  	      cout<<"Luas Segitiga ="<<luas<<endl;
	  	      cout<<"menghitung kembali ('y/t') :";cin>>y;
	  	      if(y == 'y')
  		      goto luseg;
		      else
		      goto segitiga;  
	    }
	    case 2:
			{
			  kelilingseg:
			  if(system ("CLS")) system("clean");
			  cout<<"        Keliling Segitiga          "<<endl;
	  	      cout<<"-----------------------------------"<<endl<<endl;
	  	      cout<<"Sisi A :";cin>>s1;
	  	      cout<<"Sisi B :";cin>>s2;
	  	      cout<<"Sisi C :";cin>>s3;
	  	      kel=s1+s2+s3;
	  	      cout<<"Keliling  ="<<kel<<endl;
	  	      cout<<"menghitung kembali ('y/t') :";cin>>y;
	  	      if(y == 'y')
  		      goto kelilingseg;
		      else
		      goto segitiga;
	      }
	      case 3:
        	{
        		goto menu;
			}
		     case 4:
			{
				exit;
				cout<<"_____ Thanks For Watching ______"<<endl;
				
			}
	  }
  }
  if(m1 == 5)
  {
  	if(system ("CLS")) system("clean");
  	cout<<"------------------------------------"<<endl;
  	cout<<"|          Ahmad Shobirin          |"<<endl;
  	cout<<"------------------------------------"<<endl;
  }
}
