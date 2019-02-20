void moyy(){
     mx=e[0].moy;
                                             for(i=1;i<n;i++){
                                                             if(e[i].moy>mx){
                                                                             mx=e[i].moy;
                                                                             mm=i;
                                                                             }
                                                              }
                                              z("l'etudiant qui a la mailleure moyenne est: \a",20);
                                              puts(e[mm].nom);
                                              printf("sont moyenne est: %f\n",e[mm].moy);
     }
void deuxdate(){
    
        z("taper le premier date:\a\n",20);
                                             printf("jour: ");
                                             scanf("%d",&d1);
                                             printf("\nmois: ");
                                             scanf("%d",&d2);
                                             printf("\nannee: ");
                                             scanf("%d",&d3);
                                            
                                             printf("taper le deuxieme date:\n");
                                             printf("jour: ");
                                             scanf("%d",&d4);
                                             printf("\nmois: ");
                                             scanf("%d",&d5);
                                             printf("\nannee: ");
                                             scanf("%d",&d6);
                                             
                                             kk=0;
                                              for(i=0;i<n;i++){
                                                               if(e[i].d.j==d1 && e[i].d.m==d2 && e[i].d.a==d3)
                                                               {k1=i;
                                                               kk=1;
                                                               }
                                                               
                                                               if(e[i].d.j==d4 && e[i].d.m==d5 && e[i].d.a==d6)
                                                               {k2=i;
                                                               kk=1; }
                                                               }
                                           if(kk==1){ 
                                    z("les informations des etudiants recherche sont :\a",20);    
                                              for(i=k1;i<=k2;i++){
                                    printf("l'etudiant N: %d",i);
                                    printf("\ncode: ");
                                    printf("%d",e[i].code);
                                    printf("\nnom ");
                                    puts(e[i].nom);
                                    printf("\ndate: \n");
                                    printf("%d",e[i].d.j);
                                    printf("/%d",e[i].d.m);
                                    printf("/%d",e[i].d.a);
                                    printf("\nles notes:\n");
                                    printf("premier note:");
                                    printf("%.2f",e[i].n1);
                                    printf("\ndeuxieme note:");
                                    printf("%.2f",e[i].n2);
                                    printf("\ntroisiem note:");
                                    printf("%.2f",e[i].n3);
                                    printf("\nmoyenne: ");
                                    printf("%.2f\n",e[i].moy);
                                    }
                                    }
                                    else{
                                         z("les dates que vous tapez n'exeste pas dans les dates de nissance des etudiants...\a",20);
                                         }
     }            
               
