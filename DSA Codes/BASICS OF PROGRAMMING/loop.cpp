#include<iostream>
using namespace std;

// Loops
//      For loop
//      while loop
//      Do-While loop
//      for-each loop

int main()
{
    // // Fore Loop
    //      Not Mendetory       Not Mendetory   Not Mendetoryzx
    // for( int i = 0 ;         i < 10 ;        i++ )
    // //   initialization      Condition       Updation
    // {
    //     cout<<"Karan"<<endl; 
    // }

    // Counting
    // for (int i = 1; i <= 10; i++)
    // {
    //     cout<<i<<endl;
    // }

    // Reverse Counting
    // for (int i = 10; i >=1; i--)
    // {
    //     cout<<i<<endl;
    // }

    // Nested Loop
    for(int i =0;i<5;i++){
        cout<<"Outer Loop "<< i << endl;

        // for each outer loop Inner loop will run saperatly 
        // In this case inner loop will run 3 timed for each outer loop
        for(int j = 0;j<3;j++){
            cout<< "Inner Loop "<<j<<endl;
        }
    }
    
    
    return 0;
}


