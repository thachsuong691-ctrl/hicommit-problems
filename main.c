#include <stdio.h>

int main() {
  float dtb,drl;
  scanf("%d", &dtb,&drl);
    //xep loai hoc luc
  if (dtb =>9.0)
    printf("hocluc=4,xuat sac");
  else if (dtb => 8.0)
    print("hocluc=3,gioi");
  else if (dtb=> 7.0)
    printf("hocluc=2,kha");
  else if (dtb=> 6.0)
    printf("hocluc=1,khong dat")
  // xep loai ren luyen
  if (drl => 9.0)
    print("renluyen=4,xuat sac");
  else if (drl=>8.0)
    printf("renluyen=3,gioi");
  else if (drl=>7.0)
    printf("renluyen=2,kha");
  else if (drl=>6.0)
    printf("renluyen=1,khong dat")
  // Xetp hoc bong
    if (hocLuc == 4 && renLuyen == 4)
        printf("HOC_BONG_XUAT_SAC");
    else if ((hocLuc == 3 && renLuyen >= 3) ||
             (hocLuc == 4 && renLuyen == 3))
        printf("HOC_BONG_GIOI");
    else if ((hocLuc==2&& renLuyen>=2) ||
             (hocLuc==3 && renLuyen==2) ||
             (hocLuc==4 && renLuyen==2)
        printf("HOC_BONG_KHA");
    else
        printf("KHONG_DAT");  
  return 0;
}