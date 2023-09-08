#include<iostream>
using namespace std;

int getUnique(int arr[],int size){
    int ans = 0;
    for(int i=0;i<size;i++){
        ans =ans^arr[i];
    }
    return ans;
}

int main(){
    int arr[] = {1,2,3,4,5,4,1,2,3};
    int size = 9;
    int ans = getUnique(arr,size);
    cout<<ans<<endl;
}