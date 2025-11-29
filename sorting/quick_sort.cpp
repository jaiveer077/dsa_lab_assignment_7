#include<bits/stdc++.h>
using namespace std;
int partition(int arr[],int low,int high){
    int pivot=arr[low]; // we are choosing the low as pivot 
    int i=low;
    int j=high;
    while(i<j){
        while(arr[i]<=pivot&&i<=high-1){
            i++;
        }
        while(arr[j]>pivot&&j>=low-1){
            j--;
        }
        if(i<j) swap(arr[i],arr[j]);
    }
    swap(arr[low],arr[j]);
    return j;
}
void quickSort(int arr[],int low,int high){
    // checking if the range is < 1
    if(low<high){
        int pIndex=partition(arr,low,high);
        // left subarray 
        quickSort(arr,low,pIndex-1);
        // right subarray 
        quickSort(arr,pIndex+1,high);
    }
}
int main(){
    int n=5;
    int arr[n]={5,4,3,2,1};
    int low=0;
    int high=n;
    quickSort(arr,low,high);
    cout<<"Sorted array: ";
    for(auto s:arr){
        cout<<s<<" ";
    }
    return 0;
}