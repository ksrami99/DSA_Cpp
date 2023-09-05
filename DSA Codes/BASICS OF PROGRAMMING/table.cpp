#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int num;
    cout<<"Enter a number that you want to print table: ";
    cin>>num;

    for(int i =1;i<=10;i++){
        cout<<num <<"x"<<i<<" = "<<num*i<<endl;
    }
    return 0;
}

