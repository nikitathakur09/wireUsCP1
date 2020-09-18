#include <iostream>

using namespace std;
int main() {
    int arr[4][4]={{11,12,13,14},
                 {21,22,23,24},
                 {31,32,33,34},
                 {41,42,43,44}};

    for(int i=0;i<4;i++){
    if(i%2==0)
    {
     for(int j=0;j<4;j++)
     cout<<arr[j][i]<<",";
     }
    else
    {
     for(int j=3;j>=0;j--)
    cout<<arr[j][i]<<",";
    }

    }
    cout<<"END";
}
