#include <stdio.h>
int binary(int a[], int beg, int end, int val) {
  int mid;
  if (end >= beg) {
    mid = (beg + end) / 2;
    if (a[mid] == val) {
      return mid + 1;
    } else if (a[mid] < val) {
      return binary(a, mid + 1, end, val);
    } else {
      return binary(a, beg, mid - 1, val);
    }
  }
  return -1;
}
int main() {
  int a[] = {11, 14, 25, 30, 40, 41, 52, 57, 70};
  int val;
  printf("\n Enter number or value to be search - ");
  scanf("%d", &val);
  int n = sizeof(a) / sizeof(a[0]);
  int res = binary(a, 0, n - 1, val);
  printf("\n ***********BINARY SEARCH*********");
  printf("\nThe elements of the array are - ");
  for (int i = 0; i < n; i++)
    printf("\n%d ", a[i]);
  printf("\nElement to be searched is - %d", val);
  if (res == -1)
    printf("\nElement is not present in the array");
  else
    printf("\nElement is present at %d position of array", res);
  return 0;
}