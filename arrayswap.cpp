#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int array[5] = {1, 2, 3, 4, 5};
    {
        for (int i = 0; i < 5; i += 2)
            swap(array[i], array[i + 1]);
        cout << array[i] << endl;
    }
}