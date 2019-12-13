#include <iostream>
using namespace std;

main(){

    int n;

    cout<<"input element: ";cin>>n;

    int arr[n], i, j;

    cout<<"enter array: "<<endl;
    for(i = 0; i<n; i++){
        cin>>arr[i];
    }

    //start-bubble-short
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if( arr[j] < arr[j+1] ){

                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    cout<<endl;
    cout<<"after bubble short"<<endl;

    for(i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
