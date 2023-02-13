#include <iostream>
using namespace std;
int PrintArray(int arr[], int n)
{
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int n = 5;
    int third[5] = {1, 2, 3, 4, 5};
    PrintArray(third, 5);
}