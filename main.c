#include <stdio.h>

int main() {
  int n;
  printf("nhap mot so nguyen: ");
  if (scanf("%d", &n) !=1) {
    printf("Du lieu nhap khong hop le!\n");
    return 1;
  }
  if (n % 2==0) {
    pritnf("%d la so chan.\n",n);
  } slse {
    printf("%d la so le.\n",n);
  }
  return 0;
}