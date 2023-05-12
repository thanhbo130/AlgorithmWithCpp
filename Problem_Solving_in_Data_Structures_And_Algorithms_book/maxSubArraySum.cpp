/******************************************************************************

                             Description
Find the largest sum contiguous subarray
Given an array of positive and negative integer s, find a contiguous subarray
whose sum (sum of elements) is maximized
Refer:

Problem Solving in Data Structures & Algorithms Using C++_ Programming Interview Guide
Page 59
*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// vector<int> arr(10,1);
vector<int> arr{1,-9,0,5,-1,5,-5,-7,7};
int main()
{
    int maxSum = 0;
    int maxAtIdx = 0;
    for(int i = 0; i < arr.size(); ++i)
    {
        maxAtIdx += arr[i];
        if (maxAtIdx < 0) maxAtIdx = 0;
        maxSum = maxAtIdx > maxSum ? maxAtIdx:maxSum;
    }
    cout << maxSum;
    // for_each(arr.begin(), arr.end(), [](int e) {cout << e;});
    return 0;
}