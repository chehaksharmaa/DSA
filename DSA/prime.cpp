#include <iostream>
using namespace std;
int main(){
    int n ;
    cout<<"enter n"<<endl;
    cin>>n;
    bool p=1;
    for(int i =2; i<=n; i++){
        if(n%i==0){
            p =0;
            break;
        }
    }
    if(p==0){
        cout<<"not prime";

    }
    else{
        cout<<"prime";
    }
   
   }

