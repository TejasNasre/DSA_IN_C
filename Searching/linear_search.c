#include <stdio.h>
int linear(int a[], int n, int val) {
  for (int i = 0; i < n; i++) {
    if (a[i] == val)
      return i + 1;
  }
  return -1;
}
int main() {
  int a[] = {70, 40, 30, 11, 57, 41, 25, 14, 52};
  int val;
  printf("Enter number or value to be searched - ");
  scanf("%d", &val);
  int n = sizeof(a) / sizeof(a[0]);
  int result = linear(a, n, val);
  printf("\n*******LINEAR SEARCH********");
  printf("\nThe elements of the array are - ");
  for (int i = 0; i < n; i++)
    printf("\n %d ", a[i]);
  printf("\nTargeted element to be searched is - %d", val);
  if (result == -1)
    printf("\nElement is not present in the array");
  else
    printf("\nElement is present at %d position of array", result);
  return 0;
}