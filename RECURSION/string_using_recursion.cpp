/* // Check Palindrome


#include<bits/stdc++.h>
using namespace std;

bool checkpal(string str,int start ,int end)
{
    // base case
    if(start>=end)
    return 1;
    // not matched
    if(str[start]!=str[end])
    return 0;
    else
    // matched
    return checkpal(str,start+1,end-1);
}
int main()
{
    string str ="naman";
    cout<<checkpal(str,0,4)<<endl;
} */

/* // COUNT VOWELS

#include <bits/stdc++.h>
using namespace std;
int count(string str, int index)
{
    // Base Case
    if (index == -1)
        return 0;
        // if vowel
    if (str[index] == 'a' || str[index] == 'e' || str[index] == 'i' || str[index] == 'o' || str[index] == 'u' )
        return 1 + count(str, index - 1);
        // not vowel then
    else
        return count(str, index - 1);
}
int main()
{
    // Lower CASE KE LIEA HAI
    string str = "Dipu";
    cout << count(str, 4)<<endl;
} */

// REVERSE A STRING

/* #include<bits/stdc++.h>
using namespace std;

void rev(string &str, int start, int end)
{
    // Base Condition
    if (start >= end)
        return;

    char c = str[start];
    str[start] = str[end];
    str[end] = c;
    rev(str, start + 1, end - 1);
}

int main()
{
    string str = "Dhakkan";
    rev(str, 0, 6);
    cout << str << endl;

    return 0;
} */

// Lower to Upper case 
/* 
#include<bits/stdc++.h>
using namespace std;

void LowertoUpper(string &str, int index)
{
    // Base Condition
    if (index==-1)
        return;

    str[index]='A'+str[index]-'a';
    LowertoUpper(str,index-1);
}

int main()
{
    string str = "dhakkan";
    LowertoUpper(str,6);
    cout << str << endl;

    return 0;
} */
