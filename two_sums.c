/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
#include <stdlib.h>
int *twoSum(int *nums, int numsSize, int target, int *returnSize) {
  *returnSize = 2;
  int *ans = malloc(2 * sizeof(int));
  for (int i = 0; i <= numsSize - 1; i++) {
    for (int j = i + 1; j <= numsSize - 1; j++) {
      int result = nums[i] + nums[j];
      if (result == target) {
        ans[0] = i;
        ans[1] = j;
        return ans;
      }
    }
  }
  *returnSize = 0;
  return NULL;
}
