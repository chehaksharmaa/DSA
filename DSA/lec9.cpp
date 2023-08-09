#include<iostream>
using namespace std;
int main(){
    int num[15];

    cout<<endl<<"everything is fine"<<endl<<endl;
    int second[3] ={5,7,11};
    cout<<"value at 2 index"<< second[2]<<endl;
    int third[15]={2,7};
    int n=15;
    for ( int i = 0; i < n; i++)
    {
        cout<<third[i]<< " "<<endl;
    }
    
    return 0;
}