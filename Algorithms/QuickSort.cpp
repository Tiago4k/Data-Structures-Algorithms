#include <iostream>
using namespace std;

void swap(int* a, int* b){
    
    int temp = *a;
    *a = *b;
    *b = temp;
}

/* This function takes last element as pivot, places 
   the pivot element at its correct position in sorted 
    array, and places all smaller (smaller than pivot) 
   to left of pivot and all greater elements to right 
   of pivot */
int partition(int arr[], int low, int high){
    
    // Element to be placed at the right position
    int pivot = arr[high];
    
    int i = (low - 1);      // Index of samller element
    for(int j = low; j <= high-1; j++){
        
        if(arr[j] <= pivot){
            i++;            // Increment i and swap the values in the array
            
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i+1], &arr[high]);
    return (i+1);
}


/*  Implementation of QuickSort
    Worse Case Time Complexity O(n^2)
    Best Case Time Complexity O(n Log n) */

// low = Starting Index (0), high = Ending Index (n-1)
void quickSort(int arr[], int low, int high){
    
    if(low < high){
        
        int partitionIndex = partition(arr, low, high);
        
        // Sort elements before partition and after partition
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}

void printArray(int arr[], int n){
    
    cout<<"Sorted array: ";
    for(int i=0; i < n; i++){
        cout<< arr[i]<< " ";
    }
    cout<< endl;
    
}

int main(void){
    
    int arr[] = {34,22,1,43,47,90,23,24,91,65};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Unsorted array: ";
    for(int i=0; i < n; i++){
        cout<< arr[i]<< " ";
    }
    cout<<endl; 
    quickSort(arr, 0, n-1);
    printArray(arr, n);
}
