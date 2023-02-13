#include <iostream>
using namespace std;
bool search(int arr[],int n,int key)
{
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == key)
        {
        return 1;
        }
    }
    return 0;
}
int main()
{
    int key;
    cin >> key;
    int arr[5] = {1, 5, 6, 5, 5};
    // for (int i = 0; i < 5; i++)
    // {
    //     if (arr[i] == key)
    //     {
    //         cout << "present" << endl;
            
    //     }
    // }
    bool found=search(arr,5,key);
    if (found)
    {
        cout<<"present"<<endl;
    }
    else
    {
        cout<<"absent"<<endl;
    }
}