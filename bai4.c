/******************************************************************************
 * Họ và tên: [Huỳnh Việt Tiến]
 * MSSV:      [PS47459]
 * Lớp:       [CS31302]
 *****************************************************************************/

//  BÀI 4: XÂY DỰNG MENU CHƯƠNG TRÌNH CHO 3 BÀI TẬP TRÊN 
//  Sử dụng lệnh Switch-case để xây dựng menu chương trình cho 3 bài tập trên 

#include <stdio.h>
#include <stdlib.h>

int main() {
    // Khai báo biến
    int chon;

    // Xử lý, tính toán VÀ Hiển thị kết quả
    // Sử dụng vòng lặp do-while để menu hiển thị lại sau khi chạy xong một bài
    do {
        printf("\n++++++ MENU LAB 3 ++++++\n");
        printf("1. Tinh hoc luc\n");
        printf("2. Giai phuong trinh\n");
        printf("3. Tinh tien dien\n");
        printf("0. Thoat\n");
        printf("++++++++++++++++++++++++\n");
        
        // Nhập dữ liệu: Lựa chọn của người dùng
        printf("Moi ban chon bai tap (0-3): ");
        scanf("%d", &chon);

        // Sử dụng cấu trúc switch-case để điều hướng [cite: 10, 52]
        switch (chon) {
            case 1:
                printf("Ban da chon: Tinh hoc luc\n");
                // Code bai 1 se duoc goi o day
                break;
            case 2:
                printf("Ban da chon: Giai phuong trinh\n");
                // Code bai 2 se duoc goi o day
                break;
            case 3:
                printf("Ban da chon: Tinh tien dien\n");
                // Code bai 3 se duoc goi o day
                break;
            case 0:
                printf("Dang thoat chuong trinh...\n");
                exit(0);
            default:
                printf("Lua chon khong hop le! Vui long chon lai.\n");
        }
    } while (chon != 0);

    return 0;
}