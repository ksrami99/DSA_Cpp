#include<iostream>
using namespace std;

void solve(int arr[] , int size){
    arr[0] = 100;
}

int main(){
    int arr[] = {1,2,4};
    int size = 3;
    solve(arr,size);
    // In array we share the location by default

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}