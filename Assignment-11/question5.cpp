#include <iostream>
using namespace std;
int main(){
    int arr[7];
    cout<< "Enter the elements of the array: ";
    bool flag = false;
    for(int i=0; i<7; i++){
        cin>> arr[i];
    }
    int x = 0;
    for(int i=0; i<7; i++){
        if(arr[i]!= x){
            flag = true;
            cout<<x << " ";
            break;
        }
        else x++;
    }
    if(flag == false){
        cout<< x << endl;
    }
    return 0;
}