//
// Created by Vic on 23/06/2022.
//

#ifndef PROJET_C_FICHIER_H
#define PROJET_C_FICHIER_H
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct s_vector{
    double x,y,z;
}vector;

typedef struct s_point{
    vector r,v;
}point;

/*typedef struct s_trajectoire{
    point file;
}traj;*/

typedef struct s_planete{
    char* nom;
    double masse;
    point traj;
    double perihelie;
}planete;

vector addition(vector a, vector b);
vector soustraction(vector a, vector b);
vector multiplication(vector a, double scalaire);
double norme(vector a);
void vectorTest();


#endif //PROJET_C_FICHIER_H
