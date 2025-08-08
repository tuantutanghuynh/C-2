#include<stdio.h>
#include<stdlib.h>

int main() {
    system("cls");
    int diemtb;
    printf("Nhap diem trung binh:");
    scanf("%d", &diemtb);
    if (diemtb >=8) {
       printf("Hoc sinh gioi\n");
    } else if(diemtb >=6) {
        printf("Hoc sinh kha\n");
    } else if(diemtb >=5) {
        printf("Hoc sinh trung binh\n");
    } else {
        printf("Hoc sinh yeu\n");
    }
    
    
return 0;

}
