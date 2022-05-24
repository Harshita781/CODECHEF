/*
Chef was on vacation when a thought struck him. Given three integers [Math Processing Error] and [Math Processing Error] he would like to make an array [Math Processing Error] of length [Math Processing Error] such that it satisfies the following conditions:

[Math Processing Error] for each [Math Processing Error]
The MEX of every contiguous subarray of length [Math Processing Error] in [Math Processing Error] is [Math Processing Error].
Please help Chef in finding such an array. If there are multiple answers, you can output any configuration; and if there is no possible answer, output [Math Processing Error].

Note: The MEX of an array is the minimum non-negative integer that is not present in it. For example,

The MEX of array [Math Processing Error] is [Math Processing Error] because it contains [Math Processing Error] and [Math Processing Error] but not [Math Processing Error].
The MEX of array [Math Processing Error] is [Math Processing Error] because [Math Processing Error] is the smallest non-negative integer not present in the array.
The MEX of array [Math Processing Error] is [Math Processing Error].
Input Format
The first line of input contains a single integer [Math Processing Error], denoting the number of test cases. The description of [Math Processing Error] test cases follows.
Each test case consists of a single line of input, containing three space-separated integers [Math Processing Error] — the length of the required array, the length of subarrays to be checked, and the required MEX value respectively.
Output Format
For each test case, output a single line containing the answer:

If no array satisfying the conditions exists, print [Math Processing Error].
Otherwise, print [Math Processing Error] space-separated integers denoting the elements of the array, the [Math Processing Error] of which is [Math Processing Error].
If there are multiple answers, you can output any of them.

Constraints
[Math Processing Error]
[Math Processing Error]
[Math Processing Error]
[Math Processing Error]
The sum of [Math Processing Error] over all test cases does not exceed [Math Processing Error]
Sample Input 1 
3
3 3 3
4 3 2
5 4 5
Sample Output 1 
0 1 2
1 0 1 1
-1
*/

// -------------------------------SOLUTION -------------------------------------------------------------------------------------
#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--)
    {
       int n,k,x;
       scanf("%d %d %d",&n,&k,&x);
       if(x>k)
       printf("-1\n");
       else{
           int count=0;
           for(int i=0;i<n;i++)
           {
               if(count==x)
               count=0;
               printf("%d ",count);
               count++;
           }
           printf("\n");
       }
    }
    return 0;
}