#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for (int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[10] = {1,5,6,7,4};
    int size = 5;
    printArray(arr,size);
}