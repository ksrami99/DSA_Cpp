#include<iostream>
using namespace std;

int main()
{
    /*
            *
           * *
          *   *
         *     *
        *       *  
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
            // print * in first and last column
            if(col == 0 || col == row + 1 - 1){
                cout<<"* ";
            }
            // printing space in between *s
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    
    return 0;
}