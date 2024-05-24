#include <iostream>
using namespace std;
int main(){
    int arr[6];
    cout<< "Enter the elements of the array: ";
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
    int lag = arr[0];
    int slag = arr[0];
    for(int i=0;i<6;i++){
        if(arr[i]>lag){
            slag = lag;
            lag = arr[i];
        }
    }
    cout<< "The second largest element is: "<<slag;
    return 0;
}