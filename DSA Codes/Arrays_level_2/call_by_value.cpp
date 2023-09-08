#include<iostream>
using namespace std;

void solve(int a){
    //    copy of a from main
    a++;
    cout<<a<<endl;
    // a is changing in function only
}

int main(){
    int a =5;
    // pass by value 
    solve(a);
    // a will not change couse 
    // the a in functoin is Diffrent 
    cout<<a<<endl;
}