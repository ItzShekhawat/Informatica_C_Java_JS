/*
author: Paolo Acchiardi
date: 19-10-2018
Es n.5: Date tre et� calcolare l'et� media
*/
#include <stdio.h>
#include <stdlib.h>
main(){

    int eta1;           //prima et� inserita
    int eta2;           //seconda et� inserita
    int eta3;           //terza et� inserita
    float eta_media;      //et� media tra le tre et�

    //calcolo

    printf("Inserire la prima eta':");
    scanf("%i" , &eta1);
    printf("inseire la seconda eta':");
    scanf("%i" , &eta2);
    printf("inserire la terza eta':");
    scanf("%i" , &eta3);


    eta_media = ((float) eta1 + eta2 + eta3) / 3;

    printf("l'eta' media e' %f " , eta_media);

}
