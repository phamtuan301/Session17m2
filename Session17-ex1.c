#include <stdio.h>
#include <stdlib.h>
void menu() {
    printf("\nMENU\n");
    printf("1. Nhap vao so phan tu va tung phan tu\n");
    printf("2. Hi?n thi cac phan tu trong mang\n");
    printf("3. Tinh do dai mang\n");
    printf("4. Tinh tong cac phan tu trong mang\n");
    printf("5. Hien thi phan tu lon nhat\n");
    printf("6. Thoat\n");
    printf("Lua chon cua ban: ");
}
void nhapmang(int **arr, int *n) {
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", n);
    *arr = (int *)malloc(*n * sizeof(int)); 
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < *n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &(*arr)[i]);
    }
}
void hienthimang(int *arr, int n) {
    if (n == 0) {
        printf("Mang khong chua phan tu nao\n");
    } else {
        printf("Cac phan tu trong mang la: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}
int length(int n) {
    return n;
}
int sum(int *arr, int n) {
    int cal = 0;
    for (int i = 0; i < n; i++) {
        cal += arr[i];
    }
    return cal;
}
int maxfind(int *arr, int n) {
    if (n == 0)
	return -1; 
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int *arr = NULL;  
    int n = 0;       
    int choice;
    do {
        menu();  
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                nhapmang(&arr, &n);
                break;
            case 2:
                hienthimang(arr, n);
                break;
            case 3:
                printf("Do dai mang la: %d\n", length(n));
                break;
            case 4:
                printf("Tong cac phan tu trong mang la: %d\n", sum(arr, n));
                break;
            case 5:
                {
                    int max = maxfind(arr, n);
                    if (max == -1)
                        printf("Mang khong chua gia tri nao\n");
                    else
                        printf("Phan tu lon nhat trong mang la: %d\n", max);
                }
                break;
            case 6:
                printf("Thoat chuong trinh\n");
                break;
            default:
                printf("Lua chon khong hop le vui long chon lai\n");
        }
    } while (choice != 6);
    free(arr);
    return 0;
}
