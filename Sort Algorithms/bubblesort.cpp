#include <iostream>
using namespace std;

// To swap two elements
void swapIndex(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int size){
    for(int i = 0; i<size-1; i++){
        bool swapped = false;

        for(int j = 0; j < size-1; j++){
            // Comparing adjacent elements
            if (arr[j] > arr[j+1]){
                swapIndex(&arr[j], &arr[j+1]);
                swapped = true;
            }
        }

        // If array is sorted
        if (swapped != true){
                break;
            }
    }
}

int main(){
    int arr[] = {78, 56, 63, 18, 23};      // Array to sort
    int size = sizeof(arr)/sizeof(arr[0]);

    bubbleSort(arr, size);
    // To print the array
    for(int i=0; i<size; i++){
        cout<<arr[i]<<"\n";
    }

    return 0;
}
