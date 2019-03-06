// lecture du fichier de la sonde et mise à jours dans la base de données
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <wiringPi.h>
#include <Fonction_Base_de_Données.h>
#include <Utilitaires/Lecture_Fichiers.h>

int Sonde_Ambiance ()
{
    float Sonde_Ambiance = 0; // init variable Sonde_Ambiance
    char Adresse_Sonde = "/sys/bus/w1/devices"; //Adresse du fichier de la sonde Ambiance
    char Caractere_Rechercher = '=';    // le caractère recherche

//--------------------------------------------------------------------------------------------------
//enregistrement de la lecture du fichier de la sonde ambiance
//--------------------------------------------------------------------------------------------------
    Sonde_Ambiance = Lecture_Fichier_Float (Adresse_Sonde, Caractere_Rechercher)

//--------------------------------------------------------------------------------------------------
    //Mise à jours de la température dans la basse de donné
//--------------------------------------------------------------------------------------------------
    Base_Sonde_Ambiante(Sonde_Ambiance);
}