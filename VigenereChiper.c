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
	
}