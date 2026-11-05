#include <stdio.h>

int main() {
  float dtb,drl;
  scanf("%d", &dtb,&drl);
    //xep loai hoc luc
  if (dtb =9.0)
    printf("hocluc=4,xuat sac");
  else if (dtb =8.0)
    printf("hocluc=3,gioi");
  else if (dtb= 7.0)
    printf("hocluc=2,kha");
  else if (dtb= 6.0)
    printf("hocluc=1,khong dat");
  // xep loai ren luyen
  if (drl = 9.0)
    printf("renluyen=4,xuat sac");
  else if (drl=8.0)
    printf("renluyen=3,gioi");
  else if (drl=7.0)
    printf("renluyen=2,kha");
  else if (drl=6.0)
    printf("renluyen=1,khong dat");
  // Xep hoc bong
    if (dtb==4 && drl==4)
        printf("HOC_BONG_XUAT_SAC");
    else if ((dtb==3 && drl>=3)) 
             ((dtb==4 && drl==3));
        printf("HOC_BONG_GIOI");
    else if (dtb==2&& drl>=2)
             (dtb==3 && drl==2) ;
             (dtb==4 && drl==2);
        printf("HOC_BONG_KHA");
    else if
        printf("KHONG_DAT");  
  return 0;
}