/******************************************************************************
 * Họ và tên: [Huỳnh Việt Tiến]
 * MSSV:      [PS47459]
 * Lớp:       [cs21302]
 *****************************************************************************/

//  BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH GIẢI PHƯƠNG TRÌNH  
// 2.2 BẬC 2 
// Phương trình có dạng: ax2 + bx + c = 0 
// Input: Nhập vào từ bàn phím: a, b, c 
// Output: Nghiệm của phương trình 
// Biết rằng: 
// Nếu a == 0, phương trình thành bx + c = 0  
// Ngược lại nếu a != 0 
//  Tính delta 
//  Nếu delta < 0: Phương trình vô nghiệm 
//  Nếu delta == 0: Phương trình có nghiệm kép x = -b/(2*a) 
//  Nếu delta > 0: Phương trình có 2 nghiệm riêng biệt  
// o X1 = (-b + căn(delta))/(2*a) 
// o X2 = (-b – căn(delta))/(2*a)

#include <stdio.h>
#include <math.h>

int main() {
    // Khai báo biến
    float a, b, c, delta, x1, x2;

    // Nhập dữ liệu
    printf("Nhap a: "); scanf("%f", &a);
    printf("Nhap b: "); scanf("%f", &b);
    printf("Nhap c: "); scanf("%f", &c);

    // Xử lý, tính toán VÀ Hiển thị kết quả
    if (a == 0) {
        // Neu a == 0, phuong trinh tro thanh bx + c = 0
        if (b == 0) {
            if (c == 0) printf("Phuong trinh co vo so nghiem\n");
            else printf("Phuong trinh vo nghiem\n");
        } else {
            printf("Phuong trinh co nghiem x = %.2f\n", -c / b);
        }
    } else {
        // Tinh delta
        delta = b * b - 4 * a * c;

        if (delta < 0) {
            // Neu delta < 0: Phuong trinh vo nghiem
            printf("Phuong trinh vo nghiem\n");
        } else if (delta == 0) {
            // Neu delta == 0: Nghiem kep x = -b/(2*a)
            x1 = -b / (2 * a);
            printf("Phuong trinh co nghiem kep x = %.2f\n", x1);
        } else {
            // Neu delta > 0: Co 2 nghiem rieng biet
            x1 = (-b + sqrt(delta)) / (2 * a);
            x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co 2 nghiem phan biet: x1 = %.2f va x2 = %.2f\n", x1, x2);
        }
    }

    return 0;
}