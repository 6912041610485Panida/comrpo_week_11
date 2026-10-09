#include <stdio.h>

// ประกาศ Prototype ของฟังก์ชัน
float average(int a, int b, int c);

int main() {
    int math, physics, chemistry;

    // รับค่าคะแนน 3 วิชา
    printf("Enter Math score: ");
    scanf("%d", &math);

    printf("Enter Physics score: ");
    scanf("%d", &physics);

    printf("Enter Chemistry score: ");
    scanf("%d", &chemistry);

    // เรียกใช้ฟังก์ชันคำนวณค่าเฉลี่ย
    float avg = average(math, physics, chemistry);

    // แสดงผลคะแนนและค่าเฉลี่ย
    printf("\n--- Results ---\n");
    printf("Math: %d\n", math);
    printf("Physics: %d\n", physics);
    printf("Chemistry: %d\n", chemistry);
    printf("Average Score: %.2f\n", avg);

    return 0;
}

// นิยามฟังก์ชันคำนวณค่าเฉลี่ยและคืนค่าผลลัพธ์
float average(int a, int b, int c) {
    return (a + b + c) / 3.0;
}