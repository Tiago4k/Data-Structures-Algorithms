#include <iostream>
using namespace std;

// Implementation of Insertion Sort
// Worse Case Time Complexity O(n^2)
// Best Case Time Complexity O(n)
void insertionSort(int arr[], int n){
    
    for(int i=0; i < n; i++){
        int item = arr[i];
        int j = i-1;
        
        while(j >= 0 && arr[j] > item){
            arr[j + 1] = arr[j];
            j = j-1;
        }
        arr[j+1] = item;
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
    insertionSort(arr, n);
    printArray(arr, n);
}
