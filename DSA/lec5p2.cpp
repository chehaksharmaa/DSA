#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"enter n"<<endl;
    cin>> n;
    cout<<"printing count from 1 to n"<<endl;
    for(int i =1 ; i<=n ; i ++){
        cout<< i <<endl;}
        int sum =0;
        for(int i =1; i<=n ; i++){
        sum +=i;
    }
    cout<<sum <<endl;
}