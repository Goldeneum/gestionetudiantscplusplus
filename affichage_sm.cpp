void affmen(){
    
             for(i=0;i<n;i++)
                                              {
                                               if(e[i].moy<10)
                                               {
                                               printf("\nle mention de l'etudiant: ");
                                               puts(e[i].nom);
                                               printf(" est: ajourné");
                                                }
                                                if(e[i].moy>=10 && e[i].moy<12)
                                               {
                                               printf("\nle mention de l'etudiant: ");
                                               puts(e[i].nom);
                                               printf(" est: admis");
                                                }
                                                if(e[i].moy>=12 && e[i].moy<14)
                                               {
                                               printf("\nle mention de l'etudiant: ");
                                               puts(e[i].nom);
                                               printf(" est: A.bien");
                                                }
                                                if(e[i].moy>=14 && e[i].moy<16)
                                               {
                                               printf("\nle mention de l'etudiant: ");
                                               puts(e[i].nom);
                                               printf(" est: bien");
                                                }
                                                if(e[i].moy>=16)
                                               {
                                               printf("\nle mention de l'etudiant: ");
                                               puts(e[i].nom);
                                               printf(" est: T.bien");
                                                }
                                             
                                               }
     } 
