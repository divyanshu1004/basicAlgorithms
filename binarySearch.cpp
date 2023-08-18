#include<iostream>
using namespace std;
int Search(int arr[],int n,int key){
    int firstIndex=0;
    int end= n-1;
    int mid =(firstIndex+end)/2;
    while(firstIndex <=end){
         if (arr[mid]==key){
            return mid;
         }
         else if (arr[mid]>key){
            end=mid-1;
         }
         else if(arr[mid]<key){
            firstIndex=mid+1;
         }
         mid=(firstIndex+end)/2;
    }
    return -1;
}

int main()
{
    int n;
    cout<<"Enter the no. of elements you want in the array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<"The array is: "<<arr[i]<<" ";
    }


    int key;
    cout<<"Enter the element you want to search: "<<endl;
    cin>>key;
    int index= Search(arr,n,key);
    
    cout<<"Index of "<<key<<" is "<<index<<endl;
    
        
 return 0;
}





