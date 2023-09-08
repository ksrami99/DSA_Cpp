#include <iostream>
using namespace std;

int main(){

    // Array Creation
    // int arr[20];
    // char chArr[50];
    // bool bArray[10];
    // long lArray[56];
    // short sArray[2];

    // int a = 5;
    // cout<<"Address of a: "<<&a<<endl;
    // cout<<"Address of arr: "<<&arr<<endl;
    // cout<<"Address of arr: "<<arr<<endl;

    // cout<<"Size of a is: "<<sizeof(a)<<endl;
    // cout<<"Size of arr is: "<<sizeof(arr)<<endl; // 20 x 4

    // // Array Initialization

    // int arr1[] = {1,23,3,7,5};
    // int arr2[5] = {1,23,3,7,5};
    // int arr3[5] = {1,23}; // Rest is initializzed with 0
    // int arr3[5] = {1,2,3,4,5,6}; // will Throw arror


    // Accesing the Element

    // int arr4[5] = {1,5,8,9,6};
    // cout<<arr4[0]<<endl;
    // cout<<arr4[1]<<endl;
    // cout<<arr4[2]<<endl;
    // cout<<arr4[3]<<endl;
    // cout<<arr4[4]<<endl;

    // int arr[10] = {45,46,65,56,46,8,6,4,8,3};

    // for (int i=0;i<sizeof(arr)/sizeof(int);i++){
    //     cout<<arr[i]<<endl;
    // }

    // UInitializing the Array

    int arr[5];
    for (int i =0;i<5;i++){
        cout<<"Enter the value at index "<<i<<": ";
        cin>>arr[i];
    }
    for (int i=0;i<5;i++){
        cout<<"The Element at index "<<i<< "is: "<<arr[i]<<endl;
    }

    cout<<"Array Craeted Successfuly";

    return 0;
}