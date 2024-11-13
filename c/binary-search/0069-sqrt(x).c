int mySqrt(int x) {
  if (x == 1) return 1;

  long left = 0, right = x / 2 + 1;

  while (!(left * left <= x && (left + 1) * (left + 1) > x)) {
    long half = left + (right - left) / 2;

    if (half * half == x) {
      return half;
    } else if (half * half < x) {
      left = half + 1;
    } else if (half * half > x) {
      right = half - 1;
    }
  }

  return left;
}
