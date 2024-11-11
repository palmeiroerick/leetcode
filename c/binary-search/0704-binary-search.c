int search(int* nums, int size, int target) {
  int left = 0, right = size - 1;

  while (left <= right) {
    int half = left + (right - left) / 2;

    if (nums[half] == target) {
      return half;
    } else if (nums[half] < target) {
      left = half + 1;
    } else {
      right = half - 1;
    }
  } 

  return -1;
}
