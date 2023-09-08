#include<iostream>
using namespace std;

// reference variabloe -> same memory location with diffrent names 

void solve(int &a){
        // Getting actual location 
    a++;
    // now a will change by its location
    cout<<"a inside solve "<<a<<endl;
}

int main(){
    int a = 5;
    solve(a); 
    cout<<"a inside main "<<a<<endl;
}