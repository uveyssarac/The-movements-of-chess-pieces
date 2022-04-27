#define CHESSLIB_H_

typedef struct poz{
    short dusey;
    char yatay;
} poz;
	short sahHareketSayi(poz);
	
	short atHareketSayi(poz );
	
	void hareketYazdir(char , poz );
	
	poz *hareketSah(poz );
	
 	poz *hareketVezir(poz );	
	  
	poz *hareketFil(poz );
	
	poz *hareketAt(poz );
	
	poz *hareketKale(poz );
	
	poz *hareketPiyon(poz );
	
	void printarray(int **);
	
	void printStruct(poz *, short);
