// #include<iostream>
// using namespace std;
// int main(){
//      char arr[]={'A','p','p','u'};
//      for(int i=0;i<4;i++)
//     {
//          cout<<arr[i];
//      }

//     // now creating as a variabe size
//     char arr[10];
//     cin>>arr;
//     arr[2] = '\0';
//     cout<<arr;
//  }

// string

/* #include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    cout<<s;
} */

// print all char in string with space

/* #include <iostream>
using namespace std;
int main()
{
/*
    printing all string char with space  neglecting null char
    string s;
    getline(cin, s);
    cout <<s<<endl;
    cout<<s.size(); */

// adding two string(append operator)

/*  string s1="Appu",s2="DingDong";

 // string s3=s1+s2;
 or
 string s3 = s1.append(s2);

 cout<<s3;
 cout<<endl; */

// Adding char j in last of string

/* s1.push_back('j');
cout<<s1;
cout<<endl; */

// another method to  attach j

/*  s1=s1+"p";

 Removing char j from last of string

 s1.pop_back();
 cout<<s1; */

// }

// escape character

/* #include <iostream>
using namespace std;
int main()
{
     string s ="Bhut achi hai na \"Appu\" yrr";
    //  for null char
     string s1 ="\\0";  //null char print blank

    cout<<s<<endl;
    cout<<s1;
} */

// Reverse the string

/* #include <iostream>
using namespace std;
int main()
{
   string s ="Eklauti";
    int start=0,end=s.size()-1;
//    reverse string
while(start<end)
{
    swap(s[start],s[end]);
    start ++;
    end--;
}
cout<<s;
} */

// print size of string without s.size()
/* #include <iostream>
using namespace std;
int main()
{
    string s = "Dhakkan";
    int size = 0;
    while (s[size] != '\0')
    {
        size++;
    }
    cout << endl;
    cout << size << " ";
} */

// pallindrome or not

/* #include <iostream>
using namespace std;
int main()
{
    string s = "naman";
    int start = 0 , end =s.size()-1;
    while ( start<end)
    {
        if(s[start]!= s[end])
        {
            cout<<"NOt a Pallindrrome:";
             return 0;
        }
        start++,end--;
    }
    cout <<"its a Pallindrome ";
} */

// sorting the  string

/* #include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    string sortSentence(string s) {
        vector<string> ans(10);  // Assuming there are at most 10 words
        string temp;
        int count = 0, index = 0;

        while (index < s.size()) {
            if (s[index] == ' ') {
                int pos = temp[temp.size() - 1] - '0';
                temp.pop_back();
                ans[pos] = temp;
                temp.clear();
                count++;
            } else {
                temp += s[index];
            }
            index++;
        }

        // Handle the case where the last word is not followed by a space
        if (!temp.empty()) {
            int pos = temp[temp.size() - 1] - '0';
            temp.pop_back();
            ans[pos] = temp;
            count++;
        }

        // Build the result string
        string result;
        for (int i = 1; i <= count; i++) {
            result += ans[i];
            if (i < count) {
                result += ' ';
            }
        }

        return result;
    }
};

int main() {
    Solution solution;
    string input = "4 This is a sample sentence 3 sorting 1 numbers 2 using";
    string result = solution.sortSentence(input);
    cout << "Result: " << result << endl;

    return 0;
} */

/* class Solution
{
public:
    string sortSentence(string s)
    {
        vector<string> ans(10); // Assuming there are at most 10 words
        string temp;
        int count = 0, index = 0;
        while (index < s.size())
        {
            // FOR SPACING
            if (s[index] == ' ')
            {

                int pos = temp[temp.size() - 1] - '0';
                temp.pop_back();
                ans[pos] = temp;
                temp.clear();
                count++;
            }

            else
            {
                temp += s[index];
            }
            index++;
            // Handle the case where the last word is not followed by a space
            if (s[index] == ' ')
            {

                int pos = temp[temp.size() - 1] - '0';
                temp.pop_back();
                ans[pos] = temp;
                temp.clear();
                count++;
            }
        }
        // FOR ACCESSING  // Build the result string
        for (int i = 1; i <= count; i++)
        {
            temp += ans[i];
            temp += ' ';
        }
        temp.pop_back();
        return temp;
    }
}; */




/* 
class Solution
{
public:
    string sortVowels(string s)
    {
        vector<int> lower(26, 0);
        vector<int> upper(26, 0);
        for (int i = 0; i < s.size(); i++)
        {
            //  for lower
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
            {
                // for lower index
                lower[s[i] - 'a']++;
                s[i] = '#';
            }
            // for upper
            else if (s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
            {
                // for upper index
                upper[s[i] - 'A']++;
                s[i] = '#';
            }
        }

        // sorting lower case
        string ans;
        for (int i = 0; i < 26; i++)
        {
            char c = 'a' + i;
            while (lower[i])
            {
                ans += c;
                lower[i]--;
            }
        }
        // for upper case
        for (int i = 0; i < 26; i++)
        {
            char c = 'A' + i;
            while (upper[i])
            {
                ans += c;
                upper[i]--;
            }
        }
        // insert two pointer
        int first = 0, second = 0; // first point kar rha hai string s ko ,secong point kar rha hai ans ko.
        while (second < ans.size())
        {
            if (s[first] == '#')
            {
                s[first] = ans[second];
                second++;
            }
            first++;
        }
        return s;
    }
};
 */