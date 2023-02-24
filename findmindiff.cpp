#include<bits/stdc++.h>
using namespace std;

int findMinDiff(int arr[],int n,int m){
    sort(arr,arr+n);
    int start = 0; int end = m-1;
    int minDiff = INT_MAX;
    while(end<n){
        minDiff = min(minDiff,arr[end]-arr[start]);
        end++;start++;
    }
    return minDiff;
}

int main(){
    int arr[] = {12, 4,  7,  9,  2,  23, 25, 41, 30,40, 28, 42, 30, 44, 48, 43, 50};
    int m = 7;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<< "Minimum difference is "<< findMinDiff(arr,n,m);
    return 0;
}