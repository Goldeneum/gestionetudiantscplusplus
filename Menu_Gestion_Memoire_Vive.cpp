 // Menu de la premier cas (travaille sur la memoire)
void main(){
    
      char m[30],m0[]="liste",m1[]="mailleure",m2[]="listedate",m3[]="mention",m4[]="recherche",m5[]="ajoute",m6[]="supprimmer",m7[]="alpha",m8[]="moyenne",m9[]="nes",m10[]="quitter";
      
           system("cls");
                       printf("                #################################################\n ");
                       x("                     Bienvenue dans la gestion des etudiant \n",20);
                       x("                            (travaille sur memoire)\n",20);
                       printf("                #################################################\n\n ");
                      
/*****************************
******************************
******* Remplissage **********
******************************
******************************/
                       x("dans ce cas le remplissage de la liste est obligatoire pour passer a le menu de gestion\nentre les info des etudiant:",35);
                       ok=0;
                       i=0;
                       x("\n\nle premier etudiant:\a",20);
                       while(ok==0){
                                    printf("\ncode: ");
                                    scanf("%d",&e[i].code);
                                    printf("\nnom ");
                                    gets(e[i].nom);
                                    gets(e[i].nom);
                                    printf("\ndate: \n");
                                    printf("jour: ");
                                    scanf("%d",&e[i].d.j);
                                    printf("\nmois: ");
                                    scanf("%d",&e[i].d.m);
                                    printf("\nannee: ");
                                    scanf("%d",&e[i].d.a);
                                    printf("\nles notes:\n");
                                    printf("premier note:");
                                    scanf("%f",&e[i].n1);
                                    printf("\ndeuxieme note:");
                                    scanf("%f",&e[i].n2);
                                    printf("\ntroisiem note:");
                                    scanf("%f",&e[i].n3);
                                    e[i].moy=(e[i].n1+e[i].n2+e[i].n3)/3;
                                    printf("\nmoyenne: %2f ",e[i].moy);
                                    getch();
                                     system("cls");
                                    x("voulez vous ajoute autre etudiant ? taper: oui ou non : \a",25);
                                    scanf("%29s",&o);
                                    system("cls");
                                    ok1=strcmp(o,o1);
                                    if(ok1==0){
                                               ok=0;
                                               }
                                               else {
                                                    ok=11;
                                                    }
                                   i++;
                                   n++;
                                    }
                       printf("                #################################################\n ");
                       x("                     Bienvenue dans la gestion des etudiant \n",20);
                       x("                            (travaille sur memoire)\n",20);
                       printf("                #################################################\n\n ");
                      
                       printf("\n\nSelectionner une action:\n\n");
                       printf("   *Pour Afficher laliste des etudiant taper:"); x("liste\n",25);
                       printf("   *Pour Afficher la meilleure moyenne taper:"); x(" mailleure\n",25);
                       printf("   *Pour Afficher la liste des etudiants nes entre deux dates taper:"); x(" listedate\n",25);
                       printf("   *Pour Afficher la mention obtenue de chaque etudiant taper:"); x(" mention\n",25);
                       printf("   *Pour Rechercher un etudiant dans la liste taper:"); x(" recherche\n",25);
                       printf("   *Pour Ajouter un etudiant dans la liste taper:"); x(" ajoute\n",25);
                       printf("   *Pour Supprimer un etudiant de la liste:"); x(" supprimmer\n",25);
                       printf("   *Pour Trier la liste des etudiants par ordre alphabtique des noms:"); x(" alpha\n",25);
                       printf("   *Pour Trier la liste des etudiants par ordre de Moyenne taper:"); x(" moyenne\n",25);
                       printf("   *Pour Trier la liste des etudiants par ordre date de naissance taper:"); x(" nes\n",25);
                       printf("\n\n Pour fermer le programme taper:"); x(" quitter !\n",25);
                       me=0;
                       ok11=0;
                      
/*****************************
******************************
**** Debut des conditions ****
******************************
******************************/
                      
                       while(me==0){
                                   scanf("%29s", &m);
                                   system("cls");
                                   me0=strcmp(m,m0);
                                   me1=strcmp(m,m1);
                                   me2=strcmp(m,m2);
                                   me3=strcmp(m,m3);
                                   me4=strcmp(m,m4);
                                   me5=strcmp(m,m5);
                                   me6=strcmp(m,m6);
                                   me7=strcmp(m,m7);
                                   me8=strcmp(m,m8);
                                   me9=strcmp(m,m9);
                                   me10=strcmp(m,m10);
                                  
/*****************************
******************************
******* Affichage ************
******************************
******************************/
                                   if(me0==0){
                                           aff();          
                                            
                                             }
/********************************
*********************************
* Affichage de mailleur moyenne *
*********************************
*********************************/
                                   if(me1==0){
                                              moyy();
                                              }
/***************************************
****************************************
* Affichege des etud. entre deux date **
****************************************
****************************************/                   
                                   if(me2==0){
                                             
                                           deuxdate();
                                   
                                             }
/*******************************
********************************
**** Affichage avec Mention ****
********************************
********************************/                                            

                                   if(me3==0){
                                      affmen();
                                              }
/*****************************
******************************
***** recherche par code *****
******************************
******************************/
                                   if(me4==0){
                                             recode();
                                              }
/*****************************
******************************
********** L'ajoute **********
******************************
******************************/

                                   if(me5==0){
                                             ajoute();
                                              }
/*****************************
******************************
********* Supprition *********
******************************
******************************/

                                   if(me6==0){
                                              supp();
                                             
                                              }
/*****************************
******************************
********* Tri par Nom ********
******************************
******************************/

                                   if(me7==0){
                                              trinom();
                                              }
/*****************************
******************************
******** Tri par moyenne ********
******************************
******************************/

                                   if(me8==0){
                                             
                                           trimoy();
                                             
                                              }
/*****************************
******************************
******** Tri par date ********
******************************
******************************/

                                   if(me9==0){
                                             tridate();
                                              }
                                  
                                   if(me10==0){
                                             me=11;
                                             }
                                            
                                            
                      
                                                  
                                   
                                    printf("\n\n\n Voulez-vous revenir au menu de gestion ? \n pour le retour vers le menu taper: oui \n sinon taper quelque autre chose pour fermer le programme !");
                                    scanf("%29s",&o);
                                    system("cls");
                                    ok11=strcmp(o,o1);
                                    if(ok11==0){
                       printf("                #################################################\n ");
                       x("                     Bienvenue dans la gestion des etudiant \n",20);
                       x("                            (travaille sur memoire)\n",20);
                       printf("                #################################################\n\n ");
                      
                       printf("\n\nSelectionner une action:\n\n");
                       printf("   *Pour Afficher laliste des etudiant taper:"); x("liste\n",25);
                       printf("   *Pour Afficher la meilleure moyenne taper:"); x(" mailleure\n",25);
                       printf("   *Pour Afficher la liste des etudiants nes entre deux dates taper:"); x(" listedate\n",25);
                       printf("   *Pour Afficher la mention obtenue de chaque etudiant taper:"); x(" mention\n",25);
                       printf("   *Pour Rechercher un etudiant dans la liste taper:"); x(" recherche\n",25);
                       printf("   *Pour Ajouter un etudiant dans la liste taper:"); x(" ajoute\n",25);
                       printf("   *Pour Supprimer un etudiant de la liste:"); x(" supprimmer\n",25);
                       printf("   *Pour Trier la liste des etudiants par ordre alphabtique des noms:"); x(" alpha\n",25);
                       printf("   *Pour Trier la liste des etudiants par ordre de Moyenne taper:"); x(" moyenne\n",25);
                       printf("   *Pour Trier la liste des etudiants par ordre date de naissance taper:"); x(" nes\n",25);
                       printf("\n\n Pour fermer le programme taper:"); x(" quitter !\n",25);
                                              
                                               }
                                               else if(ok11!=0) {
                                                   
                                                    me=11;
                                                    }
                                   }
                                                                            
                                   printf("voutre choi est de fermer le programme\n\n");
                                   printf("ce programme creer par:\n\          Elbasri Abdennacer \n          group c\n          developemment informatique\n          ISTA NTYC SYBA\n");
}
