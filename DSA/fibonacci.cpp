#include<iostream>
using namespace std;
int main(){
    int n = 10;
    int a= 0; 
    int b= 1;
    cout << a<< endl;
    cout <<b <<endl;
    for(int i=1; i <=n ; i++){
        int next= a+b;
        cout<< next<<endl;
        a =b;
        b= next;

    }
}
