#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the size of the array: ";
    cin>>n;
    int arr[4];
    int product = 1;
    cout<< "Enter the element: ";
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    for(int i=0; i<=n-1; i++){
        product *= arr[i];
    }
    cout<< "The product of the array is: "<<product;
    return 0;
}