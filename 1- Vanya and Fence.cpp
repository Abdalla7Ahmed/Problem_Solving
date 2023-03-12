#include <iostream>
#include "time.h"
using namespace std;



/*
====================== A. Vanya and Fence ====================
time limit per test 1 second
memory limit per test 256 megabytes
input standard input
output standard output

Vanya and his friends are walking along the fence of height h and they 
do not want the guard to notice them. In order to achieve this the height
 of each of the friends should not exceed h. If the height of some person 
 is greater than h he can bend down and then he surely won't be noticed by the guard.
  The height of the i-th person is equal to ai.

Consider the width of the person walking as usual to be equal to 1, 
while the width of the bent person is equal to 2. 
Friends want to talk to each other while walking, 
so they would like to walk in a single row. 
What is the minimum width of the road, 
such that friends can walk in a row and remain unattended by the guard?

Input
The first line of the input contains two integers n and h  — 
the number of friends and the height of the fence, respectively.

The second line contains n integers ai ,
 the i-th of them is equal to the height of the i-th person.

Output
Print a single integer — the minimum possible valid width of the road.
*/

int main()
{
    int fence_h, number_of_persons;
    int result ;
    int flag=0;
    int width;
    cin>>number_of_persons>>fence_h;
    for (int i = 0 ; i <number_of_persons ;i++)
    {
        cin >> result;
        if(result > fence_h) flag++;
    }
    width = number_of_persons + flag;
    cout <<width<<endl;
    return 0;
}
