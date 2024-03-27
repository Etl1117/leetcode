#include <iostream>
#include <string.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        for (int i = 0; i < s.size()/2; i++) {
            for (int j = s.size() - 1; j > s.size()/2; j--) {
                cout << "i, j = " << i << ", "<< j << endl;
                cout << "s[i] = " << s[i] << endl;
                cout << "s[j] = " << s[j] << endl;
                if (s[i] != s[j]) {
                    return false;
                }
            }
        }
        return true;
    }
};

int main(void) {
    Solution test;
    cout << test.isPalindrome(121) << endl;
}