//laundry
#include<iostream>
#include<cstdlib>
#include<string>

using namespace std;

int main()
{
    int kg, laund, price;
    long total, temptotal;
    string type;


    //cout<<"###################"<<endl;
    cout<<"  Program Laundry  "<<endl<<endl;
    cout<<" 1. Cuci kering   5.000/kg"<<endl;
    cout<<" 2. Cuci basah    3.000/kg"<<endl;
    cout<<" 3. Cuci setrika  15.000/kg"<<endl;
    cout<<" 4. Setrika saja  10.000/kg"<<endl<<endl;

    menu:
        cout<<" Laundry (1,2,3,4): ";
        cin>>laund;

        cout<<" Masukkan kilo laundry : ";
        cin>>kg;

        if(laund == 1){
             price = 5000;
             type = 'cuci kering';
        }else if(laund == 2){
             price = 3000;
             type = 'cuci basah';
        }else if(laund == 3){
             price = 15000;
             type = 'cuci sterika';
        }else if(laund == 4){
             price = 10000;
             type = 'sterika saja';
        }


        if(kg <= 5){
            total = price * kg;
            cout<< " Anda me-laundry"<<type<<" seharga "<<total<<endl<<endl;
        }else{
            temptotal = price * kg;
            total = temptotal - 2000;

            cout<< " Anda me-laundry"<<type<<" seharga "<<temptotal<<" dan dikurangi diskon 2.000"<<endl;
            cout<< "jadi anda membayar "<<total;
        }

}
