#include <iostream>
using namespace std;

// Implementation of Selection Sort
// Worse Case Time Complexity O(n^2)
void selectionSort(int arr[], int n){
    
    // Loop through each element in the unsorted array
    for(int i= 0; i < n-1; i++){
        
        // Find the minimum element in the unsorted array
        int min_index = i;
        for(int j = i + 1; j < n; j++){
            
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        
        // Swap the minimum found element with the first element in the array
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
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
    
    int arr[] = {4,2,7,3,8,5,1,10,6,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Unsorted array: ";
    for(int i=0; i < n; i++){
        cout<< arr[i]<< " ";
    }
    cout<<endl; 
    selectionSort(arr, n);
    printArray(arr, n);
}
