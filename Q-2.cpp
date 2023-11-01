#include <iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    
    int max=0;
    int min=arr[0];
    int sum;

    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    sum=max+min;
    cout<<sum;

    return 0;
}