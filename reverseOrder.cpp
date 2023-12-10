#include<iostream>
using namespace std;
reverse(int arr[],int n){
    for ( int i = 0 ;i<=(n-1)/2;i++) {
        swap(arr[i],arr[(n-1)-i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[6]={1,2,3,4,5,6};
    reverse(arr,6);
 return 0;
}