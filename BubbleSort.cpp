#include<iostream>
using namespace std;

void swap(int *arr, int i, int j){

    int temp = arr[j];
    arr[j] = arr[j+1];
    arr[j+1] = temp;

}

void BubbleSort(int *arr, int n){
    for(int i = 0; i<n; i++){
        for (int j = i; j<n; j++){
            if(arr[j] > arr[j+1]){

                swap(arr, i , j);
                // int temp = arr[j];
                // arr[j] = arr[j+1];
                // arr[j+1] = temp;
            }
        }
    }

    for(int i = 0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int array[] = {1,2,3,4,5,78,15,38,87,99,15};

    int n = sizeof(array)/ sizeof(int);

    BubbleSort(array, n);

    return 0;
}