#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }
}
void printVectorAuto(vector<int> v)
{
    for (auto it:v)
    {
        cout << it << endl;
    }
}

int main()
{
    // declaration of vector
    // vector<int> v; // Default with no data 0 size
    vector<int>v(5,-1); // size 5 and fill all the elements with -1
    vector<int>v2 = {1,2,3,4,5};
    vector<int>v2 = (v2);



    // insertion
    cout << "Pushing 1" << endl;
    v.push_back(1);
    cout << "Pushing 2" << endl;
    v.push_back(2);
    cout << "Pushing 3" << endl;
    v.push_back(3);
    cout << "Pushing 4" << endl;
    v.push_back(4);

    cout << "Printing after insertion" << endl;
    printVector(v);

    // deleting element
    v.pop_back();
    cout << "poped 4" << endl;
    v.pop_back();
    cout << "poped 3" << endl;
    v.pop_back();
    cout << "poped 2" << endl;

    cout<<"printing after poped"<<endl;

    //printing front element
    cout<<"Front is : "<<v[0];
    cout<<"Front is : "<<v.front();

    //printing end element
    cout<<"Front is : "<<v[v.size()-1];
    cout<<"Front is : "<<v.back();

    printVectorAuto(v);

    while(1){
        int d;
        cin>>d;
        v.push_back(d);
        cout<<"Capacity: "<<v.capacity()<<" Size: "<<v.size()<<endl;
    }

    // Taking input
    int n;
    cin>>n;
    for(int i =0;i<n;i++){
        int d;
        cin>>d;
        v.push_back(d);
    }
    printVector(v);

    // Empty the vector 
    v.clear();
    printVector(v);

    return 0;
}
