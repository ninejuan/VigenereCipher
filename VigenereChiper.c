//#include <stdio.h>
//#include <stdlib.h>
//#include <Windows.h>
//#include <string.h>
//

//
//void init() {
//	system("mode con cols=130 lines=50");
//	SetConsoleTitle("Vigenere Chiper En/Decryption Tools");
//}
//
//void changeConsoleColor(unsigned color) {
//	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
//}
//
////void encrypt() {
////	char ch[100], key[100], res[100]; int enc_num; // 암호화할 횟수
////	printf("암호화할 텍스트를 입력해주세요. (영문 100자, 한글 50자 이내)\n >> ");
////	gets_s(ch, sizeof(ch));
////	fflush(stdin);
////
////	printf("암호키를 입력해주세요. (영문 100자 이내, 한글 금지)\n >> ");
////	scanf_s("%s", &key, sizeof(key));
////	while (getchar() != '\n');
////
////	printf("n중 암호화 >> 1 이상의 n 값을 입력해주세요. (권장 1~2회)\n >> ");
////	scanf_s("%d", &enc_num);
////
////	if (enc_num < 1) {
////		printf("올바른 값을 입력해주세요.");
////		exit(0);
////	}
////
////	if (enc_num > 4) {
////		changeConsoleColor(red);
////		printf("		            #####   ######     ##     ##   ##    ####     ##\n");
////		printf("           ####     ##  ##  ###  ##    ##     ###  ##   ##  ##   ####\n");
////		printf(" ##   ##  ##  ##    ##  ##  #### ##    ##     #### ##  ##        ####\n");
////		printf(" ## # ##  ##  ##    #####   ## ####    ##     ## ####  ##         ##\n");
////		printf(" #######  ######    ## ##   ##  ###    ##     ##  ###  ##  ###    ##");
////		printf(" #######  ##  ##    ##  ##  ##   ##    ##     ##   ##   ##  ##\n");
////		printf("  ## ##   ##  ##   #### ##  ##   ##   ####    ##   ##    #####    ##\n\n");
////		printf("과도한 다중 암호화는 암호문 반환 지연을 초래할 수 있습니다.\n\n");
////		changeConsoleColor(white);
////	}
////	long int ch_len = strlen(ch);
////	long int key_len = strlen(key);
////	for (int loop = 0; loop < enc_num; loop++) {
////		for (int i = 0; i < ch_len; i++) {
////			int temp = i % key_len; 
////			if ((ch[i] >= 'a') && (ch[i] <= 'z'))
////			{
////				ch[i] -= 'a';
////				key[temp] -= 'a';
////
////				if ((ch[i] + key[temp]) < 0)
////				{
////					ch[i] += 26;
////				}
////
////				ch[i] = (ch[i] + key[temp]) % 26;
////				ch[i] += 'a';
////				key[temp] += 'a';
////			}
////			if ((ch[i] >= 'A') && (ch[i] <= 'Z'))
////			{
////				ch[i] -= 'A';
////				key[temp] -= 'A';
////				if ((ch[i] + key[temp]) < 0)
////					ch[i] += 26;
////				ch[i] = (ch[i] + key[temp]) % 26;
////				ch[i] += 'A';
////				key[temp] += 'A';
////			}
////		}
////	}
////	puts(res);
////}
//
//
//void encrypt(char str) {
//	//char str[100], key[100];
//	char key[100];
//	int enc_num; // 암호화할 횟수
//	fflush(stdin);
//	printf("암호화할 텍스트를 입력해주세요. (영문 100자, 한글 50자 이내)\n >> ");
//	fgets(str, sizeof(str), stdin);
//	fflush(stdin);
//
//	printf("암호키를 입력해주세요. (영문 100자 이내, 한글 금지)\n >> ");
//	scanf_s("%s", key);
//
	// printf("n중 암호화 >> 1 이상의 n 값을 입력해주세요. (권장 1~2회)\n >> ");
	// scanf_s("%d", &enc_num);

	// if (enc_num < 1) {
	// 	printf("올바른 값을 입력해주세요.");
	// 	exit(0);
	// }
//
	// if (enc_num > 4) {
	// 	changeConsoleColor(red);
	// 	printf("                #####   ######     ##     ##   ##    ####     ##\n");
	// 	printf("           ####     ##  ##  ###  ##    ##     ###  ##   ##  ##   ####\n");
	// 	printf(" ##   ##  ##  ##    ##  ##  #### ##    ##     #### ##  ##        ####\n");
	// 	printf(" ## # ##  ##  ##    #####   ## ####    ##     ## ####  ##         ##\n");
	// 	printf(" #######  ######    ## ##   ##  ###    ##     ##  ###  ##  ###    ##\n");
	// 	printf(" #######  ##  ##    ##  ##  ##   ##    ##     ##   ##   ##  ##\n");
	// 	printf("  ## ##   ##  ##   #### ##  ##   ##   ####    ##   ##    #####    ##\n\n");
	// 	printf("과도한 다중 암호화는 암호문 반환 지연을 초래할 수 있습니다.\n\n");
	// 	changeConsoleColor(white);
	// }
//
//	long int str_len = strlen(str);
//	long int key_len = strlen(key);
//	for (int loop = 0; loop < enc_num; loop++) {
//		for (int i = 0; i < str_len; i++) {
//			int temp = i % key_len;
//			if ((str[i] >= 'a') && (str[i] <= 'z')) {
//				str[i] -= 'a';
//				key[temp] -= 'a';
//
//				str[i] = (str[i] + key[temp]) % 26;
//				str[i] += 'a';
//				key[temp] += 'a';
//			}
//			else if ((str[i] >= 'A') && (str[i] <= 'Z')) {
//				str[i] -= 'A';
//				key[temp] -= 'A';
//
//				str[i] = (str[i] + key[temp]) % 26;
//				str[i] += 'A';
//				key[temp] += 'A';
//			}
//		}
//	}
//
//	printf("\n암호화된 결과: %s\n", str); // 암호화된 텍스트 출력
//}
//
//char decrypt() {
//	char ch[100], key[100], res[100]; int dec_num; // 복호화할 횟수
//	printf("복호화할 텍스트를 입력해주세요. (영문 100자, 한글 50자 이내)\n >> ");
//	gets_s(ch, sizeof(ch));
//	while (getchar() != '\n');
//
//	printf("암호키를 입력해주세요. (영문 100자 이내, 한글 금지)\n >> ");
//	scanf_s("%s", &key, sizeof(key));
//	while (getchar() != '\n');
//
//	changeConsoleColor(red);
//	printf("다중 암호화가 진행된 텍스트인 경우에만 아래 옵션을 설정해주세요.\n다중 암호화를 진행하지 않았다면 1을 입력해주세요.\n");
//	changeConsoleColor(white);
//	printf("n중 복호화 >> 1 이상의 n 값을 입력해주세요. (권장 1~2회)\n >> ");
//	scanf_s("%d", &dec_num);
//
//	if (dec_num < 1) {
//		printf("올바른 값을 입력해주세요.");
//		exit(0);
//	}
//}
//
//int main() {
	//init();
	//changeConsoleColor(yellow);
	//printf("=================================================================================================================================\n");
	//changeConsoleColor(green);
	//printf("          ####    ####     #######  ##   ##   #######  ######   #######           ##   ##   ####    ######   #######  ######\n");
	//printf("##  ##     ##     ##  ##    ###  ##  ##   #    ##  ##   ##   #   ##               ##   ##    ##     ##    #   ##  ##   ##  ##   \n");
	//printf("##  ##     ##     ##         ## #    #### ##   ## #     ##  ##   ## #     ####    ##   ##    ##      ##  ##   ## #     ##  ##\n");
	//printf("##  ##     ##     ##         ####    ## ####   ####     #####    ####    ##  ##   #######    ##      #####    ####     #####\n");
	//printf("##  ##     ##     ##  ###    ## #    ##  ###   ## #     ## ##    ## #    ##       ##   ##    ##      ##       ## #     ## ##\n");
	//printf(" ####      ##      ##  ##    ##   #  ##   ##   ##   #   ##  ##   ##   #  ##  ##   ##   ##    ##      ##       ##   #   ##  ##\n");
	//printf("  ##	  ####      #####   #######  ##   ##  #######  #### ##  #######   ####    ##   ##   ####    ####     #######  #### ##\n");
	//changeConsoleColor(yellow);
	//printf("=================================================================================================================================\n");
	//changeConsoleColor(white); printf("\n");
//	printf("암 / 복호화할 텍스트를 입력하세요.\n >> ");
//	char plain[100]; 
//	fgets(plain, sizeof(plain), stdin);
//	plain[strcspn(plain, "\n")] = '\0';
//
//	printf("\n옵션을 선택하세요. (숫자만 입력)\n\n");
//	printf("1. 암호화\n");
//	printf("2. 복호화\n");
//	printf(">> ");
//	int option; scanf_s("%d", &option);
//
//	switch (option) {
//	case 1:
//		encrypt(plain);
//		break;
//	case 2:
//		decrypt();
//		break;
//	default:
//		printf("정확한 값을 입력해주세요");
//		exit(0);
//		break;
//	};
//	return 0;
//}

/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

enum {
	black, dark_blue, dark_green, dark_sky, dark_red, dark_purple, dark_yellow, gray, dark_gray, blue, green, sky, red, para, yellow, white
};

void init();
void changeConsoleColor(char color);
void getInput(char* str, size_t size, const char* prompt);
void EncryptionLoop(char* str, const char* key);
void DecryptionLoop(char* str, const char* key);
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
    printf("          ####    ####     #######  ##   ##   #######  ######   #######           ##   ##   ####    ######   #######  ######\n");
    printf("##  ##     ##     ##  ##    ###  ##  ##   #    ##  ##   ##   #   ##               ##   ##    ##     ##    #   ##  ##   ##  ##   \n");
    printf("##  ##     ##     ##         ## #    #### ##   ## #     ##  ##   ## #     ####    ##   ##    ##      ##  ##   ## #     ##  ##\n");
    printf("##  ##     ##     ##         ####    ## ####   ####     #####    ####    ##  ##   #######    ##      #####    ####     #####\n");
    printf("##  ##     ##     ##  ###    ## #    ##  ###   ## #     ## ##    ## #    ##       ##   ##    ##      ##       ## #     ## ##\n");
    printf(" ####      ##      ##  ##    ##   #  ##   ##   ##   #   ##  ##   ##   #  ##  ##   ##   ##    ##      ##       ##   #   ##  ##\n");
    printf("  ##	  ####      #####   #######  ##   ##  #######  #### ##  #######   ####    ##   ##   ####    ####     #######  #### ##\n");
    changeConsoleColor(yellow);
    printf("=================================================================================================================================\n");
    changeConsoleColor(white); printf("\n");


    getInput(str, sizeof(str), "암 / 복호화할 텍스트를 입력해주세요.\n >> ");
    printf("\n옵션을 선택해주세요.\n1. 암호화\n2. 복호화");
    scanf_s("%d", &option);
    while (getchar() != '\n'); // 입력 버퍼 비우기
    getInput(key, sizeof(key), "키 값 입력: ");
    

    if (option == 1) {
        encrypt(str, key);
    }
    else if (option == 2) {
        decrypt(str, key);
    }
    else {
        printf("잘못된 선택입니다.\n");
        return 1;
    }

    printf("\n암호화 또는 복호화된 결과 출력: %s\n", str);

    return 0;
}

void init() {
	system("mode con cols=130 lines=50");
	SetConsoleTitle("Vigenere Chiper En/Decryption Tools");
}

void changeConsoleColor(unsigned color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void getInput(char* str, size_t size, const char* prompt) {
    printf("%s", prompt);
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0'; // fgets로 읽은 후 개행 문자 제거
}

void encrypt(char* str, const char* key) {
    int str_size = strlen(str);
    int key_size = strlen(key);

    for (int i = 0; i < str_size; i++) {
        char key_ch = key[i % key_size];
        encryptChar(&str[i], key_ch);
    }
}

void decrypt(char* str, const char* key) {
    int str_size = strlen(str);
    int key_size = strlen(key);

    for (int i = 0; i < str_size; i++) {
        char key_ch = key[i % key_size];
        decryptChar(&str[i], key_ch);
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
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <Windows.h>

enum {
    black, dark_blue, dark_green, dark_sky, dark_red, dark_purple, dark_yellow, gray, dark_gray, blue, green, sky, red, para, yellow, white
};

void init();
void changeConsoleColor(char color);
void getInput(char* str, size_t size, const char* prompt);
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
    printf("          ####    ####     #######  ##   ##   #######  ######   #######           ##   ##   ####    ######   #######  ######\n");
    printf("##  ##     ##     ##  ##    ###  ##  ##   #    ##  ##   ##   #   ##               ##   ##    ##     ##    #   ##  ##   ##  ##   \n");
    printf("##  ##     ##     ##         ## #    #### ##   ## #     ##  ##   ## #     ####    ##   ##    ##      ##  ##   ## #     ##  ##\n");
    printf("##  ##     ##     ##         ####    ## ####   ####     #####    ####    ##  ##   #######    ##      #####    ####     #####\n");
    printf("##  ##     ##     ##  ###    ## #    ##  ###   ## #     ## ##    ## #    ##       ##   ##    ##      ##       ## #     ## ##\n");
    printf(" ####      ##      ##  ##    ##   #  ##   ##   ##   #   ##  ##   ##   #  ##  ##   ##   ##    ##      ##       ##   #   ##  ##\n");
    printf("  ##	  ####      #####   #######  ##   ##  #######  #### ##  #######   ####    ##   ##   ####    ####     #######  #### ##\n");
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

void changeConsoleColor(unsigned color) {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void getInput(char* str, size_t size, const char* prompt) {
    printf("%s", prompt);
    fgets(str, size, stdin);
    str[strcspn(str, "\n")] = '\0'; // fgets로 읽은 후 개행 문자 제거
}

void encrypt(char* str, const char* key) {
    int count;
    printf("\nn중 암호화 >> 1 이상의 n 값을 입력해주세요. (권장 1~2회)\n >> ");
    scanf_s("%d", &count);

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
    int count;
    changeConsoleColor(red);
    printf("\n이 옵션은 다중 암호화를 진행한 경우에만 설정해주세요.\n다중 암호화를 진행하지 않았을 경우, 1을 입력하세요.\n\n");
    changeConsoleColor(white);
    printf("n중 복호화 >> 1 이상의 n 값을 입력해주세요. (권장 1~2회)\n >> ");
    scanf_s("%d", &count);

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
