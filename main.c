#include <stdio.h>

int main() {
  int loai;
  scanf("%d",&loai);
  switch (loai){
    case 1:
      printf("LOAI_XUAT_SAC");
      break;
    case 2:
      printf("LOAI_GIOI");
      break;
    case 3:
      printf("LOAI_KHA");
      break;
    case 4:
      printf("LOAI_TRUNG_BINH");
      break;
    defaut:
      printf("KHONG_XEP_LOAI");
  }
  return 0;
}