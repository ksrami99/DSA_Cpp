#include<iostream>
using namespace std;

bool linearSearch(int arr[],int size,int target){
    for(int i = 0;i<size;i++){
        if(target==arr[i]){
            cout<<"Element Found at Index "<<i<<endl;
            return true;
            break;
        }
    }
    return false;
}

int main(){
    int arr[5] = {2,6,8,5,4};
    int target = 5;
    // bool flag = 0;
    // for(int i = 0;i<5;i++){
    //     if(target==arr[i]){
    //         cout<<"Element Found at Index "<<i<<endl;
    //         flag = 1;
    //         break;
    //     }
    // }

    bool flag = linearSearch(arr,5,target);

    if(flag == 1){
        cout<<"Taregt Found!";
    }else{
        cout<<"Target not Found!";
    }
}