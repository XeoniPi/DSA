#include<iostream>
using namespace std;

void BubbleSort(int sortArr[], int n){
    int i,j,temp;
    for(i=0; i < n-1; i++){
        for(j = 0; j <n-i-1; j++){
            if(sortArr[j] > sortArr[j+1]){
                temp = sortArr[j];
                sortArr[j] = sortArr[j+1];
                sortArr[j+1] = temp;
            }
        }
    }
}

int main(){
    cout << "Enter Array Size: \t";
    int n;
    cin >> n;
    int arr[n];
    for(int i = 1; i <= n; i++){
        cout << "enter element " << i << ": \t";
        cin >> arr[i-1];
    }
    BubbleSort(arr, n);
    cout << "Sorted Array: \t";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}