#include<iostream>
using namespace std;

int main()
{
    /*
        * * * * *
        *       *
        *       *
        * * * * *
    */
    
    int row;
    int col;
    cout<<"No of rows :";
    cin>>row;
    cout<<"No of Columns :";
    cin>>col;

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            // If zeeroth or last row then print star
            if(i==0 || i == row-1){
                cout<<"* ";
            }else{
                if(j == 0 || j == col-1){
                    cout<<"* ";
                }else{
                    cout<<"  ";
                }
            }
        }
        cout<<endl;
    }


    return 0;
}
