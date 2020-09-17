// Binary Search - Recursive

#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int ele)
{
    int low = 0;
    int high = size-1;

    while(high>=low){
        // findind mid
        int mid = low + (high-low)/2;

        // if element is at the middle
        if (arr[mid]==ele){
            return mid+1;
        }

        // if element is smaller than the middle, move to left subarray
        else if (arr[mid]>ele){
            high = mid-1;
        }

        // if element is larger than the middle, move to right subarray
        else{
            low = mid+1;
        }
    }

    // if element is not present
    return -1;
}

int main(){
    int arr[] = {18, 23, 56, 63, 78};           // Binary search takes sorted array
    int ele = 18;                               // element to search
    int size = sizeof(arr)/sizeof(arr[0]);      // finding size of array

    int result = binarySearch(arr, size, ele);
    if (result != -1){
        cout<<"Position of element is "<<result;
    }
    else{
        cout<<"Element not present";
    }
    
    return 0;
}