//
// Created by Vic on 24/06/2022.
//

#include "Euler.h"
#include "fichier.h"


void calculEuler(planete astre,FILE * f,double GxMs,int deltaT){
    double scalaire;
    double energiepot;
    double energiecin;
    double energie;
    double constante ;       // sert de resultat pour le calcul de la norme

    vector acceleration;
    acceleration.x = 0; acceleration.y = 0; acceleration.z = 0;

    int nb = 3650; //nb de point dans la trajectoire



    if(f!=NULL) {
        fprintf(f, "\"%s\" : [", astre.nom);
        fprintf(f, "[[%e,%e,%e],[%e,%e,%e],0]", astre.traj.r .x, astre.traj.r .y, astre.traj.r .z, astre.traj.v .x, astre.traj.v .y, astre.traj.v .z);

        for (int i = 1; i < nb; ++i) {
            constante = norme(astre.traj.r);
            scalaire = GxMs / pow(constante, 3);
            acceleration = multiplication(astre.traj.r , scalaire);
            astre.traj.r  = addition(astre.traj.r , multiplication(astre.traj.v, deltaT));
            astre.traj.v = addition(multiplication(acceleration, deltaT), astre.traj.v);
            fprintf(f,"\n,[[%e,%e,%e],", astre.traj.r .x, astre.traj.r .y, astre.traj.r .z);
            fprintf(f,"[%e,%e,%e], ", astre.traj.v.x, astre.traj.v.y, astre.traj.v.z);
            fprintf(f,"%d]", i);
//            energiepot=((GxMs*astre.masse)/(pow(norme(astre.traj.r),2)));
//            energiecin=(astre.masse*pow(norme(astre.traj.v),2));
//            energie=energiepot+energiecin;
         //   printf("Energie de conservation: %e\n",energie);
        }

    }
    else
        printf("erreur ouverture du fichier\n");
}

void calculEulerasym(planete astre,FILE * f,double GxMs,int deltaT){
    double scalaire;
    double energiepot;
    double energiecin;
    double energie;
    double constante ;       // sert de resultat pour le calcul de la norme

    vector acceleration;
    acceleration.x = 0; acceleration.y = 0; acceleration.z = 0;

    int nb = 3650; //nb de point dans la trajectoire



    if(f!=NULL) {
        fprintf(f, "\"%s\" : [", astre.nom);
        fprintf(f, "[[%e,%e,%e],[%e,%e,%e],0]", astre.traj.r .x, astre.traj.r .y, astre.traj.r .z, astre.traj.v .x, astre.traj.v .y, astre.traj.v .z);

        for (int i = 1; i < nb; ++i) {
            constante = norme(astre.traj.r);
            scalaire = GxMs / pow(constante, 3);

            astre.traj.r  = addition(astre.traj.r , multiplication(astre.traj.v, deltaT));
            acceleration = multiplication(astre.traj.r , scalaire);
            astre.traj.v = addition(multiplication(acceleration, deltaT), astre.traj.v);
            fprintf(f,"\n,[[%e,%e,%e],", astre.traj.r .x, astre.traj.r .y, astre.traj.r .z);
            fprintf(f,"[%e,%e,%e], ", astre.traj.v.x, astre.traj.v.y, astre.traj.v.z);
            fprintf(f,"%d]", i);
//            energiepot=((GxMs*astre.masse)/(pow(norme(astre.traj.r),2)));
//            energiecin=(astre.masse*pow(norme(astre.traj.v),2));
//            energie=energiepot+energiecin;
           // printf("Energie de conservation: %e\n",energie);
        }

    }
    else
        printf("erreur ouverture du fichier\n");
}

