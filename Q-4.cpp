#include<iostream>
using namespace std;
int main()
{
    int a[5]={10,6,1,15,9};
    int b[5]={9,6,2,4,5};

    int min1=a[0];
    int min2=b[0];
    int i,j,sum;

    for(i=0;i<5;i++){
        if(a[i]<=min1){
            min1=a[i];
        }
    }
    for(j=0;j<5;j++){
        if(b[j]<=min2){
            min2=b[j];
        }
    }
    sum=min1+min2;
    cout<<sum;

    return 0;
}