// Binary Search - Recursive

#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int ele)
{
    if (high >= low){
        int mid = low + (high - low)/2;

        // if element is at the middle
        if (arr[mid] == ele){
            return mid+1;
        }
        // if element is smaller than mid, move to left subarray
        else if (arr[mid] > ele){
            high = mid-1;
            return binarySearch(arr, low, high, ele);
        }
        // if element is larger than mid, move to right subarray
        else{
            low = mid+1;
            return binarySearch(arr, low, high, ele);
        }
    }
    else{
        return -1;
    }
}

int main(){
    int arr[] = {18, 23, 56, 63, 78};           // Binary search takes sorted array
    int ele = 18;                               // element to search
    int size = sizeof(arr)/sizeof(arr[0]);      // finding size of array
    int low = 0;
    int high = size - 1;

    int result = binarySearch(arr, low, high, ele);
    if (result != -1){
        cout<<"Position of element is "<<result;
    }
    else{
        cout<<"Element not present";
    }
    
    return 0;
}