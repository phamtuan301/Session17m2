#include <stdio.h>
#include <ctype.h>
#include <string.h>
int countLetters(char *str) {
    int count = 0;
    while (*str) {
        if (isalpha(*str)) {
            count++;
        }
        str++;
    }
    return count;
}
int countDigits(char *str) {
    int count = 0;
    while (*str) {
        if (isdigit(*str)) {
            count++;
        }
        str++;
    }
    return count;
}
int countSpecialChars(char *str) {
    int count = 0;
    while (*str) {
        if (!isalnum(*str) && !isspace(*str)) {
            count++;
        }
        str++;
    }
    return count;
}
int main() {
    char str[100];
    int choice;
    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai trong chuoi\n");
        printf("4. Dem so luong chu so trong chuoi\n");
        printf("5. Dem so luong ky tu dac biet trong chuoi\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                getchar();  
                printf("Nhap vao chuoi: ");
                fgets(str, sizeof(str), stdin);
                str[strcspn(str, "\n")] = '\0'; 
                break;
            case 2:
                printf("Chuoi ban da nhap: %s\n", str);
                break;
            case 3:
                printf("So luong chu cai trong chuoi: %d\n", countLetters(str));
                break;
            case 4:
                printf("So luong chu so trong chuoi: %d\n", countDigits(str));
                break;
            case 5:
                printf("So luong ky tu dac biet trong chuoi: %d\n", countSpecialChars(str));
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                return 0;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    }
    return 0;
}