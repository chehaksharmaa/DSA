#include<iostream>
using namespace std;
bool ispresent(int arr[][3],int target, int i, int j){
     for(int i=0;i<3;i++){
        for(int j=0; j<4; j++){
            if(arr[i][j]== target){
                return 1;
            }
        }
     }
     return 0;    
}
void printsum(int arr[][3], int i, int j){
    cout<< " printing sum "<< endl;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0; j<4; j++){
            sum +=arr[i][j];
        }
        cout<<sum<<" ";
    }
    cout<<endl;
}
int largestrowsum(int arr[][3], int i, int j){
    int maxi = INT16_MIN;
    int num =-1;
     for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0; j<4; j++){
            sum +=arr[i][j];
        }
        if(sum > maxi){
            maxi=sum;
            num = i;

        }
        }
        cout<<"the max sum is "<< maxi<<endl;
        return i;
}
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0; j<4; j++){
        cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }   
    cout<<"enter the element to search"<<endl;
    int target;
    cin>>target; 

    if(ispresent(arr , target , 3,3)){
        cout<< " element found" <<endl;
    }
    largestrowsum(arr,3,3);
    return 0;
}