#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while(i<n){
        int j = 1;
        while(j<n){
            cout<<n-j+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }

    int row=1;
    while(row<=n){
        int col =1;
        while(col<=row){
            cout<<"*";
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    
    while(row<=n){
        int col =1;
        while(col<=row){
            cout<<row;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
}