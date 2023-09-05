#include<iostream>
using namespace std;

int main()
{
    /*
            *
           * *
          * * *
         * * * *
        * * * * *  
    
    1. row = n = 5
    2. 
        r0 = 4s , 1*
        r1 = 3s , 2*
        r2 = 2s , 3*
        r3 = 1s , 4*
        r4 = 0s , 5*

        n = 5
        r = 0
        -> n - r - 1
    */
    
    int n;
    cin >> n;

    for(int row = 0 ; row < n ; row++){
        //space
        for(int col = 0 ; col < n - row - 1 ; col++){
            cout<<" ";
        }
        //stars
        for(int col = 0 ; col < row + 1 ; col++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}