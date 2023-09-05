#include<iostream>
using namespace std;

int main()
{
    /*
        *****
        *****
        *****
    */
    
    int row;
    int col;
    cout<<"No of rows :";
    cin>>row;
    cout<<"No of Columns :";
    cin>>col;

    for(int i =0;i<row;i++){
        for(int j = 0; j<col; j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
