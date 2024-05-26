#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for (int i = 0; i<n; i++){
         int curr = arr[i];
         int prev = i-1;
        
        while(prev >= 0  &&  arr[prev] > curr){
            swap(arr[prev], arr[prev+1]);
            prev--;
        }

        arr[prev+1] = curr;
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

   insertionSort(array, n);

    return 0;
}