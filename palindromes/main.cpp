#include <iostream>
#include <string.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int i = 0;
        int j = s.size() - 1;
        while (1) {
            if (i == j || j < i)
                return true;
            if (s[i] != s[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};

int main(void) {
    Solution test;
    cout << test.isPalindrome(121) << endl;
    cout << test.isPalindrome(-121) << endl;
    cout << test.isPalindrome(10) << endl; 
    cout << test.isPalindrome(1001) << endl;
    cout << test.isPalindrome(12321) << endl;
    cout << test.isPalindrome(123321) << endl;
}