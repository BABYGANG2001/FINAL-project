#include <stdio.h>
 #include <string.h>
     typedef struct
{
     char titre[100];
     char description[100];
     char datedecheance[100];
     char priorite[100];
}tache;
     tache A[100];                // A: tableau
     int c=0,z;                   // C: tableau POSITION

     void ajouter()  {

     printf(" le titre : ");
     scanf(" %[^\n]s",A[c].titre);

     printf(" la descriptin : ");
     scanf(" %[^\n]s",A[c].description);

     printf(" la date d echeance  (YYYY-MM-DD) : ");
     scanf(" %s",A[c].datedecheance);

     printf(" la priorite ( HIGH /  LOW) :  ");
     scanf( " %s",A[c].priorite);
     c++;                       // tableau add position ++
}

     void afficher() {              // FONCTION de Afficher
     if (c == 0) {              // LA BOUCLE QUI VERIFIE SI LE TABLEAU EST VIDE
     printf("Aucune tache disponible.\n");
     return;
}
     for(int i=0; i<c ; i++){
     printf("\n tache %d :\n", i + 1);  // NUMERO DE LA TACHE QUI Afficher
     printf("-titre: %s\n", A[i].titre);
     printf("-description: %s\n", A[i].description);
     printf("-datedecheance: %s\n", A[i].datedecheance);
     printf("-priorite: %s\n", A[i].priorite);
         
     }
         
     }

     void modifier() {
    int M;


    printf("entrez le nombre  de la tache a modifier:");
    scanf("%d",&M);

    if(M >0 && M <= c){
        M--;
        printf("Nouveau Titre :");
        scanf("%s",A[M].titre);
        printf(" Nouvelle Description :");
        scanf("%s",A[M].description);
        printf("Nouvelle DateDEcheance (YYYY/MM/DD):");
        scanf("%s",A[M].datedecheance);
        printf("Nouvelle priorite (high/low):");
        scanf("%s",A[M].priorite);


    }
    else {
        printf(" invalide index !");
    }
}

     void supprimer(){
    int s;             //S:POUR STOCKER LE N° DE LA TACHE A SPRM
    printf("Entrez le numéro de la tache a supprimer (1 à %d): ", c);
    scanf("%d", &s);
    if (s < 1 || s > c) {
    printf("Tache invalide.\n");
    return;
    }
    for (int i = s; i < c - 1; i++) {
    A[i] = A[i + 1];}
    c--;
    printf("Tache supprimer avec succes.\n");
}

    void Filtrer()  {
     char priorite[100];
     char f;

     printf("Entrez la priorite a filtrer (High/Low) : ");
     scanf("%s",priorite);

     for(int i=0; i<c ; i++){
            if(strcmp( A[i].priorite,priorite)==0){     //  STRCMP=COMPARER ENTRER DEUX CHAIN DE CARACTERE
                     printf("\n tache %d :\n", i + 1);  // NUMERO DE LA TACHE QUI Afficher
                     printf("-titre: %s\n", A[i].titre);
                     printf("-description: %s\n", A[i].description);
                     printf("-datedecheance: %s\n", A[i].datedecheance);
                     printf("-priorite: %s\n", A[i].priorite);

            }
}}



     int main()
{    int choix;
     do    // POUR AFFICHAIR LR MENU
{
     printf(" -Menu-\n");
     printf("1-Ajouter une Tache\n");
     printf("2-Afficher la Liste des Taches\n");
     printf("3-Modifier une Tache\n");
     printf("4-Supprimer une Tache\n");
     printf("5-Filtrer les Taches\n");
     printf("choisissez une option :");
     scanf("%d",&choix);




     switch (choix){      //pour afficher chaque action dans le menu
     case 1:
     printf("Vous avez choisi d'Ajouter une Tache.\n");
     ajouter();
     break;
     case 2:
     printf("Vous avez choisi d'Afficher la Liste des Tahes .\n");
     afficher();
     break;
     case 3:
     printf("Vous avez choisi de Modifier une Tache .\n");
     modifier();
     break;
     case 4:
     printf("Vous avez choisi de Supprimer une Tache .\n");
     supprimer();
     break;
     case 5:
     printf("Vous avez choisi de Filtrer les Taches .\n");
     Filtrer(); 
     break;
}
}
     while(choix!=6);     // ! : TOKHALIF
}