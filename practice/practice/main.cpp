#include <string>
#include <stdexcept>
#include <iostream>

using namespace std;

class Palindrome
{
public:
    static bool isPalindrome(const string& word)
    {
        int j= word.size()-1;
        for(int i=0; i<= word.size()/2; i++, j--){
            
            
            if( toupper(word[i]) != toupper(word[j])){
                return false;
            }
        }
        return true;
        //throw logic_error("Waiting to be implemented");
    }
};

#ifndef RunTests
int main()
{
    cout << Palindrome::isPalindrome("Deleveled");
}
#endif
