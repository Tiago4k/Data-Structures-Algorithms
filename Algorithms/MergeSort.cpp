#include <iostream>
using namespace std;


// Time Complexity for MergeSort is O(nlogn) in all 3 cases
void merge(int* arr, int left, int mid, int right){

    int* temp = new int[right + 1];
    int h = left;
    int i = left;
    int j = mid + 1;
    
    // Copy arr[] elements to temp array
    while(h <= mid && j <= right){
        if(arr[h] <= arr[j]){
            temp[i] = arr[h];
            h++;
        }else{
            temp[i] = arr[j];
            j++;
        }
        i++;
    }
    
    // Copy remaining elements of arr[]
    if( h > mid){
        for(int k=j; k <= right; k++){
            temp[i]= arr[k];
            i++;
        }
    }
    else{
        for(int k=h; k <= mid; k++){
            temp[i]= arr[k];
            i++;
        }
    }
    
    // Copy the sorted elements from temp array to the original array
    for(int k = left; k <= right; k++){
        arr[k] = temp[k];
    }
    
    delete[] temp;
}

void mergeSort(int* arr, int left, int right){
    
    if(left < right){
        /*  Find middle point to divide array into two halves
            middle = left+(right-left)/2 is the same as 
            middle = (left-right)/2.
            Using the latter prevents the overflow of maximum integer range */
            
        int middle = left+(right-left)/2;
        
        // Sort first and second halves
        mergeSort(arr, left, middle);
        mergeSort(arr, middle + 1, right);
        
        merge(arr, left, middle, right);
    }
}

void printArray(int* arr, int n){
    
    cout<<"Sorted array: ";
    for(int i=0; i < n; i++){
        cout<< arr[i]<< " ";
    }
    cout<< endl;
    
}


int main(){
    
    int arr[] = {314,22,17,443,147,905,221,264,91,657};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Unsorted array: ";
    for(int i=0; i < n; i++){
        cout<< arr[i]<< " ";
    }
    cout<<endl; 
    mergeSort(arr, 0, n-1);
    printArray(arr, n);
    
    cout<<endl;
    
    return 0;

}
