#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool isAnagram(string strig1, string strig2) //main function body to check for anagrams
{
    // Get lengths of both strings
    int n1 = strig1.length();
    int n2 = strig2.length();
 
    // If length of both strings is not same, then they
    // cannot be anagram
    if (n1 != n2)
        return false;
 
    // Sorts the strings
    sort(strig1.begin(), strig1.end());
    sort(strig2.begin(), strig2.end());
 
    // Compares the sorted strings
    for (int i = 0; i < n1; i++)
        if (strig1[i] != strig2[i])
            return false;

    return true;
}

int main()
{
    string strig1 = "spare";
    string strig2 = "pears";
 

    if (isAnagram(strig1, strig2))
        cout <<strig1<<" and "<<strig2<<" are anagrams of each other";
    else
        cout <<strig1<<" and "<<strig2<<" are not anagrams of each "
                "other";
 
    return 0;
}
