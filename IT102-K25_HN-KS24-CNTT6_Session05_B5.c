#include<stdio.h>
int main() {
    int age;
    printf("Moi ban nhap tuoi:");
    scanf("%d",&age);
    if(age<6){
        printf("Hanh khach duoc mien phi\n");
    }else if(age>=6&&age<=18) {
        int dola=20000-10000;
        printf("So tien hanh khach phai tra la %d VND\n",dola);
    }else if (age>=19&&age<=60) {
        printf("So tien hanh khach phai tra la 20000 VND\n");
    }else{
        int money=20000 - 6000;
        printf("So tien hanh khach phai tra la %d VND\n",money);
    }
    return 0;
}