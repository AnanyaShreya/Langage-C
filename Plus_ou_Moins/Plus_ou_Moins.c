#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void	ft_putstr(char *str);
void    ft_solo(const int MIN, unsigned int MAX);
void    ft_multi(const int MIN, unsigned int MAX);
void    ft_plus_ou_moins(unsigned int mysterious_number);

int     main(void)
{
    const int   MIN = 1;
    unsigned int         MAX = 100000;
    unsigned int         retry = 1;
    unsigned int         choixMenu = 0;
    unsigned int         choixNiveau = 0;

  	while (retry == 1)
  	{
        ft_putstr("##############################################\n");
        ft_putstr("#                                            #\n");
        ft_putstr("#     Bienvenue au jeu du Plus ou Moins!     #\n");
        ft_putstr("#                                            #\n");
        ft_putstr("##############################################\n\n");
        ft_putstr("Choix du niveau : (Repondez par 1, 2, 3 ou 4)\n\n");
        ft_putstr("1. Facile    : Entre 1 et 100\n");
        ft_putstr("2. Moyen     : Entre 1 et 1000\n");
        ft_putstr("3. Difficile : entre 1 et 10000\n");
        ft_putstr("4. Quitter le jeu\n");
        ft_putstr ("\nVotre Choix : ");
        scanf("%d", &choixNiveau);
        ft_putstr("\n##############################################\n\n");

        switch (choixNiveau)
        {
            case 1:
                MAX = 100;
                break;
            case 2:
                MAX = 1000;
                break;
            case 3:
                MAX = 10000;
                break;
            case 4:
                ft_putstr("Au revoir !\n");
                exit(1);
                break;
            default:
                ft_putstr("\nReponse invalide ! - Fin du programme\n\n\n");
                exit(1);
                break;
        }

        ft_putstr("Nombre de joueurs : (Repondez par 1, 2 ou 3)\n");
        ft_putstr ("\n1. Jouer en solo\n");
        ft_putstr ("\n2. Jouer a plusieurs\n");
        ft_putstr ("\n3. Quitter le jeu\n\n");
        ft_putstr ("Votre Choix : ");
        scanf ("%d", &choixMenu);

        switch (choixMenu)
        {
            case 1:
                ft_solo(MIN, MAX);
                break;
            case 2:
                ft_multi(MIN, MAX);
                break;
            case 3:
                exit(1);
                break;
            default:
                ft_putstr("\nReponse invalide ! - Fin du programme\n\n\n");
                exit(1);
                break;
        }
    }
}

void     ft_solo(const int MIN, unsigned int MAX)
{
    unsigned int     mysterious_number = 0;

    srand(time(NULL));
    mysterious_number = (rand() % (MAX - MIN + 1)) + MIN;

    ft_plus_ou_moins(mysterious_number);
}

void     ft_multi(const int MIN, unsigned int MAX)
{
    unsigned int         mysterious_number = 0;
    char        player1[20] = "";
    char        player2[20] = "";

    ft_putstr("\nLancement de la partie multijoueur\n\n");
    ft_putstr("Joueur 1 quel est ton pseudo ? (max 20 char) : \n\n");
    scanf("%s", &player1);
    ft_putstr("Joueur 2 quel est ton pseudo ? (max 20 char) : \n\n");
    scanf("%s", &player2);
    printf("Bienvenue a vous %s et %s ! \n\n", player1, player2);
    printf("%s choisi un nombre entre %d et %d (a l'abri des regards bien entendu) : ", player1, MIN, MAX);
    scanf("%d", &mysterious_number);
    ft_plus_ou_moins(mysterious_number);
}

void     ft_plus_ou_moins(unsigned int mysterious_number)
{
    unsigned int count = 0;
    unsigned int number_value = 0;

    do
    {
        ft_putstr("\nQuel est le nombre mystere ? : ");
        scanf("%d", &number_value);
        if (number_value > mysterious_number)
        {
            ft_putstr("C'est moins !\n\n");
            count++;
        }
        else if (number_value < mysterious_number)
        {
            ft_putstr("C'est plus !\n\n");
            count++;
        }
        else if (number_value == mysterious_number)
        {
            count++;
            printf("Bravo vous avez trouver le nombre mystere en {%d} coups !!!\n\n", count);
        }
    } while (number_value != mysterious_number);
}

void    ft_putstr(char *str)
{
    unsigned int i = 0;

    while (str[i] != '\0')
    {
        write(1, &str[i], 1);
        i++;
    }
}
