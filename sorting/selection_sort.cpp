#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int arr[n]={7,5,9,2,8}; // 2 7 5 9 8-> // 2 5 7 9 8 -> // 2 5 7 8 9
    for(int i=0;i<n-1;i++){ // runs from i=0 to i=n-2
        int min=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}