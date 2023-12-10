#include<iostream>
using namespace std;
void sort(int arr[],int n){
    int temp;
    for ( int i =1 ;i<n;i++) {
        temp=arr[i];
        for (j=i-1;j>=0;j--){  
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }

        }
        arr[j+1]=temp;
    }
}
int main(){
    int arr[7]={10,1,7,4,8,2,0};
    sort(arr ,7);
    for (auto x:arr) cout<<x<<" ";
    return 0;
}