#include <cassert>
#include <iostream>

class Solution {
 public:
  int climbStairs(int n) {
    int one = 1, two = 1;
    for (int i = n - 1; 0 < i; --i) {
      int tmp = one;
      one = one + two;
      two = tmp;
    }

    return one;
  }
};

void TestClimbStairs() {
  Solution s;
  assert(1 == s.climbStairs(1));
  assert(2 == s.climbStairs(2));
  assert(3 == s.climbStairs(3));
  assert(5 == s.climbStairs(4));
  assert(8 == s.climbStairs(5));
}

int main() {
  TestClimbStairs();
  std::cout << "Ok!" << std::endl;
  return 0;
}
