#include <iostream>
using namespace std;

// Implementation of Bubble Sort
// Worse Case Time Complexity O(n^2)
void bubbleSort(int arr[], int n){
    
    for(int i= 0; i < n-1; i++){
        
        for(int j = 0; j < n-i-1; j++){
            
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
		        arr[j] = arr[j+1];
		        arr[j+1] = temp;
            }
        }
    }
}

// Optimised implementation of Bubble Sort
// Worse Case Time Complexity O(n^2)
// Best Case Time Complexity O(n)
void optimisedBubbleSort(int arr[], int n){
    
    bool swapped;
    
    for(int i= 0; i < n-1; i++){
        swapped = false;
        
        for(int j = 0; j < n-i-1; j++){
            
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
		        arr[j] = arr[j+1];
		        arr[j+1] = temp;
		        swapped = true;
            }
        }
        if(swapped == false) break; 
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
    
    int arr[] = {34,22,1,3,47,5,23,16,9,65};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Unsorted array: ";
    for(int i=0; i < n; i++){
        cout<< arr[i]<< " ";
    }
    cout<<endl; 
    optimisedBubbleSort(arr, n);
    printArray(arr, n);
}
