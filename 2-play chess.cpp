#include <iostream>
using namespace std;



/*

Anton likes to play chess, and so does his friend Danik.

Once they have played n games in a row. For each game it's known 
who was the winner — Anton or Danik. None of the games ended with a tie.

Now Anton wonders, who won more games, he or Danik? Help him determine this.

Input
The first line of the input contains a single integer n  — the number of games played.

The second line contains a string s, consisting of n uppercase English 
letters 'A' and 'D' — the outcome of each of the games. The i-th character 
of the string is equal to 'A' if the Anton won the i-th game and 'D' 
if Danik won the i-th game.

Output
If Anton won more games than Danik, print "Anton" (without quotes) 
in the only line of the output.

If Danik won more games than Anton, print "Danik" (without quotes) 
in the only line of the output.

If Anton and Danik won the same number of games, print "Friendship" (without quotes).
*/

int main()
{
    int number_of_Games,Anton_c=0,Danik_c=0;
    char Winner;
    cin>>number_of_Games;
    for (int i = 0;i<number_of_Games;i++)
    {
        cin>>Winner;
        (Winner == 'A')?Anton_c ++:Danik_c++;
    }
    (Anton_c>Danik_c)?(cout<<"Anton"<<endl):(Anton_c<Danik_c)?(cout<<"Danik"<<endl):(cout<<"Friendship"<<endl);
    return 0;
}














