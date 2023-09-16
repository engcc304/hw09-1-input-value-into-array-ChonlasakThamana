/*
    จงเขียนโปรแกรมภาษาซีเพื่อเก็บข้อมูลเข้าไปในอาเรย์จำนวน N ค่า และแสดงผลลัพธ์ออกมาบนหน้าจอ (โดยหากกรอก -1 ให้หยุดกรอกค่าและแสดงผลทันที)
    
    Test case:
        Input [0] : 
            1
        Input [1] : 
            1
        Input [2] : 
            3
        Input [3] : 
            9
        Input [4] : 
            8
        Input [5] : 
            2
        Input [6] : 
            7
        Input [7] : 
            8
        Input [8] : 
            -1
    Output:
        Index = 0 1 2 3 4 5 6 7
        Array = 1 1 3 9 8 2 7 8

*/
#include <stdio.h>

int main() {
    int N, i;

    // รับจำนวน N ค่าที่ต้องการใส่ในอาเรย์
    printf("Enter the number of elements (N): ");
    scanf("%d", &N);

    // ตรวจสอบว่า N มีค่ามากกว่า 0 หรือไม่
    if (N <= 0) {
        printf("N should be a positive integer.\n");
        return 1; // ออกจากโปรแกรมด้วยสถานะข้อผิดพลาด
    }

    // ประกาศอาเรย์และกำหนดขนาดของอาเรย์ตาม N
    int array[N];

    // รับค่าเข้าสู่อาเรย์
    printf("Enter the elements (Enter -1 to stop):\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &array[i]);
        if (array[i] == -1) {
            break; // หยุดรับค่าหากมีการป้อน -1
        }
    }

    // แสดงผลลัพธ์
    printf("Index = ");
    for (i = 0; i < N; i++) {
        printf("%d ", i);
    }
    printf("\nArray = ");
    for (i = 0; i < N; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0; // ออกจากโปรแกรมด้วยสถานะปกติ
}
