/*Reverse the array using recursion*/

#include<bits/stdc++.h>
using namespace std;

void reverseArray(int arr[],int start,int end){
    int temp;
    if(start>= end) return;
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    reverseArray(arr,start+1,end-1); 
}


void printArray(int arr[], int size)
{
   for (int i = 0; i < size; i++)
   cout << arr[i] << " ";
 
   cout << endl;
}

int main(){
    int arr[] = {1,2,3,4,5,6};
    reverseArray(arr,0,5);
    printArray(arr,6);
}