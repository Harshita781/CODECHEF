/*
It is Chef's birthday. You know that Chef's favourite number is X. You also know that Chef loves averages. Therefore you decide it's best to gift Chef 3 integers A1,A2,A3, such that:

The mean of A1,A2 and A3 is X.
1≤A1,A2,A3≤1000.
A1,A2 and A3 are distinct.
Output any suitable A1,A2 and A3 which you could gift to Chef.

As a reminder, the mean of three numbers P,Q,R is defined as: mean(P,Q,R)=P+Q+R3.

For example, mean(2,3,5)=2+3+53=103=3.333¯, mean(2,2,5)=2+2+53=93=3.

Input Format
The first line of input contains a single integer T, denoting the number of test cases. The description of T test cases follows.
The first and only line of each test case contains one integer X — Chef's favourite number.
Output Format
For each test case, one line containing 3 space-separated integers — A1,A2, and A3, which satisfy the given conditions. If there are multiple possible answers you may output any of them.

It can be shown that an answer always exists, under the given constraints.

Constraints
1≤T≤100
2≤X≤100
Sample Input 1 
3
3
5
5
Sample Output 1 
1 3 5
1 6 8
3 5 7
*/

// ------------------------------------------------SOLUTION-------------------------------------------------------------------

#include <iostream>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--)
	{  
	    int X,num;
	    cin>>X;
	     num=X*3;
	     int A1=0,A2=0,A3=0;
	     if(num%2==0)
	     {
	         A1=1;
	         A2=(num/2)-1;
	         A3=(num/2);
	     }
	     else{
	         A1=1;
	         A2=(num/2)-1;
	         A3=(num/2)+1;
	     }
	    cout<<A1<<" "<<A2<<" "<<A3<<endl;
	}
	
	return 0;
}
