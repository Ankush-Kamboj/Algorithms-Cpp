// Linear Search 

#include <iostream>
using namespace std;

int linearSearch(int arr[], int ele, int size){
    for(int i=0; i<size; i++){
        if (arr[i] == ele){
            return i+1;
        }
    }
    
    return -1;
}


int main(){
    int arr[] = {23, 56, 78, 63, 18};           // array to search the element in
    int ele = 23;                               // element to search
    int size = sizeof(arr)/sizeof(arr[0]);      // finding size of array

    int result = linearSearch(arr, ele, size);
    if (result != -1){
        cout<<"Position of element is "<<result;
    }
    else{
        cout<<"Element not present";
    }

    return 0;
}