#include <iostream>
#include <ctime>
using namespace std;

int searchArray(int arr[], int n, int key){
    
    for (int i = 0; i < n; i++) 
        if (arr[i] == key) 
            return i; 
    return -1; 
}


int main(){
    
    srand(time(NULL));
    int input;
    
    cout << "Please enter size of array: "<< endl;
    cin >> input;
    cout << "You entered: " << input <<endl;
    int arr[input];

    for(int i=0; i < input; i++){
        arr[i] =(rand() % 10) + 1;
        cout << arr[i]<< " ";
    }
    
    int arrSize = sizeof(arr) / sizeof(arr[0]);
    int keyValue = 6;
    int result = searchArray(arr, arrSize, keyValue);
    
    cout<<endl;
    
    if(result != -1){
         cout<< keyValue << " is present at index: " <<result;
    }else{
        cout<< keyValue << " is not present in array";
    }
    
    return 0;
    
}
