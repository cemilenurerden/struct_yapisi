
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct ogrenciBilgileri{

char ad[20];
char soyad[20];
int numara;
int sinif;
char adres[100];


}ogr;

int main()
{

 struct ogrenciBilgileri ogr2,ogr3,ogr4,ogr5;

 strcpy(ogr.ad,"cemilenur");
 strcpy(ogr.soyad,"erden");
 ogr.numara=1220505039;
 ogr.sinif= 1;
 strcpy(ogr.adres,"ankara kecioren");


 printf("1.ogrencinin bilgisi:\n adi: %s\n soyadi: %s\n numarasi: %d\n sinifi: %d\n ",ogr.ad,ogr.soyad,ogr.numara,ogr.sinif);
 printf("adresi: %s\n",ogr.adres);


 strcpy(ogr2.ad,"esma");
 strcpy(ogr2.soyad,"gokkaya");
 ogr2.numara=1220505034;
 ogr2.sinif= 2;
 strcpy(ogr2.adres,"istanbul bagcilar");

 printf("2.ogrencinin bilgisi:\n adi: %s\n soyadi: %s\n numarasi: %d\n sinifi: %d\n ",ogr2.ad,ogr2.soyad,ogr2.numara,ogr2.sinif);
 printf("adresi: %s\n",ogr2.adres);



 strcpy(ogr3.ad,"elif");
 strcpy(ogr3.soyad,"barlik");
 ogr3.numara=1220505030;
 ogr3.sinif= 3;
 strcpy(ogr3.adres,"istanbul esenyurt");

 printf("3.ogrencinin bilgisi:\n adi: %s\n soyadi: %s\n numarasi: %d\n sinifi: %d\n ",ogr3.ad,ogr3.soyad,ogr3.numara,ogr3.sinif);
 printf("adresi: %s\n",ogr3.adres);



 strcpy(ogr4.ad,"doganay");
 strcpy(ogr4.soyad,"balaban");
 ogr4.numara=1220505031;
 ogr4.sinif= 4;
 strcpy(ogr4.adres,"istanbul besiktas");

  printf("4.ogrencinin bilgisi:\n adi: %s\n soyadi: %s\n numarasi: %d\n sinifi: %d\n ",ogr4.ad,ogr4.soyad,ogr4.numara,ogr4.sinif);
 printf("adresi: %s\n",ogr4.adres);


 strcpy(ogr5.ad,"eda");
 strcpy(ogr5.soyad,"ergin");
 ogr5.numara=1220505035;
 ogr5.sinif= 2;
 strcpy(ogr5.adres,"istanbul kartal");



 printf("5.ogrencinin bilgisi:\n adi: %s\n soyadi: %s\n numarasi: %d\n sinifi: %d\n ",ogr5.ad,ogr5.soyad,ogr5.numara,ogr5.sinif);
 printf("adresi: %s\n",ogr5.adres);





    return 0;
}
