#include <iostream>
#include <string>
using namespace std;

/* Cheat Sheet
 * 1. Reverses a String
 * 2. Input : String, Output : Reversed String
 * 3. Time : O(n) Space : O(n)
 * 4.
 * 5. Look up the original string, and add it to new array in reversed order. It will be O(n) both space,
 * and time.
 * 6.
 * 7. What if input is not string? (Input makes it to string automatically) // What if the length is just 1?
 * 8. (*) Check if input is string and the length of the string.
 *    (1) Make a new string for saving reversed string.
 *    (2) Add a character of input string in reversed order to a new string.
 *    (3) Return the new string
 * 9. Checking, Reversing // Getting input and Returning Output.(main)
 *
 */
 
string ReversedString(const string s1){
    if (s1.length() == 1) return s1;
    else{
        string s2;
        int idx = s1.length() - 1;
        for (int i = idx; i >= 0; i--){
            s2 += s1[i];
        }
        return s2;
    }
}

int main()
{
    string str;
    getline(cin, str);
    
    string answer;
    answer = ReversedString(str);
    
    cout << answer;
}
