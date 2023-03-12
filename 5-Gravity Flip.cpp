#include <iostream>
using namespace std;
#include <algorithm>

/*
=====================A.Gravity Flip =============================

Little Chris is bored during his physics lessons (too easy),
so he has built a toy box to keep himself occupied.
The box is special, since it has the ability to change gravity.

There are n columns of toy cubes in the box arranged in a line.
The i-th column contains ai cubes.
At first, the gravity in the box is pulling the cubes downwards.
When Chris switches the gravity, it begins to pull all
the cubes to the right side of the box. The figure shows the initial
and final configurations of the cubes in the box: the cubes that have
changed their position are highlighted with orange.
*/

int main()
{
    int Number_Column,i,temp;
    cin>>Number_Column;
    int Cube_ARR[Number_Column];
    for(i =0;i<Number_Column;i++)
    {
        cin>>Cube_ARR[i];
    }
    sort(Cube_ARR,Cube_ARR+Number_Column);
    for(i =0;i<Number_Column;i++)
    {
        cout<<Cube_ARR[i]<<' ';
    }
    return 0;
}














