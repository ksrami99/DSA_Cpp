#include<iostream>
using namespace std;

int main()
{
    /*
        ****
        ****
        ****
        ****
    */
    // How to Approch pattern  
    // 1. find no of row  -> 4
    // 2. write down for each row
    //          row 1 = 4 star
    //          row 2 = 4 star
    //          row 3 = 4 star
    //          row 4 = 4 star

    int num;
    cin>>num;

    for(int i =0;i<num;i++){
        for(int j = 0; j<num; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
