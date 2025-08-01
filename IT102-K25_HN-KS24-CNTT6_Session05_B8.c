#include <stdio.h>

int main() {
    int cubic_meters;
    int cost = 0;

    printf("Nhap so met khoi tieu thu: ");
    scanf("%d", &cubic_meters);

    if (cubic_meters <= 10) {
        cost = cubic_meters * 6000;
    } else if (cubic_meters <= 20) {
        cost = 10 * 6000 + (cubic_meters - 10) * 7000;
    } else if (cubic_meters <= 30) {
        cost = 10 * 6000 + 10 * 7000 + (cubic_meters - 20) * 8500;
    } else {
        cost = 10 * 6000 + 10 * 7000 + 10 * 8500 + (cubic_meters - 30) * 10000;
    }

    printf("So tien phai tra: %d VND\n", cost);

    return 0;
}
