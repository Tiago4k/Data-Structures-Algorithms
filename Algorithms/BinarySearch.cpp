#include <iostream>
#include <ctime>
#include <chrono> 
using namespace std;

/* It returns location of x in given array 
arr[l..r] is present, otherwise -1 */
int recursiveBinarySearch(int arr[], int left, int right, int target){
    
    if(right >= left){
        int mid = left + (right - left)/2;
        
        // If the element is present at the middle, return mid 
        if(arr[mid] == target) return mid;
        
        // If element is smaller than mid, then it can only be present in left half 
        if(target < arr[mid]) return recursiveBinarySearch(arr, left, mid-1, target);
        
        // Else the element can only be present in right half 
        return recursiveBinarySearch(arr, mid+1, right, target);
    }
    return false; 
}

int iterativeBinarySearch(int arr[], int left, int right, int target){
    
    while(left <= right){
        
        int mid = left + (right - left)/2;
        
        // Check if target is present in mid
        if(arr[mid] == target) return mid;
        
        // If the target is greater than the mid, ignore left half
        if(target > arr[mid]){
            left = mid + 1;
        
        // If targer is less than the mid, ignore right half
        }else{
            right = mid - 1;
        }
    }
    
    return false;
}

int main(void){
    
    srand(time(NULL));
    int input;
    
    cout << "Please enter size of array: "<< endl;
    cin >> input;
    cout << "You entered: " << input <<endl;
    int arr[input];
    
    cout<<"\n*******************************"<< endl;
    for(int i=0; i < input; i++){
        arr[i] =(rand() % 1000) + 1;
        //cout << arr[i]<< " ";
    }
    cout<<"\n*******************************"<< endl;
    
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int target = 371;
    
    auto start = std::chrono::high_resolution_clock::now(); 
    int result = recursiveBinarySearch(arr, 0, arrSize - 1, target);
    // int result = iterativeBinarySearch(arr, 0, arrSize - 1, target);
    auto stop = std::chrono::high_resolution_clock::now(); 
    
    cout<<endl;
    
    if(result != false ){
         cout<< target << " is present at index: " << result<<endl;
    }else{
        cout<< target << " is not present in array"<<endl;
    }
    
    
    auto duration = std::chrono::duration<long double>(stop - start); 
    cout << "The recursive solution took " << duration.count() << " ms."<< endl; 
    // cout << "The iterative solution took " << duration.count() << " ms." << endl; 
    return 0;
    
}
