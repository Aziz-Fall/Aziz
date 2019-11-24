#include "vecteur.h"

int main(void)
{
    Vecteur v = creer_vecteur();
    inserer(v, 23);
    inserer(v, 15);
    inserer(v, 65);
    inserer(v, 25);
    inserer(v, 35);
    inserer(v, 5);
    printf("########################################\n");

    affiche_vecteur(v);
    printf("########################################\n");

    printf("->nomber_element : %d.\n", v->nomber_element);
    printf("->index : %d\n", max(v));

    printf("########################################\n");

    printf("->var_deleted : %d\n", supprimer(v, 3));
    affiche_vecteur(v);
    printf("->nomber_element : %d.\n", v->nomber_element);

    printf("########################################\n");

    printf("->valeur supprimer: %d\n", supprimer_dernier_element(v));
    affiche_vecteur(v);
    printf("->nomber_element : %d.\n", v->nomber_element);

    printf("########################################\n");

    printf("->valeur supprimée: %d\n", supprimer_premier_element(v));
    affiche_vecteur(v);
    printf("->nomber_element : %d.\n", v->nomber_element);

    printf("########################################\n");
    
    if(est_vide(v))
        printf("Le vecteur est vide.\n");
    else
        printf("Le vecteur n'est pas vide.\n");

    printf("########################################\n");

    clear_vector(v);
    return EXIT_SUCCESS;
}