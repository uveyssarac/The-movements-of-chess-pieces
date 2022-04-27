#include <stdio.h>
#include <stdlib.h>
#include "chesslib.h"
//
// HOCAM ÞAH, PÝYON VE KALE HER ÞEKÝLDE ÇALIÞIYOR AT KISMINDA BAYA ÝLERLEDÝM AMA OLMADI, VEZÝR VE FÝL HÝÇ YOK 
//
int main(int argc, char *argv[]) {
    poz ilk_pozisyon;
	ilk_pozisyon.dusey=3;
	ilk_pozisyon.yatay='D';
	char tas='K';
	hareketYazdir(tas,ilk_pozisyon);
	
	

	
	return 0;
}
