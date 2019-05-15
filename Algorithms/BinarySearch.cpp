#include <iostream>
#include <ctime>
#include <chrono> 
using namespace std;

int recursiveBinarySearch(int arr[], int left, int right, int target){
    
    if(right >= left){
        
        int mid = left + (right - left)/2;
        
        if(arr[mid] == target) return mid;
        
        if(target < arr[mid]) return recursiveBinarySearch(arr, left, mid-1, target);
        
        return recursiveBinarySearch(arr, mid+1, right, target);
    }
    
    return false; 

}


int iterativeBinarySearch(int arr[], int left, int right, int target){
    
    while(left <= right){
        
        int mid = left + (right - left)/2;
        
        if(arr[mid] == target) return mid;
        
        if(target > arr[mid]){
            left = mid + 1;
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
