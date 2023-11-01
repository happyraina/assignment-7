#include <iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};

    int oddcount=0;
    int evencount=0;

    for(int i=0;i<5;i++){
        if(arr[i]%2==1){
            oddcount=oddcount+1;
            
        }
        else{
            evencount=evencount+1;
        }
    }
    cout<<"odd numbers = "<<oddcount<<endl;
    cout<<"even numbers = "<<evencount;

    return 0;
}