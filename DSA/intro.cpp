#include<iostream>
using namespace std;

void reverse(char name[], int n){
    
}

int getLength(char name[]){
    int count =0;
    for(int i=0; name[i] !=0; i++){
    count++;

    }
    return count;
}
int main(){
    char name[20];
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"your name is";
    cout<< name<<endl;
    int len = getLength(name);
    cout<<"length"<<len<<endl;
    reverse(name,len);
    cout<< name<<endl;

    return 0;
}