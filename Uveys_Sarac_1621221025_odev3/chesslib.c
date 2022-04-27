#include <stdio.h>
#include <stdlib.h>
#include "chesslib.h"
short sahHareketSayi(poz ilkPoz){
	
    short hareketSayi;
    short taskonumi=8-ilkPoz.dusey;
	short taskonumj=((int)ilkPoz.yatay)-65;
	if((taskonumi==0 && taskonumj==0)||(taskonumi==0 && taskonumj==7)||(taskonumi==7 && taskonumj==0)||(taskonumi==7 && taskonumj==7)){
		hareketSayi=3;
	}else if(taskonumi==0 || taskonumj==0 || taskonumi==7 || taskonumj==7){
		hareketSayi=5;
	}else{
		hareketSayi=8;
	}
    return hareketSayi;
}

short atHareketSayi(poz ilkPoz){
	
	short hareketSayi = 0;
	
	short taskonumj=8-ilkPoz.dusey;
	
	short taskonumi=((int)ilkPoz.yatay)-65;
	
	
    if(((taskonumi == 0 && taskonumj ==0 ) || (taskonumi == 0 && taskonumj == 7) || (taskonumi == 7 && taskonumj == 0)||(taskonumi == 7 && taskonumj == 7) )){
        hareketSayi = 2;
    }else if( (taskonumi == 0 && taskonumj ==1 )|| (taskonumi == 0 && taskonumj ==6 ) || (taskonumi == 1 && taskonumj ==0 )|| (taskonumi == 1 && taskonumj ==7 )|| (taskonumi == 6 && taskonumj ==0 )||(taskonumi == 6 && taskonumj ==7 )||(taskonumi == 7 && taskonumj ==1 )||(taskonumi == 7 && taskonumj ==6 )){
        hareketSayi = 3;
    }else if((taskonumi == 0 && (taskonumj ==2 ||taskonumj ==3||taskonumj ==4||taskonumj ==5))|| (taskonumi == 1 && (taskonumj ==1 ||taskonumj ==6))||(taskonumi == 0 && (taskonumj ==2 ||taskonumj ==3||taskonumj ==4||taskonumj ==5))){
        hareketSayi = 4;
    }else if( ((taskonumi == 1 || taskonumi == 6) && ( taskonumi >= 2 && taskonumi <= 5)) || ((taskonumi == 1 || taskonumi == 6) && ( taskonumi >= 2 && taskonumi <= 5)) ){
        hareketSayi = 6;
    }else{
        hareketSayi = 8;
    }

    return hareketSayi;
}

poz *hareketSah(poz ilkPoz){
	
	int i,j,hareketSayi;
	hareketSayi=sahHareketSayi(ilkPoz);
	poz *yeniPoz = (poz*)malloc(hareketSayi*sizeof(poz));
	
	int count=0;
	
	if(hareketSayi==8){
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				if(i==1 && j==1){
				}else{
				yeniPoz[count].dusey =ilkPoz.dusey+i-1;
				
				yeniPoz[count].yatay =(char)(ilkPoz.yatay + j-1); 
				
				count++;	
				}
			}
		}
	}else if(hareketSayi==5){
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				if(i==1 && j==1){
				}else{
					if( (ilkPoz.dusey+i-1<1) || (ilkPoz.dusey+i-1>8) || (((int)(ilkPoz.yatay + j-1)) <65) || (((int)(ilkPoz.yatay + j-1)) > 72)){
					}else{
					
				yeniPoz[count].dusey =ilkPoz.dusey+i-1;
				
				yeniPoz[count].yatay =(char)(ilkPoz.yatay + j-1); 
				
				count++;
					}	
				}
			}
		}			
	}else{
		for(i=0; i<3; i++){
			for(j=0; j<3; j++){
				if(i==1 && j==1){
				}else{
					if( (ilkPoz.dusey+i-1<1) || (ilkPoz.dusey+i-1>8) || (((int)(ilkPoz.yatay + j-1)) <65) || (((int)(ilkPoz.yatay + j-1)) > 72)){
					}else{
					
				yeniPoz[count].dusey =ilkPoz.dusey+i-1;
				
				yeniPoz[count].yatay =(char)(ilkPoz.yatay + j-1); 
				
				count++;
					}	
				}
			}
		}
		
		
		
		
	}	
	return yeniPoz;
}

poz *hareketVezir(poz ilkPoz){
	}
	
poz *hareketFil(poz ilkPoz){
	}
	
poz *hareketAt(poz ilkPoz){
	
	short hareketSayi=atHareketSayi(ilkPoz);
	
	poz *yeniPoz = (poz*)malloc(hareketSayi*sizeof(poz));
	
	int i,count=0;
	
	short athareket[16]={2,-1, 2,1, -2,-1, -2,1, 1,-2, 1,2, -1,2, -1,-2};
	
		for(i=0; i<8; i++){
			i++;
			if( (athareket[i]+ilkPoz.dusey>8 || athareket[i]+ilkPoz.dusey<0) || ((((int)(athareket[i+1]+ilkPoz.yatay )) <65) || (((int)(athareket[i+1]+ilkPoz.yatay)) > 72) )){
			}else{
				
				short dusey=athareket[i];
				yeniPoz[count].dusey =ilkPoz.dusey ;
				
				yeniPoz[count].yatay =(char)(ilkPoz.yatay);
				
				count++;
				
			}
		}
	
	}
	
poz *hareketKale(poz ilkPoz){
	
	poz *yeniPozlar = (poz*)malloc(14*sizeof(poz));
	
 	int i, count=0; 
 	
	for(i=1; i<17; i++){
		if(i==ilkPoz.dusey){
		}else{
			if(i<9){			
				yeniPozlar[count].dusey=i;
				
 				yeniPozlar[count].yatay=ilkPoz.yatay;
 				
 				count++;
 			}
 			if(i>=9){
 				if(ilkPoz.yatay==(char)i-8+64){
				}else{
					yeniPozlar[count].dusey=ilkPoz.dusey;
					
 					yeniPozlar[count].yatay=(char)i-8+64;	
 					
 					count++;
				}	
			}	
		}
	}
	return yeniPozlar;
}

poz *hareketPiyon(poz ilkPoz){
	poz *yeniPoz = (poz*)malloc(1*sizeof(poz));				//piyon tek hareket þansý olduðu için 1 elemanlý bir array oluþturduk
	if(ilkPoz.dusey==8){									// tahtanýn sonundaysa piyon hareket edemez, ayný pozisyonda kalýr
	yeniPoz[0].dusey=ilkPoz.dusey;
	yeniPoz[0].yatay=ilkPoz.yatay;
	}else{
	yeniPoz[0].dusey=ilkPoz.dusey+1;
	yeniPoz[0].yatay=ilkPoz.yatay;
	}
	return yeniPoz;
	}

void hareketYazdir(char tas, poz ilkPoz){
	
	struct poz*(*satrancfonksiyonlari[])(struct poz)={ &hareketSah, &hareketVezir, &hareketFil, &hareketAt, &hareketKale, &hareketPiyon};
	int i,j;
	int **board;
	board = (int**) calloc(sizeof(int*), 8);
	for (i = 0; i < 8; i++) {
	board[i] = (int*) calloc(sizeof(int), 8);
	}
	
	
				
	if(tas=='S'){
		short hareketSayi=sahHareketSayi(ilkPoz);
		
		poz *yeniPozlar = (poz*)malloc((hareketSayi)*sizeof(poz));
		
	    yeniPozlar=satrancfonksiyonlari[0](ilkPoz);
	    
	 	for(i=0; i<hareketSayi; i++){				
			board[8-yeniPozlar[i].dusey][((int)yeniPozlar[i].yatay)-65]=1;
		}
		
		board[8-ilkPoz.dusey][((int)ilkPoz.yatay)-65]=2;
		
		printarray(board);
	}
			
//	if(tas=='V'){
//		satranfonsiyonlari(V);
//	}
//	if(tas=='F'){
//		satranfonsiyonlari(F);
//	}
	if(tas=='A'){
		short hareketSayi=atHareketSayi(ilkPoz);
		
		poz *yeniPozlar = (poz*)malloc((hareketSayi)*sizeof(poz));
		
	    yeniPozlar=satrancfonksiyonlari[3](ilkPoz);
	    printStruct(yeniPozlar,hareketSayi);
	 	for(i=0; i<hareketSayi; i++){				
			board[8-yeniPozlar[i].dusey][((int)yeniPozlar[i].yatay)-65]=1;
		}
		
		board[8-ilkPoz.dusey][((int)ilkPoz.yatay)-65]=2;
		
		printarray(board);
	}
	if(tas=='K'){
	poz *yeniPozlar = (poz*)malloc((14)*sizeof(poz));
	
    yeniPozlar=satrancfonksiyonlari[4](ilkPoz);
    
	for(i=0; i<14; i++){				
		board[8-yeniPozlar[i].dusey][((int)yeniPozlar[i].yatay)-65]=1;
	}
	
	board[8-ilkPoz.dusey][((int)ilkPoz.yatay)-65]=2;
	
	printarray(board);
	}
	
	
	if(tas == 'P'){

 	poz *yeniPoz;
 	
    yeniPoz=satrancfonksiyonlari[5](ilkPoz);
    
	board[8-yeniPoz[0].dusey][((int)yeniPoz[0].yatay)-65]=1;
	
    board[8-ilkPoz.dusey][((int)ilkPoz.yatay)-65]=2;
    
    printarray(board);
    
    printStruct(yeniPoz,1);
    
    }
	
}
void printarray(int **A){
    int i;
    int j;
	printf( "\n" );
    for( j = 0; j <8; j++ ){
        for( i = 0; i <8; i ++){
            printf( "%d   ", A[j][i] );
        }
        printf( "\n" );
        printf( "\n" );
    }
}
void printStruct(poz *yeniPoz, short hareketSayi){
	int i;
		for(i = 0; i <hareketSayi; i++){
			printf("%d", yeniPoz[i].dusey);
			printf("%c ", yeniPoz[i].yatay);
			puts(" ");
		}
		
   }


