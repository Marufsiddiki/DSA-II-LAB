#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    int countSubarrays(vector<int>& nums, int target) {
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            int countTarget = 0;
            for (int j = i; j < n; j++) {
                if (nums[j] == target) {
                    countTarget++;
                }

                int len = j - i + 1;
                if (countTarget > len / 2) {
                    ans++;
                }
            }
        }
        return ans;
    }
};
int main() {
    Solution sol;

    vector<int> nums1 = {1, 2, 2, 3};
    int target1 = 2;
    cout << "Output: " << sol.countSubarrays(nums1, target1) << endl;

    return 0;
}
