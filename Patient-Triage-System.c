#include <stdio.h>
#include <string.h>
#define HASTA_SAYISI 2

union tedavi{
    int yatisSuresi;
    int kontrolSikligi;
    char ayaktaTedavi[20];
};

struct hasta{
    char ad[20];
    int yas;
    char hastalikDurumu[20];
    union tedavi Tedavi;
    int tedaviTipi; //! 1: Yatış, 2 kontrol 3 ayakta tedavi

};


//!! STRCMP KULLANIMINI GÖRDÜK



int main(){
struct hasta hastalar[HASTA_SAYISI];

int i;
for(i = 0; i<HASTA_SAYISI; i++){
    printf("%d.hastanin bilgilerini giriniz: \n", i+1);
    printf("Isim: ");
    scanf("%s", hastalar[i].ad);

    printf("Yas: ");
    scanf("%d", &hastalar[i].yas);

    printf("Hastalik durumu (agir/orta/hafif): ");
    scanf("%s", hastalar[i].hastalikDurumu);


    if(strcmp(hastalar[i].hastalikDurumu, "agir")==0){
        printf("Yatis suresini giriniz:(gun) ");
        scanf("%d", &hastalar[i].Tedavi.yatisSuresi);
        hastalar[i].tedaviTipi = 1;
    }
    
    else if(strcmp(hastalar[i].hastalikDurumu, "orta") == 0){
             printf("Duzenli kontrol sikligi");
        scanf("%d", &hastalar[i].Tedavi.kontrolSikligi);
        hastalar[i].tedaviTipi = 2;
    }else{
        strcpy(hastalar[i].Tedavi.ayaktaTedavi, "Ayakta Tedavi");
        hastalar[i].tedaviTipi = 3;
    }

}
printf("\n\n---HASTANE HASTA LISTESİ---\n\n");

for(i = 0; i<HASTA_SAYISI; i++){
    printf("Hasta %d\n", i+1);
    printf("Isim: %s\n", hastalar[i].ad);
    printf("Yas: %d\n", hastalar[i].yas);

    printf("Hastalik durumu : %s\n", hastalar[i].hastalikDurumu);

    if(hastalar[i].tedaviTipi == 1){
        printf("Tedavi turu: Yatis Suresi - %d gun\n\n", hastalar[i].Tedavi.yatisSuresi);
    }else if(hastalar[i].tedaviTipi == 2){
        printf("Tedavi turu: Duzenli Kontrol - %d gun\n\n", hastalar[i].Tedavi.kontrolSikligi);
    }else{
        printf("Tedavi turu: %s\n\n", hastalar[i].Tedavi.ayaktaTedavi);
    }
}
    return 0;
}