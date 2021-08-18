#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int arr[10][5];
    cout<<"Enter Marks of 10 students in 5 subjects: "<<endl;
    for(int i=0;i<10;i++){
        for(int j=0;j<5;j++){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    cout<<"Marks stored: "<<endl;
    for(int i=0;i<10;i++){
        for(int j=0;j<5;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
