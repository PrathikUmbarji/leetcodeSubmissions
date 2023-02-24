/*to find the maximum and minimum element using minimum number of comparisions*/

#include<bits/stdc++.h>
using namespace std;

struct Pair {
    int max;
    int min;
};

struct Pair getmaxmin(int arr[],int low,int high){
    struct Pair minmax,mml,mmr;
    int mid;

    if(low == high){
        minmax.max = arr[low];
        minmax.min = arr[low];
        return minmax;
    }
    if(high == low+1){
        if(arr[low]>arr[high]){
            minmax.max = arr[low];
            minmax.min = arr[high];
        }
        else{
            minmax.max = arr[high];
            minmax.min = arr[low];
        }
        return minmax;
    }

    mid = (high + low)/2;
    mml = getmaxmin(arr,low,mid);
    mmr = getmaxmin(arr,mid+1,high);

    if(mml.min<mmr.min)
        minmax.min = mml.min;
    else
        minmax.min = mmr.min;

    if(mml.max>mmr.max)
        minmax.max = mml.max;
    else
        minmax.max = mmr.max;

    return minmax;

}

int main(){
    int arr[] = {1000, 11, 445, 1, 330, 3000};
    int arr_size = 6;
    struct Pair minmax = getmaxmin(arr,0,arr_size-1);
    cout<<"Minimum element is "<<minmax.min<<endl;
    cout<<"Maximum element is "<<minmax.max<<endl;
}