#include <iostream>
using namespace std;
/*
=====================A. Team =============================
One day three best friends Petya, Vasya and Tonya decided to form a team 
and take part in programming contests. Participants are usually offered
 several problems during programming contests. Long before the start 
 the friends decided that they will implement a problem if at least 
 two of them are sure about the solution. Otherwise, the friends won't 
 write the problem's solution.

This contest offers n problems to the participants. For each problem we know, 
which friend is sure about the solution. Help the friends find the number 
of problems for which they will write a solution.

Input
The first input line contains a single integer n — the number of problems 
in the contest. Then n lines contain three integers each, each integer is 
either 0 or 1. If the first number in the line equals 1, then Petya is sure 
about the problem's solution, otherwise he isn't sure. The second number 
shows Vasya's view on the solution, the third number shows Tonya's view. 
The numbers on the lines are separated by spaces.

Output
Print a single integer — the number of problems the friends will implement on the contest.
*/

int main()
{
    int number_of_problems,Flag,arr[3],counter=0;
    cin>>number_of_problems;
    for(int i =0 ;i<number_of_problems;i++)
    {
        cin >>arr[0]>>arr[1]>>arr[2];
        if(arr[0]==1)Flag++;
        if(arr[1]==1)Flag++;
        if(arr[2]==1)Flag++;

        if(Flag >=2)counter ++;
        Flag=0;
    }
    cout<<counter<<endl;
    return 0;
}














