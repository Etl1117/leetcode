#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    for (int i = 0; i < nums.size(); i++) {
      for (int j = i + 1; j < nums.size(); j++) {
        if (nums[i] + nums[j] == target) {
          // cout << i << " " << j << "\n";
          return {i, j};
        }
      }
    }
    return {};
  }
};

int main(void) {
  Solution test;
  int target;
  int input;
  vector<int> nums;

  cin >> target;

  while (cin >> input) {
    nums.push_back(input);
  }

  test.twoSum(nums, target); 
}