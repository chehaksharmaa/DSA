#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"value of n "<< n<<endl;
    int a,b;
    cin>>a>>b;
    if(a>b){
        cout<<"a is greater";
    }
    if(b>a){
        cout<<"b is greater";
    }
    else{
        cout<<"a equals to b";
    }
    
    int c;
    cin>>c; 
    int i=2;
    int sum =0;
    while(i<=c){
         sum = sum + i;
        i = i+2;
    }
    cout<<sum<<endl;
    int p;
    cin>>p;
    int i =1;
    while(i<=p){
        int j =1;
        while(j<=p){
            cout<<" * ";
            j=j+1;
        }
        cout<<endl;

        i=i+1;
    } 
    
    int n;
    cin>>n;
    int i =1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout<<i;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
    
}