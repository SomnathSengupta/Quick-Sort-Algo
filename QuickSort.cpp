#include<iostream>
#include<algorithm>
using namespace std;
int partition(int*arr,int low, int high){
    int pivort=high;
    int PI=low-1;
    for(int i=low; i<high; i++){
        if(arr[i]<arr[pivort]){
            swap(arr[i], arr[++PI]);
        }
    }
    swap(arr[high], arr[++PI]);
    return PI;

}
void quickSort(int*arr, int low, int high){
    if(low<high){
        int PI=partition(arr, low, high);
        quickSort(arr, low, PI-1);
        quickSort(arr, PI+1, high);
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    quickSort(arr,0,n-1);
    for(int i: arr){
        cout<<i<<" ";
    }
    return 0;
}