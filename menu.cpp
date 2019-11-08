#include<iostream>

using namespace std;

int main()
{
    int i;

    menu:
        cout<<"######################"<<endl;
        cout<<"#     Pilih menu     #"<<endl;
        cout<<"######################"<<endl;
        cout<<"1. Uwuu~"<<endl;
        cout<<"2. Awewee~"<<endl;
        cout<<"3. Ayeee-yee~"<<endl;
        cin>>i;

    switch(i)
    {
        case 1:
            cout<<"this menu uwuuuuuuu";
            break;

        case 2:
            cout<<"this menu Awee";
            break;

        case 3:
            cout<<"this menu Ayee";
            break;

        default:
         goto menu;
         break;
    }


}
