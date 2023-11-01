#include <iostream>
using namespace std;

int val(int arr[],int n){
    int missing;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    int range_sum=(n)*(n+1)/2;
    missing=range_sum-sum;
    cout<<missing;
    return missing;
}    

int main()
{
    int arr[]={1,2,4,7,3,5,6,9,0};
    int max=0;
    for(int i=0;i<9;i++){
        if(arr[i]>max){
            max=arr[i];
        }

    }
    int n=max;

    val(arr,n);

    return 0;
}