#include<bits/stdc++.h>
using namespace std;
void selectionSort(int arr[],int n){
    int left=0,right=n-1;
    while(left<right){
        int minIndex=left,maxIndex=left;
        for(int i=left;i<=right;i++){
            if(arr[i]<arr[minIndex]) minIndex=i;
            if(arr[i]>arr[maxIndex]) maxIndex=i;
        }
        // placing the minimum on the left 
        swap(arr[left],arr[minIndex]);
        // if maxIndex and minIndex come to be same 
        if(maxIndex==left) maxIndex=minIndex;
        // placing the maximum on the right 
        swap(arr[right],arr[maxIndex]);
        // squeezing the range 
        left++;
        right--;
    }
}
int main(){
    int n=5;
    int arr[n]={5,4,3,2,1};
    selectionSort(arr,n);
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}