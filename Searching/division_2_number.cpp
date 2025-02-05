#include <iostream>
using namespace std;

int solve(int dividend, int divisor) {
  int s = 0;
  int e = abs(dividend);
  int ans = 0;
  int mid = s + (e - s) / 2;
  while (s <= e) {
    if (abs(mid * divisor) == abs(dividend)) {
      ans=mid;
      break;
    }
    if (abs(mid * divisor) > abs(dividend)) {
      // left search
      e = mid - 1;
    } else {
      // ans store
      ans = mid;
      // right search
      s = mid + 1;
    }
    mid = s + (e - s) / 2;
  }

  if ((divisor < 0 && dividend < 0) || (divisor > 0 && dividend > 0)) {
    return ans;
  } else {
    return -ans;
  }
}

int main() {
  int dividend = -22;
  int divisor = 7;

  int ans = solve(dividend, divisor);
  cout << "Ans is " << ans << endl;
}
  // Example 1:
  // dividend = -22, divisor = 7
  // ans = -3 (because -21 is closest to -22 among multiples of 7)
  // Explanation:
  // - We start with s = 0 and e = 22 (abs(dividend)).
  // - In the first iteration, mid = 11. 
  // - Since abs(11 * 7) > abs(-22), we move e to mid - 1 (e = 10).
  // - In the next iteration, mid = 5.
  // - Since abs(5 * 7) < abs(-22), we move s to mid + 1 (s = 6).
  // - This process continues until we reach mid = 3, where abs(3 * 7) = abs(-21) is the closest to abs(-22).
  // - The final answer is -3 because the signs of dividend and divisor are different.
  
  // Example 2:
  // dividend = 15, divisor = 3
  // ans = 5 (because 15 is exactly divisible by 3)
  // Explanation:
  // - We start with s = 0 and e = 15 (abs(dividend)).
  // - In the first iteration, mid = 7.
  // - Since abs(7 * 3) > abs(15), we move e to mid - 1 (e = 6).
  // - In the next iteration, mid = 3.
  // - Since abs(3 * 3) < abs(15), we move s to mid + 1 (s = 4).
  // - This process continues until we reach mid = 5, where abs(5 * 3) = abs(15) is the closest to abs(15).
  // - The final answer is 5 because the signs of dividend and divisor are the same.