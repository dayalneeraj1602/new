
// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     vector<int> v;
//     v.push_back(10);
//     cout<<v.capacity()<<endl;
//     v.push_back(10);
//     cout<<v.capacity()<<endl;
//      v.push_back(10);
//     cout<<v.capacity()<<endl;
//     cout<<v.size()<<endl;
//     cout<<v.at(2)<<endl;
//     v.pop_back(10);
//     v.clear();

//     v.pop_back();

// for(auto i : v){
//     cout<<i;
// }
// }

// C++ Program to print
// an Array using Recursion

#include <bits/stdc++.h>
using namespace std;

// Recursive function to print the array
void print_array(int arr[], int size)
{

    // using the static variable
    static int i;

    // base case
    if (i == size)
    {
        i = 0;
        cout << endl;
        return;
    }

    // print the ith element
    cout << arr[i] << " ";
    i++;

    // recursive call
    print_array(arr, size);
}

// Driver code
int main()
{

    int arr[] = {3, 5, 6, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    print_array(arr, n);

    return 0;
}
