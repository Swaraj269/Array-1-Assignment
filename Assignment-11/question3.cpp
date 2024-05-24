#include <iostream>
using namespace std;
int main(){
    int arr[6];
    cout<< "Enter the elements: ";
    for(int i=0; i<=5; i++){
        cin>>arr[i];
    }
    int min = arr[0];
    for(int i = 0; i<=5; i++ ){
        if(min > arr[i]){
            min = arr[i];
        }
    }
    cout<< "The minimum element is: " << min;
    return 0;
}