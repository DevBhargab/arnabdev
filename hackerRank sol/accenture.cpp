
#include<bits/stdc++.h>
using namespace std;

int helper(int n , int arr[]){
    sort(arr,arr+n);

    int sum =0;
    for (int i = 1; i < n; i++)
    {
        sum +=abs(arr[i] - arr[i-1]);
        /* code */
    }
    return sum;
    

}