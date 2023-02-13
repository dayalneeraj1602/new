#include <iostream>
#include<bits/stdc++.h>
using namespace std;
void reverse(int arr[], int n) {
int start = 0;
int end = n - 1;
while (start <= end)
{
    swap(arr[start] = arr[end]);
    start++;
    end--;
}
}
void printArray(int arr[], int n) {
    
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{

    int arr[3] = {1, 2, 3};
    // for (int i = 2; i >= 0; i--)
    // {
    //     cout << arr[i] << endl;
    // }
    reverse(arr,3);
    printArray(arr,3);
    return 0;
}