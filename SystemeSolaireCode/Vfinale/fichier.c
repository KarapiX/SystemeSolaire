//
// Created by Vic on 23/06/2022.
//

#include "fichier.h"

vector addition(vector a, vector b){
    vector resultat;
    resultat.x = a.x + b.x;
    resultat.y = a.y + b.y;
    resultat.z = a.z + b.z;
    return resultat;
}

vector soustraction(vector a, vector b){
    vector resultat;
    resultat.x = a.x - b.x;
    resultat.y = a.y - b.y;
    resultat.z = a.z - b.z;
}

vector multiplication(vector a, double scalaire){
    vector resultat;
    resultat.x = scalaire * a.x;
    resultat.y = scalaire * a.y;
    resultat.z = scalaire * a.z;
    return resultat;
}

double norme(vector a){
    double cst;
    cst = sqrt(a.x * a.x + a.y * a.y + a.z * a.z);
    return cst;
}

void vectorTest() {
    vector a;
    vector b;
    double scalaire = 4;
    a.x = 7.54;
    a.y = 96.452;
    a.z = 687.24;
    b.x = 55.9;
    b.y = 97;
    b.z = 12;

    //test
    printf("Test:\n\n");
    addition(a, b);
    soustraction(a, b);
    multiplication(a, scalaire);
    norme(a);

}

