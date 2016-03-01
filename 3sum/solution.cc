#include <vector>
#include <algorithm>

using namespace std;

class Solution {
 public:
  vector<vector<int> > threeSum(vector<int> &num) {
    vector<vector<int> > result;

    sort(num.begin(), num.end());

    for (size_t i = 0; i < num.size() && num[i] <= 0; i++) {
      int target = -num[i];
      int front = i + 1;
      int back = num.size() - 1;

      while (front < back) {
        int sum = num[front] + num[back];
        if (sum < target) {
          ++front;
        } else if (sum > target) {
          --back;
        } else {
          vector<int> triplet{
              num[i], num[front], num[back],
          };
          result.push_back(triplet);
          while (front < back && num[front] == triplet[1]) ++front;
          while (front < back && num[back] == triplet[2]) --back;
        }
      }
      while (i + 1 < num.size() && num[i + 1] == num[i]) ++i;
    }

    return result;
  }
};