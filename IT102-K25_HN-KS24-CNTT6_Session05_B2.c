#include<stdio.h>
int main() {
    float num;
    printf("Moi ban nhap vao diem trung binh tu(0-10):");
    scanf("%f",&num);
    if(num<0||num>10) {
        printf("Diem khong hop le\n");
        return 0;
    }
    if(num>=8) {
        printf("Xep loai gioi\n");
    }else if (num>=6.5) {
        printf("Xep loai kha\n");
    }else if (num>=5) {
        printf("Xep loai trung binh\n");
    }else {
        printf("Xep loai yeu\n");
    }
    return 0;
}