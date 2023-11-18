// Selection  Sort

#include<iostream>
using namespace std;

void Selection_Sort(int arr[], int n){
    for(int i = 0; i < n; i++){
        int minimum = i;
        for(int j = i; j <= n-1; j++){
            if(arr[j] < arr[minimum]) minimum = j; 
        }
        // Swapping
        int temp = arr[minimum];
        arr[minimum] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n; i++) cin>>arr[i];

    Selection_Sort(arr,n);

    for(int i = 0 ; i < n; i++) cout<<arr[i]<<" ";
return 0;
}

/*
output
 6
13 46 24 52 20 9
9 13 20 24 46 52
*/