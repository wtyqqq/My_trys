#include <stdio.h>
void bubble_sort(int arr[], int len);
int main(void) {
  int arr[] = {1, 3, 6, 3, 1, 7, 4, 32, 213, 68, 324, 123};
  int len = (int) sizeof(arr) / sizeof(*arr);
  bubble_sort(arr, len);
  for (int i = 0; i < len; ++i) {
    printf("%d ", arr[i]);
  }
  return 0;
}
void bubble_sort(int arr[], int len) {
  int i, j, temp;
  for (int k = 0; k < len - 1; ++k) {
    for (int l = 0; l < len - 1 - k; ++l) {
      if (arr[l] > arr[l + 1]) {
        temp = arr[l];
        arr[l] = arr[l + 1];
        arr[l + 1] = temp;
      }
    }
  }
}