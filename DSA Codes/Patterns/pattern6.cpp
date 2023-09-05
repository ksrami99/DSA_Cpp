#include<iostream>
using namespace std;

int main()
{
    /*
        1
        1 2
        1 2 3
        1 2 3 4
        1 2 3 4 5
    */
    
    int row;
    cin >> row;

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < i + 1 ; j++){
            cout<<j + 1<<" ";
        }
        cout<<endl;
    }
    return 0;
}