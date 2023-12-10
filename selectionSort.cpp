#include<iostream>
using namespace std;
void sort(int arr[],int n){
     for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
            swap(arr[min],arr[i]);
        }
     }
}
int main(){
    int arr[6]={12,23,4,3,43,11};
    sort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}