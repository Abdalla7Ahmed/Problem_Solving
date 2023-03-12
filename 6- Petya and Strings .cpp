#include <iostream>
using namespace std;

/*
=====================A. Petya and Strings =============================

Little Petya loves presents. His mum bought him two strings
 of the same size for his birthday. The strings consist
 of uppercase and lowercase Latin letters. Now Petya wants
 to compare those two strings lexicographically.
The letters' case does not matter, that is an uppercase
letter is considered equivalent to the corresponding lowercase letter.
Help Petya perform the comparison.

Input
Each of the first two lines contains a bought string.
The strings' lengths range from 1 to 100 inclusive.
It is guaranteed that the strings are of the same length
and also consist of uppercase and lowercase Latin letters.

Output
If the first string is less than the second one, print "-1".
If the second string is less than the first one, print "1".
If the strings are equal, print "0".
 Note that the letters' case is not taken into consideration when the strings are compared.
*/

int main()
{
    int status;
    string First,Second;
    cin>>First;
    cin>>Second;
    for(int i =0;i<First.size();i++)
    {
        if(First[i] >=65 && First[i]<=90)
        {
            First[i] +=32;
        }
        if(Second[i] >=65 && Second[i]<=90)
        {
            Second[i] +=32;
        }



        if(First[i] > Second[i])
        {
            status = 1;
            break;
        }
        else if(First[i] < Second[i])
        {
            status = -1;
            break;
        }
        else if(First[i] == Second[i])
        {
            status = 0;
        }
    }
    cout<<status;


    return 0;
}














