#include<iostream>
using namespace std;


void selectionSort(int arr[], int n){

    for(int i = 0; i<n-1; i++){
        int minIdx = i;

        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minIdx]){
                minIdx = j;
            }
        }

        swap(arr[i], arr[minIdx]);
    }
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int array[] = {1,15,48,25,78,52,78,24,58,65};
    int n = sizeof(array) / sizeof(int);

    selectionSort(array, n);


    return 0;
}