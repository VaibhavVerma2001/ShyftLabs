/*
DSA
Given an unbounded array (an array whose length cannot be figured out), that only contains positive integers and -1. After a certain index x, all the elements are -1. Find this index x.

Input eg: 3, 4, 1, 2, 7, 8, 20, 33, -1, -1, -1, -1, …….
Output: 8

Input eg: -1, -1, -1, -1,.....
Output:0

NOTE:
 
The array will always have -1 at some index
The array will never be empty
Once -1 appears, a positive integer will never appear
*/

#include<iostream>
#include<vector>
using namespace std ;


// Method 1 - Linear search
// Run while loop and keep on searching till we don't find -1
// TC = O(N) -> where N is index till we don't find -1 (can say length of array :-)  )
int method1(vector<int> & arr){
    int i = 0 , ans;
    while(true){
        if(arr[i] == -1){
            ans = i;
            break;
        }
        i++;
    }
    return ans;
}



// Method 2 - using Exponential Binary search for unbounded array
// Applications of Exponential Search: 
// 1 - Exponential Binary Search is particularly useful for unbounded searches, where size of array is infinite.

// Exponential search involves two steps:  

// 1 - Find range where element is present
// 2 - Do Binary Search in above found range.
// TC = O(log N)



int main ()
{
    vector<int> arr = {3, 4, 1, 2, 7, 8, 20, 33, -1, -1, -1, -1};
    cout<<method1(arr)<<endl;

    arr = { -1, -1, -1, -1};
    cout<<method1(arr)<<endl;
    
    arr = { 5,-1, -1, -1, -1};
    cout<<method1(arr)<<endl;

    return 0 ;
}