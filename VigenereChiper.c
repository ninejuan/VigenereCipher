#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>
#include <string.h>

enum {
	black, dark_blue, dark_green, dark_sky, dark_red, dark_purple, dark_yellow, gray, dark_gray, blue, green, sky, red, para, yellow, white
};

void init() {
	system("mode con cols=130 lines=20");
	SetConsoleTitle("Vigenere Chiper En/Decryption Tools");
}

void changeConsoleColor(unsigned color) {
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}

void encrypt() {
	char ch[100], key[100], res[100]; int enc_num; // 암호화할 횟수
	printf("암호화할 텍스트를 입력해주세요. (영문 100자, 한글 50자 이내)\n >> ");
	gets_s(ch, sizeof(ch));
	while (getchar() != '\n');

	printf("암호키를 입력해주세요. (영문 100자 이내, 한글 금지)\n >> ");
	scanf_s("%s", &key, sizeof(key));
	while (getchar() != '\n');

	printf("n중 암호화 >> 1 이상의 n 값을 입력해주세요. (권장 1~2회)\n >> ");
	scanf_s("%d", &enc_num);

	if (enc_num < 1) {
		printf("올바른 값을 입력해주세요.");
		exit(0);
	}

	if (enc_num > 4) {
		changeConsoleColor(red);
		printf("		            #####   ######     ##     ##   ##    ####     ##\n");
		printf("           ####     ##  ##  ###  ##    ##     ###  ##   ##  ##   ####\n");
		printf(" ##   ##  ##  ##    ##  ##  #### ##    ##     #### ##  ##        ####\n");
		printf(" ## # ##  ##  ##    #####   ## ####    ##     ## ####  ##         ##\n");
		printf(" #######  ######    ## ##   ##  ###    ##     ##  ###  ##  ###    ##");
		printf(" #######  ##  ##    ##  ##  ##   ##    ##     ##   ##   ##  ##\n");
		printf("  ## ##   ##  ##   #### ##  ##   ##   ####    ##   ##    #####    ##\n\n");
		printf("과도한 다중 암호화는 암호문 반환 지연을 초래할 수 있습니다.\n\n");
		changeConsoleColor(white);
	}
	long int ch_len = strlen(ch);
	long int key_len = strlen(key);
	for (int loop = 0; loop < enc_num; loop++) {
		for (int i = 0; i < ch_len; i++) {
			int temp = i % key_len; 
			if ((ch[i] >= 'a') && (ch[i] <= 'z'))
			{
				ch[i] -= 'a';
				key[temp] -= 'a';

				if ((ch[i] + key[temp]) < 0)
				{
					ch[i] += 26;
				}

				ch[i] = (ch[i] + key[temp]) % 26;
				ch[i] += 'a';
				key[temp] += 'a';
			}
			if ((ch[i] >= 'A') && (ch[i] <= 'Z'))
			{
				ch[i] -= 'A';
				key[temp] -= 'A';
				if ((ch[i] + key[temp]) < 0)
					ch[i] += 26;
				ch[i] = (ch[i] + key[temp]) % 26;
				ch[i] += 'A';
				key[temp] += 'A';
			}
		}
	}
	printf("%s", res);
}

char decrypt() {

}

int main() {
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
	printf("옵션을 선택하세요. (숫자만 입력)\n\n");
	printf("1. 암호화\n");
	printf("2. 복호화\n");
	int option; scanf_s("%d", &option);
	char res;
	switch (option) {
	case 1:
		encrypt();
		break;
	case 2:
		decrypt();
		break;
	default:
		printf("정확한 값을 입력해주세요");
		exit(0);
		break;
	}
	return 0;
}