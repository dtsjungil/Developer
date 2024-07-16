#include<iostream>

using namespace std;
int main(void){
    //algorithm
    //sorting 
    //insert sorting 
    int arr[10];
    int arr_length = sizeof(arr) / sizeof(int);
    int j;
    for(int i=1;i<arr_length;i++){
        int key = arr[i];
        for(j=i-1;j>=0 && arr[j]>key;j--){
            arr[j+1]=arr[j];
        }
        arr[j+1]=key;
    }
    cout<<"hello world"<<endl;
    return 0;
}