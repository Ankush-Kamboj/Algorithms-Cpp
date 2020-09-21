#include <iostream>
using namespace std;

void insertionSort(int arr[], int size){
    for (int i=1; i<size; i++){
        int key = arr[i];
        int j = i -1;

        // Moving elements greater than key to right side
        while (j>=0 && key<arr[j]){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }
}

int main(){
    int arr[] = {78, 56, 63, 18, 23};      // Array to sort
    int size = sizeof(arr)/sizeof(arr[0]);

    insertionSort(arr, size);
    // To print the array
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\n";
    }

    return 0;
}