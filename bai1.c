/******************************************************************************
 * Họ và tên: [Huỳnh Việt Tiến]
 * MSSV:      [PS47459]
 * Lớp:       [CS21302]
 *****************************************************************************/

// BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH TÍNH HỌC LỰC  
// Input: Nhập vào điểm của sinh viên (0-10) 
// Output: Hiển thị ra màn hình học lực của sinh viên 
// Biết rằng: 
// Học lực xuất sắc: Điểm >= 9 
// Học lực giỏi: 9 > điểm >= 8 
// Học lực khá: 8 > điểm >= 6.5 
// Học lực trung bình: 6.5 > điểm >= 5 
// Học lực yếu: 5 > điểm >= 3.5 
// Học lực kém: 3.5 > điểm

#include <stdio.h>

int main() {
    // Khai báo biến
    float diem;

    // Nhập dữ liệu
    // Nhập điểm của sinh viên trong khoảng từ 0 đến 10 [cite: 12]
    printf("Nhap vao diem cua sinh vien (0-10): ");
    scanf("%f", &diem);

    // Xử lý, tính toán VÀ Hiển thị kết quả
    // Kiểm tra tính hợp lệ của điểm trước khi xét học lực
    if (diem < 0 || diem > 10) {
        printf("Loi: Diem nhap vao khong hop le! Vui long nhap tu 0 den 10.\n");
    } else {
        // Phân loại học lực dựa trên thang điểm [cite: 15, 16, 17, 18, 20, 21]
        if (diem >= 9) {
            printf("Hoc luc: Xuat sac\n"); // 
        } else if (diem >= 8) {
            printf("Hoc luc: Gioi\n"); // [cite: 16]
        } else if (diem >= 6.5) {
            printf("Hoc luc: Kha\n"); // [cite: 17]
        } else if (diem >= 5) {
            printf("Hoc luc: Trung binh\n"); // [cite: 18]
        } else if (diem >= 3.5) {
            printf("Hoc luc: Yeu\n"); // [cite: 20]
        } else {
            printf("Hoc luc: Kem\n"); // [cite: 21]
        }
    }

    return 0;
}