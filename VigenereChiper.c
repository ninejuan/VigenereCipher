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

char encrypt() {

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
	printf("1. 암호화");
	printf("2. 복호화");
	int option; scanf_s("%d", &option);
	char res;
	switch (option) {
	case 1:
		res = encrypt();
		break;
	case 2:
		res = decrypt();
		break;
	default:
		printf("정확한 값을 입력해주세요");
		exit(0);
		break;
	}
	return 0;
}