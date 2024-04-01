#include <iostream>
#include <utility>
#include <string>
#include <vector>
using namespace std;

class Solution {
public:
    int romanToInt(string s) {

        vector<pair <char, int>> numbers;

        pair <char, int> one ('I', 1);
        pair <char, int> five ('V', 5);
        pair <char, int> ten ('X', 10);
        pair <char, int> fifty ('L', 50);
        pair <char, int> hundred ('C', 100);
        pair <char, int> five_hundred ('D', 500);
        pair <char, int> thousand ('M', 1000);

        numbers.push_back(thousand);
        numbers.push_back(five_hundred);
        numbers.push_back(hundred);
        numbers.push_back(fifty);
        numbers.push_back(ten);
        numbers.push_back(five);
        numbers.push_back(one);

        int answer = 0;
        pair <char, int> current_pair;
        pair <char, int> last_pair;
        for (int i = 0; i < s.size(); i++) {
            for (int j = 0; j < numbers.size(); j++) {
                current_pair = numbers[j];
                if (current_pair.first == s[i]) {
                    if (last_pair.second < current_pair.second && i != 0) {                // IV
                        answer -= last_pair.second;                                        // last pair = I, current_pair = V, answer = 4
                        answer += current_pair.second - last_pair.second;
                    }
                    else {
                        answer += current_pair.second;
                        last_pair = current_pair;
                    }
                }

            }
        }
        return answer;
    }
};

int main() {
    Solution test;
    cout << test.romanToInt("I") << endl;
    cout << test.romanToInt("V") << endl;
    cout << test.romanToInt("X") << endl;
    cout << test.romanToInt("L") << endl;
    cout << test.romanToInt("C") << endl;
    cout << test.romanToInt("D") << endl;
    cout << test.romanToInt("M") << endl;
    cout << test.romanToInt("IV") << endl;
    cout << test.romanToInt("CM") << endl;
    cout << test.romanToInt("MCMXCIV") << endl;
    return 0;
}