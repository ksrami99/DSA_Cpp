#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    for (int i =0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}

int main()
{
    // static array
    // int arr[5] = {1,2,3,4,5};

    // dynamic array
    int n;
    cin>>n;
    int *arr = new int[n];
    for (int i =0;i<n;i++){
        cin>>arr[i];
    }

    printArray(arr,5);
    return 0;
}
