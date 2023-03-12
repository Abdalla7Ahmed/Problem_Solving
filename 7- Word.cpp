#include <iostream>
using namespace std;

/*
=====================A. Word =============================

Vasya is very upset that many people on the Net mix uppercase and lowercase
letters in one word. That's why he decided to invent an extension for his favorite
browser that would change the letters' register in every word so that it either only
consisted of lowercase letters or, vice versa, only of uppercase ones.
At that as little as possible letters should be changed in the word. For example,
the word HoUse must be replaced with house, and the word ViP — with VIP.
If a word contains an equal number of uppercase and lowercase letters,
you should replace all the letters with lowercase ones. For example,
maTRIx should be replaced by matrix. Your task is to use the given method
on one given word.

Input
The first line contains a word s — it consists of uppercase
and lowercase Latin letters and possesses the length from 1 to 100.

Output
Print the corrected word s.
If the given word s has strictly more uppercase letters,
make the word written in the uppercase register, otherwise - in the lowercase one.
make the word written in the uppercase register, otherwise - in the lowercase one.
*/

int main()
{
    int Upper_C=0,Lower_C=0;
    char Type;
    string Word;
    cin>>Word;
    for(int i = 0 ; i< Word.size();i++)
    {
        if(Word[i] >=65 && Word[i]<=90)Upper_C++;
        if(Word[i] >=97 && Word[i]<=122)Lower_C++;
    }
    for(int i = 0 ; i< Word.size();i++)
    {
        if(Word[i] >=65 && Word[i]<=90 && Lower_C>=Upper_C)   Word[i] +=32;
        else if(Word[i] >=97 && Word[i]<=122 && Upper_C>Lower_C)   Word[i] -=32;
    }
    cout<<Word;

    return 0;
}














