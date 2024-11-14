bool searchMatrix(int** matrix, int matrix_size, int* matrix_col_size, int target) {
  int left = 0, right = matrix_size - 1;

  while (left <= right) {
    int half = left + (right - left) / 2;

    if (matrix[half][0] <= target && matrix[half][matrix_col_size[half] - 1] >= target) {
      int top = 0, bottom = matrix_col_size[half] - 1;
      
      while (top <= bottom) {
        int col_half = top + (bottom - top) / 2;

        if (matrix[half][col_half] == target) {
          return true;
        } else if (matrix[half][col_half] < target) {
          top = col_half + 1;
        } else {
          bottom = col_half - 1;
        }
      }

      return false;
    } else if (matrix[half][0] < target) {
      left = half + 1;
    } else {
      right = half - 1;
    }
  }

  return false;
}
