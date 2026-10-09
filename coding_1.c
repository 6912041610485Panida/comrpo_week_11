#include <stdio.h>

// ประกาศ Prototype ของฟังก์ชัน
void inputAndShow();

int main() {
    // เรียกใช้งานฟังก์ชัน inputAndShow จาก main
    inputAndShow();
    return 0;
}

// นิยามฟังก์ชันรับและแสดงผลคะแนน
void inputAndShow() {
    int math, physics, chemistry;

    printf("Enter Math score: ");
    scanf("%d", &math);

    printf("Enter Physics score: ");
    scanf("%d", &physics);

    printf("Enter Chemistry score: ");
    scanf("%d", &chemistry);

    printf("\n--- Scores ---\n");
    printf("Math: %d\n", math);
    printf("Physics: %d\n", physics);
    printf("Chemistry: %d\n", chemistry);
}