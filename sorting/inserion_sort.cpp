#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int arr[n]={8,1,7,5,2};
    for(int i=0;i<n;i++){
        int j=i;
        while(j>0&&arr[j-1]>arr[j]){ // compare the inner loop to shift the minimum elements to the left side of the array 
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
        }
    }
    cout<<"Sorted array(increasing order): ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}