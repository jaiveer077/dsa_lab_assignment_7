#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int arr[n]={8,1,7,5,2};
    for(int i=0;i<n;i++){
        bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                flag=false;
                swap(arr[j],arr[j+1]);
            }
        }
        if(flag==true) break;
    }
    cout<<"Sorted Array: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
} 