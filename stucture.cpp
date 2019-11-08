#include<iostream>
#include<string>
#include<sstream>

using namespace std;

struct movies_t{
    string title;
    int year;
} mine, yours;

void printmovie(movies_t movie);

int main()
{
    string mystr;

    mine.title = "2001 a Space Odyssey";
    mine.year = 1968;

    cout<<"Enter title :";
    getline(cin,yours.title);
    cout<<"Enter the year: ";
    getline(cin,mystr);

    stringstream(mystr)>>yours.year;

    cout<<endl<<endl;
    cout<<"var mine is :"<<endl;
    printmovie(mine);

    cout<<endl<<endl;
    cout<<"and yours is : "<<endl;
    printmovie(yours);

    return 0;
}

void printmovie(movies_t movie){
    cout<<movie.title;cout<<" ("<<movie.year<<" )"<<endl;
}
