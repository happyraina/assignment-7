#include <iostream>
using namespace std;
int main()
{
    int arr[7]={3,2,5,9,10,1,7};
    int size=sizeof(arr)/sizeof(arr[0]);

    int reverse;

    for(int i=size-1;i>=0;i--){
        reverse=arr[i];
        cout<<reverse<<" ";
    }

    return 0;
}