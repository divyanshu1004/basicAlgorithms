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
    int even[8]={2,4,6,8,10,12,14,16};
    int arr[5]={1,3,5,7,9};
    int evenindex= Search(even,8,4);
    int oddindex= Search(arr,5,9);
    cout<<"Index of 4 is "<<evenindex<<endl;
    cout<<"Idex of 9 is "<<oddindex<<endl;

 return 0;
}



