#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

enum {
    black, dark_blue, dark_green, dark_sky, dark_red, dark_purple, dark_yellow, gray, dark_gray, blue, green, sky, red, para, yellow, white
};

// 함수 선언
void init();
void changeConsoleColor(unsigned char color); // Console 글자 색상 변경
void getInput(char* str, size_t size, const char* prompt); // 암 / 복호화할 문자열 입력
void encrypt(char* str, const char* key);
void decrypt(char* str, const char* key);
void encryptChar(char* ch, char key_ch);
void decryptChar(char* ch, char key_ch);

int main() {
    int option = 0;
    char str[50] = { 0 };
    char key[16] = { 0 };

    init();
    changeConsoleColor(yellow);
    printf("=================================================================================================================================\n");
    changeConsoleColor(green);
    printf("          ####    ####     #######  ##   ##   #######  ######   #######           ####   ######    ##   ##   #######  ######\n");
    printf("##  ##     ##     ##  ##    ###  ##  ##   #    ##  ##   ##   #   ##                ##    ##   #    ##   ##   ##  ##   ##  ##   \n");
    printf("##  ##     ##     ##         ## #    #### ##   ## #     ##  ##   ## #     ####     ##    ##  ##    ##   ##   ## #     ##  ##\n");
    printf("##  ##     ##     ##         ####    ## ####   ####     #####    ####    ##  ##    ##    #####     #######   ####     #####\n");
    printf("##  ##     ##     ##  ###    ## #    ##  ###   ## #     ## ##    ## #    ##        ##    ##        ##   ##   ## #     ## ##\n");
    printf(" ####      ##      ##  ##    ##   #  ##   ##   ##   #   ##  ##   ##   #  ##  ##    ##    ##        ##   ##   ##   #   ##  ##\n");
    printf("  ##	  ####      #####   #######  ##   ##  #######  #### ##  #######   ####    ####   ##        ##   ##   #######  ###  ##\n");
    changeConsoleColor(yellow);
    printf("=================================================================================================================================\n");
    changeConsoleColor(white); printf("\n");


    getInput(str, sizeof(str), "암 / 복호화할 텍스트를 입력해주세요.\n >> ");
    printf("\n옵션을 선택해주세요.\n1. 암호화\n2. 복호화\n >> ");
    scanf_s("%d", &option);
    while (getchar() != '\n'); // 입력 버퍼 비우기
    getInput(key, sizeof(key), "\n암호키를 입력해주세요\n >> ");


    switch (option) {
    case 1:
        encrypt(str, key);
        break;
    case 2:
        decrypt(str, key);
        break;
    default:
        printf("올바른 값을 입력해주세요.");
        exit(0);
    }

    printf("\n암호화 또는 복호화된 결과 출력: %s\n", str);
    int a; printf("창을 닫으려면 아무 값을 입력하고, 엔터를 눌러주세요."); scanf_s("%d", &a);
    return 0;
}

void init() {
    system("mode con cols=130 lines=50");
}

void changeConsoleColor(unsigned char color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void getInput(char* str, size_t size, const char* prompt) {
    printf("%s", prompt);
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0'; // fgets로 읽은 후 개행 문자 제거
}

void encrypt(char* str, const char* key) {
    long long int count;
    printf("\nn중 암호화 >> 1 이상의 n 값을 입력해주세요. (권장 1~2회)\n >> ");
    scanf_s("%lld", &count);

    if (count < 1) {
        printf("올바른 값을 입력해주세요.");
        exit(0);
    }
    if (count > 4) {
        changeConsoleColor(red);
        printf("                    #####             ####    ##   ##    ####     ##\n");
        printf("           ####     ##  ##  ###  ##    ##     ###  ##   ##  ##   ####\n");
        printf(" ##   ##  ##  ##    ##  ##  #### ##    ##     #### ##  ##        ####\n");
        printf(" ## # ##  ##  ##    #####   ## ####    ##     ## ####  ##         ##\n");
        printf(" #######  ######    ## ##   ##  ###    ##     ##  ###  ##  ###    ##\n");
        printf(" ### ###  ##  ##    ##  ##  ##   ##    ##     ##   ##   ##  ##\n");
        printf("  ## ##   ##  ##   #### ##  ##   ##   ####    ##   ##    #####    ##\n\n");
        printf("과도한 다중 암호화는 암호문 반환 지연을 초래할 수 있습니다.\n\n");
        changeConsoleColor(white);
    }
    printf("암호화 중...");
    int str_size = strlen(str);
    int key_size = strlen(key);
    for (int loop = 0; loop < count; loop++) {
        for (int i = 0; i < str_size; i++) {
            char key_ch = key[i % key_size];
            encryptChar(&str[i], key_ch);
        }
    }
}

void decrypt(char* str, const char* key) {
    long long int count;
    changeConsoleColor(red);
    printf("\n이 옵션은 다중 암호화를 진행한 경우에만 설정해주세요.\n다중 암호화를 진행하지 않았을 경우, 1을 입력하세요.\n\n");
    changeConsoleColor(white);
    printf("n중 복호화 >> 1 이상의 n 값을 입력해주세요. (권장 1~2회)\n >> ");
    scanf_s("%lld", &count);

    if (count < 1) {
        printf("올바른 값을 입력해주세요.");
        exit(0);
    }
    if (count > 4) {
        changeConsoleColor(red);
        printf("                    #####             ####    ##   ##    ####     ##\n");
        printf("           ####     ##  ##  ###  ##    ##     ###  ##   ##  ##   ####\n");
        printf(" ##   ##  ##  ##    ##  ##  #### ##    ##     #### ##  ##        ####\n");
        printf(" ## # ##  ##  ##    #####   ## ####    ##     ## ####  ##         ##\n");
        printf(" #######  ######    ## ##   ##  ###    ##     ##  ###  ##  ###    ##\n");
        printf(" ### ###  ##  ##    ##  ##  ##   ##    ##     ##   ##   ##  ##\n");
        printf("  ## ##   ##  ##   #### ##  ##   ##   ####    ##   ##    #####    ##\n\n");
        printf("과도한 다중 복호화는 평문 반환 지연을 초래할 수 있습니다.\n\n");
        changeConsoleColor(white);
    }
    printf("복호화 중...");
    int str_size = strlen(str);
    int key_size = strlen(key);
    for (int loop = 0; loop < count; loop++) {
        for (int i = 0; i < str_size; i++) {
            char key_ch = key[i % key_size];
            decryptChar(&str[i], key_ch);
        }
    }
}

void encryptChar(char* ch, char key_ch) {
    if ((*ch >= 'a') && (*ch <= 'z')) {
        *ch -= 'a';
        key_ch -= 'a';

        *ch = (*ch + key_ch) % 26;
        *ch += 'a';
    }
    else if ((*ch >= 'A') && (*ch <= 'Z')) {
        *ch -= 'A';
        key_ch -= 'A';

        *ch = (*ch + key_ch) % 26;
        *ch += 'A';
    }
}

void decryptChar(char* ch, char key_ch) {
    if ((*ch >= 'a') && (*ch <= 'z')) {
        *ch -= 'a';
        key_ch -= 'a';

        *ch = (*ch - key_ch + 26) % 26;
        *ch += 'a';
    }
    else if ((*ch >= 'A') && (*ch <= 'Z')) {
        *ch -= 'A';
        key_ch -= 'A';

        *ch = (*ch - key_ch + 26) % 26;
        *ch += 'A';
    }
}
