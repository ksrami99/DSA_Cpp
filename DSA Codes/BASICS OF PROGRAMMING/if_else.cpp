#include<iostream>
using namespace std;

int main()
{
    // int balance;
    // cout<<"How much balance You have ?"<<endl;
    // cin>>balance;
    // if(balance>=10){
    //     cout<<"You can buy maggie"<<endl;
    // }


    // int sides;
    // cout<<"How much sides does it have ?"<<endl;
    // cin>>sides;
    // if (sides == 3)
    // {
    //     cout<<"It's Triangle"<<endl;
    // }else{
    //     cout<<"It's not triangle"<<endl;
    // }

    int sides;
    cout<<"How much sides does it have ?"<<endl;
    cin>>sides;
    if (sides == 3)
    {
        cout<<"It's Triangle"<<endl;
    }else if(sides == 4){
        cout<<"It's not Square"<<endl;
    }else if(sides == 6){
        cout<< "It's Hexagon"<<endl;
    }else{
        cout<<"To fir muje nai pata "<<endl;
    }
    
    return 0;
}
