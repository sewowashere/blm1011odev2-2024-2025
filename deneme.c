/*#include <stdio.h>

int main(){
    int N, i, k, a, j, l, pist1gecikme=0, pist2gecikme=0;
    float ortgecikme1, ortgecikme2;
    printf("Ucak sayisi:\n");
    scanf("%d",&N);
    int ucak_numaralari[N];
    int kalkis_saatleri[N];
    int pist1saatler[(N+1)/2], pist2saatler[N/2], pist1ucaklar[(N+1)/2], pist2ucaklar[N/2];

    printf("Ucak pistleri kac dakikada kullanilabilir hale geliyor?\n");
    scanf("%d",&a);

    for(i=0;i<N;i++){
        printf("%d. ucagin numarasini giriniz: ",i+1);
        scanf("%d",&ucak_numaralari[i]);
        printf("%d. ucagin kalkis saatini giriniz: ",i+1);
        scanf("%d",&kalkis_saatleri[i]);
    }
    int p=0;
    for(j=0;j<N;j=j+2){
        pist1saatler[p] = kalkis_saatleri[j];
        pist1ucaklar[p] = ucak_numaralari[j];
        p++;
    }
    p=0;
    for(k=1;k<N+1;k=k+2){
        pist2saatler[p] = kalkis_saatleri[k];
        pist2ucaklar[p] = ucak_numaralari[k];
        p++;
    }

    for(l=0;l<N+1;l++){
        if(pist1saatler[l]+a > pist1saatler[l+1]){
            pist1gecikme += (pist1saatler[l]+a-pist1saatler[l+1]) ;
            pist1saatler[l+1] = pist1saatler[l]+a ;
        }
        if(pist2saatler[l]+a > pist2saatler[l+1]){
            pist2gecikme += (pist2saatler[l]+a-pist2saatler[l+1]);
            pist2saatler[l+1] = pist2saatler[l]+a ;
        }
    }
    /*if(N%2 == 0){
        ortgecikme1 = (float)pist1gecikme/(N/2) ;
        ortgecikme2 = (float)pist2gecikme/(N/2) ;
    }
    if(N%2 == 1){
        ortgecikme1 = (float)pist1gecikme/(N/2)+1 ;
        ortgecikme2 = (float)pist2gecikme/(N/2)+1 ;
    }*/

/*

    for(i=0;i<N;i++){
        //printf("\n\nPist 1'den kalkacak ucaklarin numaralari: %d\n",pist1ucaklar);
        printf("\nPist 1'den kalkacak ucaklarin kalkis saatleri: %d\n",pist1saatler[i]);
    }
    for(i=0;i<N;i++){
        //printf("\n\nPist 2'den kalkacak ucaklarin numaralari: %d\n",pist2ucaklar);
        printf("\nPist 2'den kalkacak ucaklarin kalkis saatleri: %d\n",pist2saatler[i]);
    }
    
    //printf("\nPist 1'deki ortalama gecikme: %d",ortgecikme1);
    //printf("\nPist 2'deki ortalama gecikme: %d",ortgecikme2);

    return 0;
}*/


/*
input
pist1,pist2 (time)
time = pistler
*/

/*int deneme_array[N/2];
   int deneme_array2[N/2];

   for(i=0;i<N;i++){
        deneme_array[i] = pist1saatler[i]-pist2saatler[i+1];
        deneme_array2[i] = pist1saatler[i]+k;
        if(deneme_array2[i] >= pist1saatler[i+1]){
            pist1gecikme = deneme_array[i];
            printf("\n%d\n",deneme_array);
            pist1saatler[i+1] = deneme_array2[i];
            printf("\n%d\n",deneme_array2);
        }
   }*/


/*#include <stdio.h>

int main() {
    int ucaksayisi, i, cooldown, j, p;

    printf("Ucak sayisi giriniz: ");
    scanf("%d", &ucaksayisi);  // Adres kullanılmalı

    int ucak_saat[ucaksayisi];
    int ucak_num[ucaksayisi];
    int pist1_num[ucaksayisi / 2];
    int pist1_saat[ucaksayisi / 2];

    printf("Pistten kac dakika arayla ucak kalkabiliyor? : ");
    scanf("%d", &cooldown);  // Adres kullanılmalı

    for (i = 0; i < ucaksayisi; i++) {
        printf("%d. ucagin numarasi: ", i + 1);
        scanf("%d", &ucak_num[i]);  // Dizi elemanına değer atanıyor

        printf("%d. ucagin kalkis saati: ", i + 1);
        scanf("%d", &ucak_saat[i]);  // Dizi elemanına değer atanıyor
    }

    for (j = 0; j < ucaksayisi / 2; j++) {  // Bu döngü ucaksayisi / 2'ye kadar çalışır
        p = j * 2;
        pist1_num[j] = ucak_num[p];
        pist1_saat[j] = ucak_saat[p];
    }

    for (int k = 0; k < ucaksayisi / 2; k++) {
        printf("Pist1 ucak numarasi: %d\n", pist1_num[k]);
        printf("Pist1 kalkis saati: %d\n", pist1_saat[k]);
    }

    return 0;
}
*/

/*#include <stdio.h>

int main(){
    int ucaksayisi,i,cooldown,j,p,k,h,x,tmp;

    printf("Ucak sayisi giriniz: ");
    scanf("%d", &ucaksayisi);

    int ucak_saat[ucaksayisi];
    int ucak_num[ucaksayisi];
    int pist1_num[(ucaksayisi + 1) / 2];
    int pist1_saat[(ucaksayisi + 1) / 2];
    int main_saat[(ucaksayisi + 1) / 2];

    printf("Pistten kac dakika arayla ucak kalkabiliyor? : ");
    scanf("%d",&cooldown);

    for(i = 0; i < ucaksayisi; i++){
        printf("%d. ucagin numarasi: ", i + 1);
        scanf("%d", &ucak_num[i]);

        printf("%d. ucagin kalkis saati: ", i + 1);
        scanf("%d", &ucak_saat[i]);
    } 

    for(j = 0; j < (ucaksayisi + 1) / 2; j++){
        p = j*2;
        pist1_num[j] = ucak_num[p];
        pist1_saat[j] = ucak_saat[p];
    } //pist 2 için de yapılacak.

    printf("Pist 1'deki ucaklar:\n");
    for(h = 0; h < (ucaksayisi + 1) / 2; h++){
        printf("%d\n", pist1_num[h]);
    }

    for(k = 0; k < (ucaksayisi + 1) / 2; k++){
        tmp = k + 1;
        main_saat[k] = pist1_saat[k] + cooldown;
        if(main_saat[k] > pist1_saat[tmp]){
            pist1_saat[tmp] = main_saat[k];
            printf("%d\n",pist1_saat[k]);
        }
    }

    printf("Pist 1'deki ucaklarin kalkis saatleri:\n");
    for(x = 0; x < (ucaksayisi + 1) / 2; x++){
        printf("%d\n", pist1_saat[x]);
    }

    return 0;
}*/

#include <stdio.h>

int main(){
    int ucaksayisi, i, j, cooldown, count2 = 0;

    printf("Ucak sayisi giriniz:\n");
    scanf("%d", &ucaksayisi);

    int ucak_saat[ucaksayisi];
    int ucak_num[ucaksayisi];
    int pist1_num[(ucaksayisi + 1) / 2];
    int pist1_saat[(ucaksayisi + 1) / 2];
    int pist2_num[ucaksayisi / 2];
    int pist2_saat[ucaksayisi / 2];
    int main_saat1[(ucaksayisi + 1) / 2];
    int main_saat2[ucaksayisi / 2];
    float p2_ort, p1_ort, count1 = 0;

    printf("Pistten kac dakika arayla ucak kalkabiliyor? :\n");
    scanf("%d",&cooldown);

    for(i = 0; i < ucaksayisi; i++){
        printf("%d. ucagin numarasi: ",i + 1);
        scanf("%d", &ucak_num[i]);

        printf("%d. ucagin kalkis saati: ", i + 1);
        scanf("%d", &ucak_saat[i]);
    } 

    for(i = 0; i < (ucaksayisi + 1) / 2; i++){
        j = i*2;
        pist1_num[i] = ucak_num[j];
        pist1_saat[i] = ucak_saat[j];
    }

    for(i = 0; i < (ucaksayisi + 1) / 2; i++){
        j = i + 1;
        main_saat1[i] = pist1_saat[i] + cooldown;
        if(main_saat1[i] > pist1_saat[j]){
            pist1_saat[j] = main_saat1[i];
            count1 = count1 + (main_saat1[i] - pist1_saat[i]);
            printf("%f\n",count1);
        }
    }
    /*printf("\nPIST 1 :\nNUMARA    KALKIS SAATI\n");
    for(i = 0;  i < (ucaksayisi + 1) / 2; i++){
        printf("%d          %d\n", pist1_num[i], pist1_saat[i]);
    }*/

    p1_ort = (float)((float)count1 / ((ucaksayisi + 1) / 2));
    printf("%f\n",count1);
    printf("he :%d\n",(ucaksayisi + 1)/2);
    printf("Ortalama: %f\n\n",p1_ort);

    for(i = 0; i < ucaksayisi / 2; i++){
        j = i*2 + 1;
        pist2_num[i] = ucak_num[j];
        pist2_saat[i] = ucak_saat[j];
    }

    for(i = 0; i < ucaksayisi / 2; i++){
        j = i + 1;
        main_saat2[i] = pist2_saat[i] + cooldown;
        if(main_saat2[i] > pist2_saat[j]){
            pist2_saat[j] = main_saat2[i];
            count2 = count2 + (main_saat1[i] - pist1_saat[i]);
        }
    }

    /*printf("PIST 2 :\nNUMARA    KALKIS SAATI\n");
    for(i = 0; i < ucaksayisi / 2; i++){
        printf("%d          %d\n", pist2_num[i], pist1_saat[i]);
    }*/

    p2_ort = (float)(count2 / ((ucaksayisi) / 2));
    printf("Ortalama: %f\n",p2_ort);

    return 0;
}