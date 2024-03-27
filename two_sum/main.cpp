#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> nums;
  int input;
  int target;
  size_t a = -1;
  size_t b = -1;

  cin >> target;

  while (cin >> input) {
    nums.push_back(input);
  }


  for (size_t i = 0; i < nums.size(); i++) {
    int x = nums[i];
    for (size_t j = 0; j < nums.size(); j++) {
      int y = nums[j];
      if (x + y == target) {
        a = i;
        b = j;
        break;
      }
    }
  }

  cout << "[" << a << "," << b << "]\n";

}