#include <stdio.h>

int main(){
    int ucaksayisi, i, j, cooldown;
    int minus1, minus2;

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
    float p2_ort, p1_ort;
    float count1 = 0.0, count2 = 0.0;

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
        printf("mainsaat1: %d\n", main_saat1[i]);
        minus1 /*bunu array yap*/ = main_saat1[i] - pist1_saat[j];
        printf("minus1: %d\n",minus1);
        if(main_saat1[i] > pist1_saat[j] && j < (ucaksayisi + 1) / 2){
            pist1_saat[j] = main_saat1[i];
            printf("pist1saat: %d\n", pist1_saat[i]);
            count1 = count1 + minus1;
            printf("count: %f\n",count1);
        }
    }

    printf("\nPIST 1 :\nNUMARA    KALKIS SAATI\n");
    for(i = 0;  i < (ucaksayisi + 1) / 2; i++){
        printf("%d          %d\n", pist1_num[i], pist1_saat[i]);
    }

    p1_ort = (count1 / (float)((ucaksayisi + 1) / 2));
    printf("Ortalama: %f\n",p1_ort);

    for(i = 0; i < ucaksayisi / 2; i++){
        j = i*2 + 1;
        pist2_num[i] = ucak_num[j];
        pist2_saat[i] = ucak_saat[j];
    }

    for(i = 0; i < ucaksayisi / 2; i++){
        j = i + 1;
        minus2 = 0;
        main_saat2[i] = pist2_saat[i] + cooldown;
        minus2 = main_saat2[i] - pist2_saat[j];
        if(main_saat2[i] > pist2_saat[j] && j < (ucaksayisi / 2)){
            pist2_saat[j] = main_saat2[i];
            count2 = count2 + minus2;        }
    }

    printf("\nPIST 2 :\nNUMARA    KALKIS SAATI\n");
    for(i = 0; i < ucaksayisi / 2; i++){
        printf("%d          %d\n", pist2_num[i], pist2_saat[i]);
    }

    p2_ort = (count2 / (float)((ucaksayisi) / 2));
    printf("Ortalama: %f\n",p2_ort);

    return 0;
}