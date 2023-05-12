
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void reverseArray(std::vector<int> &a, int start, int end)
{
    for (int i = start, j = end; i < j; i++, j--)
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

void rotateArray(std::vector<int> &arr, int k)
{
    int n = arr.size();
    reverseArray(arr, 0, k - 1);
    reverseArray(arr, k, n - 1);
    reverseArray(arr, 0, n - 1);
}

vector<int> arr = {1,2,3,4,5,6,7,8,9} ;

int main()
{
    rotateArray(arr, 5);
    
    for_each(arr.begin(), arr.end(), [](int e) {cout << e;});
    return 0;
}
