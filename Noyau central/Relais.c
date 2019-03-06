// lecture base de données pour savoir si on active  ou non le relais
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <wiringPi.h>
#include <Utilitaires/Fonction_Base_de_Données.h>


int Relais()
{
    int Tableau_Relais [2];
    //Tableau_Relais[0] => Pin RELAIS
    //Tableau_Relais[1] => Etat du RELAIS
//--------------------------------------------------------------------------------------------------
//lecture basse de données pour enregistré dans un tableau
//--------------------------------------------------------------------------------------------------
    Tableau_Relais = Base_Relais(); 

//--------------------------------------------------------------------------------------------------
    // Marche relais chauffage
//--------------------------------------------------------------------------------------------------
	if(Tableau_Relais[1] == 1)
	    {digitalWrite (Tableau_Relais[0], 1);}

//--------------------------------------------------------------------------------------------------	
	// Arret relais chauffage
//--------------------------------------------------------------------------------------------------
	if (Tableau_Relais[1] == 0)
	    {digitalWrite (Tableau_Relais[0], 0);}
}