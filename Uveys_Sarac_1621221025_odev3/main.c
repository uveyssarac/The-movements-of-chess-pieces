#include <stdio.h>
#include <stdlib.h>
#include "chesslib.h"
//
// HOCAM �AH, P�YON VE KALE HER �EK�LDE �ALI�IYOR AT KISMINDA BAYA �LERLED�M AMA OLMADI, VEZ�R VE F�L H�� YOK 
//
int main(int argc, char *argv[]) {
    poz ilk_pozisyon;
	ilk_pozisyon.dusey=3;
	ilk_pozisyon.yatay='D';
	char tas='K';
	hareketYazdir(tas,ilk_pozisyon);
	
	

	
	return 0;
}
