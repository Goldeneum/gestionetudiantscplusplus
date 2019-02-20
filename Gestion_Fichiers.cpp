//procedure principale de la deuxieme cas (travaille sur fichiers)

menu de gestion des etudiantes (travaille dans les fichiers).jpg
menu de gestion des etudiantes (travaille dans les fichiers).jpg


void nacer(){
    
                            char o[5],o1[]="oui",m[30],m0[]="liste",m1[]="remplir",m2[]="afficher",m3[]="ajoute",m4[]="supprimer",m5[]="rechercher",m6[]="quitter";
                       system("cls");
                       printf("                #################################################\n ");
                       x("                     Bienvenue dans la gestion des étudiant \n",20);
                       x("                            (travaille sur fichiers)\n",20);
                       printf("                #################################################\n\n ");
                                        
                       printf("\n\nSelectionner une action:\n\n");
                       printf("   *Pour remplir un fichier taper:"); x("remplir \n",20);
                       printf("   *Pour Afficher les contenue d'un fechier taper:"); x(" afficher\n",20);
                       printf("   *Pour Ajouter une personne dans un fichier taper:"); x(" ajoute\n",20);
                       printf("   *Pour supprimer une personne taper:"); x(" supprimer\n",20);
                       printf("   *Pour Rechercher une personne taper:"); x(" rechercher\n",20);
                       printf("\n\n Pour fermer le programme taper:"); x(" quitter !\n",20);
                       me=0;
/*exe des choix*/                      
                       while(me==0){
                                   scanf("%29s", &m);
                                   system("cls");
                                   me1=strcmp(m,m1);
                                   me2=strcmp(m,m2);
                                   me3=strcmp(m,m3);
                                   me4=strcmp(m,m4);
                                   me5=strcmp(m,m5);
                                   me6=strcmp(m,m6);
                                 
                                  
                                  
                                   if(me1==0){
                                             remp();
                                           
                                             }
                                   if(me2==0){
                                             afffichier();
                                            
                                             
                                            
                                             }
                                   if(me3==0){
                                              ajofichier();
                                             
                                             
                                              }
                                   if(me4==0){
                                              suppfichier();
                                             
                                             
                                              }
                                   if(me5==0){
                                              refichier();
                                             
                                             
                                              }
                                   if(me6==0){
                                             me=11;
                                             
                                             
                                              }
                              
                                                                              
                      
                                                  
                                   
                                    printf("\n\n\n Voulez-vous revenir au menu de gestion ? \n pour le retour vers le menu taper: oui \n sinon taper quelque autre chose pour fermer le programme !");
                                    scanf("%29s",&o);
                                    system("cls");
                                    ok11=strcmp(o,o1);
                                    if(ok11==0){
                       printf("                #################################################\n ");
                       x("                     Bienvenue dans la gestion des etudiant \n",20);
                       x("                            (travaille sur fichiers)\n",20);
                       printf("                #################################################\n\n ");
                                        
                       printf("\n\nSelectionner une action:\n\n");
                       printf("   *Pour remplir un fichier taper:"); x("remplir \n",20);
                       printf("   *Pour Afficher les contenue d'un fechier taper:"); x(" afficher\n",20);
                       printf("   *Pour Ajouter une personne dans un fichier taper:"); x(" ajoute\n",20);
                       printf("   *Pour supprimer une personne taper:"); x(" supprimer\n",20);
                       printf("   *Pour Rechercher une personne taper:"); x(" rechercher\n",20);
                       printf("\n\n Pour fermer le programme taper:"); x(" quitter !\n",20);
                                              
                                               }
                                               else if(ok11!=0) {
                                                   
                                                    me=11;
                                                    }
                                   }
     printf("voutre choi est de fermer le programme\n\n");
                                   printf("ce programme creer par:\n\          Elbasri Abdennacer \n          group c\n          developemment informatique\n          ISTA NTYC SYBA\n");

     }

//programme principale


menu de gestion des etudiantes _ programme principal
menu de gestion des etudiantes _ programme principal

main()
{
      int trav;
      printf("                #################################################\n ");
      printf("                     Bienvenue dans le menu de "); x("la gestion \n",50);
      printf("                #################################################\n\n ");
     
      printf("\n\n\n\n\n                            veuillez patienter"); x(".....",900);
      system("cls");
      system("color a");
      printf("\n\n   voulez vous travaillez sur un fichier ou bien sur la memoire ? \n\n");
      x(" ",2000);
      printf("   taper "); x("1",900); printf(" pour travailler sur la memeoir \n\n");
      x(" ",200);
      printf("   taper "); x("2",900); printf(" pour travailler sur un fichier \a\n\n   ");
      scanf("%d",&trav);
      if(trav==1){
                  nasser();
               
                  }
                  else if(trav==2){
        nacer();
      }
      else{
           printf("!!");
           }
   getch();
}
