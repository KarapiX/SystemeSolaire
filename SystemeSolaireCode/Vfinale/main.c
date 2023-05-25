#include <stdio.h>

#include "fichier.h"
#include "Euler.h"
#define PATH    "../planete.json"
int main() {

    /*point * file = NULL;
    file = (point *) malloc(nb*sizeof(point ));*/

   /* vectorTest();
    vector test;
    vector a;
    vector b;
    test.x = 54.656;
    test.y = 0;
    test.z = 0;
    a.x = 7.54;
    a.y = 96.452;
    a.z = 687.24;
    b.x = 55.9;
    b.y = 97;
    b.z = 12;
    addition(a, b, &test);
    printf("Le vecteur resultat a pour coordonnées : (%lf;%lf;%lf)\n", test.x, test.y, test.z);*/

    //Venus : perihelie = 1.07476170 × 10^11 m, masse = 4.8685 × 10^24 kg
    //Mercure : perihelie = 4.6001009 × 10^10 m, masse = 0.3302 × 10^24 kg
    //Mars : perihelie = 2.06655215 × 10^11 m, masse = 6,39 × 10^23 kg
    //Jupiter : perihelie = 7.40679835 × 10^11 m, masse = 1,898 × 10^27 kg
    //Saturne : perihelie = 1.349823615 × 10^12 m, masse = 5,683 × 10^26 kg
    //Uranus : perihelie = 2.734998229 × 10^12 m, masse = 8,681 × 10^25 kg
    //Neptune : perihelie = 4.459753056 × 10^12 m, masse = 1,024 × 10^26 kg




    double perihelie = 1.470000e+11; //m
    double G =  6.674184e-11; //m^3 kg^-1 s^-2
    double masse_soleil = 1.989e+30; //kg
    double GxMs = -(G * masse_soleil);   // G = constante gravitationelle universelle


    //Terre : perihelie = 1.47098291*10^11 m, masse = 5.9736*10^24 kg , constante gravitationelle = 9.80665 m/s²
    //delta T = 8640s

    planete Terre;
    Terre.nom = "Terre\0";
    Terre.masse = 5.9736e+24; //kg

    vector position;
    Terre.traj.r.x = perihelie; position.x = Terre.traj.r.x;    //<
    Terre.traj.r.y = 0;         position.y = Terre.traj.r.y;    //< vecteur position
    Terre.traj.r.z = 0;         position.z = Terre.traj.r.z;    //<
                                  //^^^^^^^^^^^^^^^^^^^^^^^^^^^^
                                  //   écriture plus lisible

    vector vitesse;
    Terre.traj.v.x = 0;            vitesse.x = Terre.traj.v.x;  //<
    Terre.traj.v.y = 3.028629e+04; vitesse.y = Terre.traj.v.y;  //< vecteur vitesse
    Terre.traj.v.z = 0;            vitesse.z = Terre.traj.v.z;  //<
                                   //^^^^^^^^^^^^^^^^^^^^^^^^^^^^
                                   //   écriture plus lisible
//-----------------------------------------------------------------------
    planete Mercure;

    vector position2;
    vector vitesse2;
    vector acceleration2;

    Mercure.perihelie = 4.6001009e+10; //m        //
    Mercure.nom = "Mercure\0";                    // Mercure
    Mercure.masse = 0.3302e+24; //kg              //

    Mercure.traj.r.x = Mercure.perihelie;         position2.x = Mercure.traj.r.x;    //<
    Mercure.traj.r.y = 0;                         position2.y = Mercure.traj.r.y;    //< vecteur position
    Mercure.traj.r.z = 0;                         position2.z = Mercure.traj.r.z;    //<
    //^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    //   écriture plus lisible


    Mercure.traj.v.x = 0;                     vitesse2.x = Mercure.traj.v.x;  //<
    Mercure.traj.v.y = 5.897569e+04;          vitesse2.y = Mercure.traj.v.y;  //< vecteur vitesse
    Mercure.traj.v.z = 0;                     vitesse2.z = Mercure.traj.v.z;  //<
    //^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    //   écriture plus lisible


    acceleration2.x = 0; acceleration2.y = 0; acceleration2.z = 0;

//------------------------------------------------------------------------------------------------------------------------------

    planete Venus;

    vector position3;
    vector vitesse3;
    vector acceleration3;

    Venus.perihelie = 1.07476170e+11; //m       //
    Venus.nom = "Venus\0";                      // Venus
    Venus.masse = 4.8685e+24; //kg              //

    Venus.traj.r.x = Venus.perihelie;           position3.x = Venus.traj.r.x;    //<
    Venus.traj.r.y = 0;                         position3.y = Venus.traj.r.y;    //< vecteur position
    Venus.traj.r.z = 0;                         position3.z = Venus.traj.r.z;    //<
    //^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    //   écriture plus lisible


    Venus.traj.v.x = 0;                     vitesse3.x = Venus.traj.v.x;  //<
    Venus.traj.v.y = 3.53e+04  ;          vitesse3.y = Venus.traj.v.y;  //< vecteur vitesse
    Venus.traj.v.z = 0;                     vitesse3.z = Venus.traj.v.z;  //<
    //^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    //   écriture plus lisible


    acceleration3.x = 0; acceleration3.y = 0; acceleration3.z = 0;
    //------------------------------------------------------------------------------------------------------------------------------

    planete Mars;

    vector position4;
    vector vitesse4;
    vector acceleration4;

    Mars.perihelie = 2.06655215e+11; //m       //
    Mars.nom = "Mars\0";                       // Mars
    Mars.masse = 6.39e+23; //kg                //

    Mars.traj.r.x = Mars.perihelie;            position4.x = Mars.traj.r.x;    //<
    Mars.traj.r.y = 0;                         position4.y = Mars.traj.r.y;    //< vecteur position
    Mars.traj.r.z = 0;                         position4.z = Mars.traj.r.z;    //<
                                                // ^^^^^^^^^^^^^^^^^^^^^^^^^^^^
                                                 //   écriture plus lisible


    Mars.traj.v.x = 0;                     vitesse4.x = Mars.traj.v.x;  //<
    Mars.traj.v.y = 2.41e+04;          vitesse4.y = Mars.traj.v.y;  //< vecteur vitesse
    Mars.traj.v.z = 0;                     vitesse4.z = Mars.traj.v.z;  //<
                                              //^^^^^^^^^^^^^^^^^^^^^^^^^^^^
                                              //   écriture plus lisible


    acceleration4.x = 0; acceleration4.y = 0; acceleration4.z = 0;



//------------------------------------------------------------------------------------------------------------------------------

    planete Jupiter;

    vector position5;
    vector vitesse5;
    vector acceleration5;

    Jupiter.perihelie = 7.40679835e+11; //m        //
    Jupiter.nom = "Jupiter\0";                     // Jupiter
    Jupiter.masse = 1.898e+27; //kg                //

    Jupiter.traj.r.x = Jupiter.perihelie;         position5.x = Jupiter.traj.r.x;    //<
    Jupiter.traj.r.y = 0;                         position5.y = Jupiter.traj.r.y;    //< vecteur position
    Jupiter.traj.r.z = 0;                         position5.z = Jupiter.traj.r.z;    //<
                                                     //^^^^^^^^^^^^^^^^^^^^^^^^^^^^
                                                     //   écriture plus lisible


    Jupiter.traj.v.x = 0;                     vitesse5.x = Jupiter.traj.v.x;  //<
    Jupiter.traj.v.y = 13.1e+04;              vitesse5.y = Jupiter.traj.v.y;  //< vecteur vitesse
    Jupiter.traj.v.z = 0;                     vitesse5.z = Jupiter.traj.v.z;  //<
                                                 //^^^^^^^^^^^^^^^^^^^^^^^^^^^^
                                                 //   écriture plus lisible


    acceleration5.x = 0; acceleration5.y = 0; acceleration5.z = 0;

//------------------------------------------------------------------------------------------------------------------------------

    planete Saturne;

    vector position6;
    vector vitesse6;
    vector acceleration6;

    Saturne.perihelie = 1.349823615e+12; //m        //
    Saturne.nom = "Saturne\0";                     // Saturne
    Saturne.masse = 5.683e+26; //kg                //

    Saturne.traj.r.x = Saturne.perihelie;         position6.x = Saturne.traj.r.x;    //<
    Saturne.traj.r.y = 0;                         position6.y = Saturne.traj.r.y;    //< vecteur position
    Saturne.traj.r.z = 0;                         position6.z = Saturne.traj.r.z;    //<
    //^^^^^^^^^^^^^^^^^^^^^^^^^^^^
    //   écriture plus lisible


    Saturne.traj.v.x = 0;                     vitesse6.x = Saturne.traj.v.x;  //<
    Saturne.traj.v.y = 0.96e+04;          vitesse6.y = Saturne.traj.v.y;  //< vecteur vitesse
    Saturne.traj.v.z = 0;                     vitesse6.z = Saturne.traj.v.z;  //<
                                                //^^^^^^^^^^^^^^^^^^^^^^^^^^^^
                                                  //   écriture plus lisible


    acceleration6.x = 0; acceleration6.y = 0; acceleration6.z = 0;


//------------------------------------------------------------------------------------------------------------------------------

    planete Uranus;

    vector position7;
    vector vitesse7;
    vector acceleration7;

    Uranus.perihelie = 4.459753056e+12; //m        //
    Uranus.nom = "Uranus\0";                      // Uranus
    Uranus.masse = 5,683e+26; //kg                //

    Uranus.traj.r.x = Uranus.perihelie;          position7.x = Uranus.traj.r.x;    //<
    Uranus.traj.r.y = 0;                         position7.y = Uranus.traj.r.y;    //< vecteur position
    Uranus.traj.r.z = 0;                         position7.z = Uranus.traj.r.z;    //<
                                                //^^^^^^^^^^^^^^^^^^^^^^^^^^^^
                                                //   écriture plus lisible


    Uranus.traj.v.x = 0;                     vitesse7.x = Uranus.traj.v.x;  //<
    Uranus.traj.v.y =  0.68e+04;             vitesse7.y = Uranus.traj.v.y;  //< vecteur vitesse
    Uranus.traj.v.z = 0;                     vitesse7.z = Uranus.traj.v.z;  //<
                                            //^^^^^^^^^^^^^^^^^^^^^^^^^^^^
                                            //   écriture plus lisible


    acceleration7.x = 0; acceleration7.y = 0; acceleration7.z = 0;

//------------------------------------------------------------------------------------------------------------------------------

    planete Neptune;

    vector position8;
    vector vitesse8;
    vector acceleration8;

    Neptune.perihelie = 1.349823615e+12; //m        //
    Neptune.nom = "Neptune\0";                      // Neptune
    Neptune.masse = 1,024e+26; //kg                 //

    Neptune.traj.r.x = Neptune.perihelie;         position8.x = Neptune.traj.r.x;    //<
    Neptune.traj.r.y = 0;                         position8.y = Neptune.traj.r.y;    //< vecteur position
    Neptune.traj.r.z = 0;                         position8.z = Neptune.traj.r.z;    //<
                                                //^^^^^^^^^^^^^^^^^^^^^^^^^^^^
                                                //   écriture plus lisible


    Neptune.traj.v.x = 0;                     vitesse8.x = Neptune.traj.v.x;  //<
    Neptune.traj.v.y =0.54e+04;               vitesse8.y = Neptune.traj.v.y;  //< vecteur vitesse
    Neptune.traj.v.z = 0;                     vitesse8.z = Neptune.traj.v.z;  //<
                                            //^^^^^^^^^^^^^^^^^^^^^^^^^^^^
                                            //   écriture plus lisible


    acceleration8.x = 0; acceleration8.y = 0; acceleration8.z = 0;

    vector unitaire;
    unitaire.x = 1; unitaire.y = 1; unitaire.z = 0;



//    printf("[[vecteur position (Ox, Oy, Oz)], [vecteur vitesse (vx, vy, vz)], temps n°x]\n");
//    printf("un temps = 8640s = 0.1jour\n\n");
//    printf("%s :\n", Planete.nom);

    //euler(Planete, position, vitesse, unitaire, acceleration, deltaT, constante, masse_soleil, temp, scalaire, nb);

    FILE*f=NULL;
    f=fopen(PATH,"w+");

    fprintf(f, "{");
    calculEuler(Terre,f,GxMs,86400);
    fprintf(f, "]\n,");
    calculEuler(Mercure,f,GxMs,86400);
    fprintf(f, "]\n,");
    calculEuler(Venus,f,GxMs,86400);
    fprintf(f, "]\n,");
    calculEuler(Mars,f,GxMs,86400);
    fprintf(f, "]\n,");
    calculEuler(Saturne,f,GxMs,86400);

    Terre.nom="Terreasym";
    Mercure.nom="Mercureasym";
    Venus.nom="Venusasym";
    Mars.nom="Marsasym";
    Saturne.nom="Saturneasym";
    fprintf(f, "]\n,");
    calculEulerasym(Terre,f,GxMs,86400);
    fprintf(f, "]\n,");
    calculEulerasym(Mercure,f,GxMs,86400);
    fprintf(f, "]\n,");
    calculEulerasym(Venus,f,GxMs,86400);
    fprintf(f, "]\n,");
    calculEulerasym(Mars,f,GxMs,86400);
    fprintf(f, "]\n,");
    calculEulerasym(Saturne,f,GxMs,86400);

    fprintf(f,"]}");
    fclose(f);

    return 0;
}
