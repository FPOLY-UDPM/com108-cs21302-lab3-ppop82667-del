/******************************************************************************
 * Họ và tên: [Huỳnh Việt Tiến]
 * MSSV:      [PS47459]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH TIỀN ĐIỆN 
//  Input: Nhập vào số điện tiêu thụ hàng tháng 
//  Output: Hiển thị số tiền cần phải đóng
 
#include <stdio.h>

int main() {
    // Khai báo biến
    // soKwh: số điện tiêu thụ; tien: tổng số tiền phải trả
    float soKwh, tien;

    // Nhập dữ liệu
    // Input: Nhập vào số điện tiêu thụ hàng tháng [cite: 48]
    printf("--- CHUONG TRINH TINH TIEN DIEN ---\n");
    printf("Nhap vao so kWh tieu thu: ");
    scanf("%f", &soKwh);

    // Xử lý, tính toán VÀ Hiển thị kết quả
    // Tính toán dựa trên các bậc giá bán lẻ điện [cite: 50, 51]
    if (soKwh <= 50) {
        // Bậc 1: Cho kWh từ 0 - 50 
        tien = soKwh * 1.678;
    } else if (soKwh <= 100) {
        // Bậc 2: Cho kWh từ 51 - 100 
        tien = 50 * 1.678 + (soKwh - 50) * 1.734;
    } else if (soKwh <= 200) {
        // Bậc 3: Cho kWh từ 101 - 200 
        tien = 50 * 1.678 + 50 * 1.734 + (soKwh - 100) * 2.014;
    } else if (soKwh <= 300) {
        // Bậc 4: Cho kWh từ 201 - 300 
        tien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + (soKwh - 200) * 2.536;
    } else if (soKwh <= 400) {
        // Bậc 5: Cho kWh từ 301 - 400 
        tien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + (soKwh - 300) * 2.834;
    } else {
        // Bậc 6: Cho kWh từ 401 trở lên 
        tien = 50 * 1.678 + 50 * 1.734 + 100 * 2.014 + 100 * 2.536 + 100 * 2.834 + (soKwh - 400) * 2.927;
    }

    // Output: Hiển thị số tiền cần phải đóng [cite: 49]
    printf("So tien dien can thanh toan: %.3f dong\n", tien);

    return 0;
}