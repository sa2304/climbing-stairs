#include <cassert>
#include <iostream>

class Solution {
 public:
  int climbStairs(int n) {
    // FIXME
    return n;
  }
};

void TestClimbStairs() {
  Solution s;
  assert(1 == s.climbStairs(1));
  assert(2 == s.climbStairs(2));
  assert(3 == s.climbStairs(3));
  assert(5 == s.climbStairs(4));
}

int main() {
  TestClimbStairs();
  std::cout << "Ok!" << std::endl;
  return 0;
}
