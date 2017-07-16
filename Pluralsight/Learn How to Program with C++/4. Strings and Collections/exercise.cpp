#include <iostream>
#include <string>

using namespace std;

int main()
{

    string s1;
    string s2;

    cout << "Enter string 1: "; 
    // cin >> s1;
    getline(cin,s1);
    cout << "Now enter string 2: ";
    // cin >> s2;
    getline(cin,s2);
    cout << endl;

    int s1_len = s1.length();
    int s2_len = s2.length();

    if (s1_len == s2_len)
    { cout << "They're equal"; }
    else if (s1_len > s2_len) 
    { cout << "String 1 is of greater length"; } 
    else 
    { cout << "String 2 is longer"; }
    cout << endl;

    return 0;
}