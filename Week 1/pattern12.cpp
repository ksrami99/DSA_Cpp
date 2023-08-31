#include<iostream>
using namespace std;

int main()
{
    /*
        *       *  
         *     *
          *   *
           * *
            *  
    
    */
    
    int n;
    cin >> n;

    for(int row = 0 ; row < n ; row++){
        //space
        for(int col = 0 ; col < row ; col++){
            cout<<" ";
        }
        //stars
        for(int col = 0 ; col < (2*n) - (2*row) -1 ; col++){
            if(col == 0 || col == n - row){
                cout<<"* ";
            }else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    return 0;
}