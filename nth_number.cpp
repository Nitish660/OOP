/*Program Find the nth term of the series. 1,1,2,3,4,9,8,27,16,81,32,243,….*/
#include<iostream>
#include<math.h>

using namespace std;

int three(int n)
{
    int x;
    //n-1 because powers start from 0 not 1
    x = pow(3,n-1);
    cout<< x;
}

int two(int n)
{
    int x;
    //n-1 because powers start from 0 not 1
    x = pow(2,n-1);
    cout<< x;
}

int main()
{
    int n;
    cin >> n;
    
    //Checking of the nth term will be at even position or odd position
    //Odd positions are powers of 2
    //Even positions are powers of 3
    if(n%2==0)
    {
        //nth position(if even) will be at n/2 position for sub GP-2
        three(n/2);
    }
    else
    {
        //nth position(if odd) will be at (n/2 + 1) position for sub GP-1
        two(n/2 + 1);
    }
    return 0;
}