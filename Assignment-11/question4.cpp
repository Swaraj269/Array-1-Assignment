#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter the size of the array: ";
    cin>>n;
    int arr[n];
    bool flag = false;
    cout<< "Enter the elements of the array: ";
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    for(int i=0; i<=n-1; i++){
        for(int j = i+1; j<=n-1; j++){
            if(arr[i]==arr[j]){
                flag = true;
            }
        }
    }
    if(flag==true){
        cout<< "The array contains duplicate elements";
    }
    else{
        cout<< "The array does not contain duplicate elements";
    }
    return 0;
}