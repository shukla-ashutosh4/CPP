#include <iostream> 
using namespace std;

int binarysearch(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    // Previously used (start-end)/2 but changed it
    //for a more optimised code!
    int mid = start + (end-start)/2;

    while(start <= end){
        if(arr[mid] == key){
            return mid;
        }
        // go to right part
        if(key > arr[mid]){
            start = mid+1;
        }
        // go to left part
        else{
            end = mid-1;
        }
        // Previously used (start-end)/2 but changed it
        //for a more optimised code!
        mid = start + (end-start)/2;
    }
    return -1;
}
int main(){
    int even[6] = {2, 4, 6, 8, 12, 18};
    int odd[5] = {3, 8, 11, 14, 16};

    int evenIndex = binarysearch(even, 6, 12);
    cout<< "Index of 12 is " << evenIndex <<endl;

    int oddIndex = binarysearch(odd, 5, 14);
    cout<< "Index of 14 is " << oddIndex <<endl;
    return 0; 
}