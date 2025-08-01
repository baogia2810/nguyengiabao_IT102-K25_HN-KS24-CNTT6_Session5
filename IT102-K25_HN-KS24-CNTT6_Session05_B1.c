#include <stdio.h>

int main() {
   int a,b;
   printf("Moi nhap vao a,b:");
    scanf("%d %d",&a,&b);
  if (a>b) {
      printf("So a la so lon hon\n");
  }else if (a<b){
      printf("So b la so lon hon\n");
  }else {
      printf("So a bang so b\n");
  }
    return 0;
}