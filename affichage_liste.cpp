void aff(){
   
                                   z("les informations des etudiants sont :\a",20);
                                              printf("\n\n----------------------\n");
                                   for(i=0;i<n;i++){
                                                  
                                    printf("\nl'etudiant N: %d",i+1);
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
                                     printf("----------------------\n\n");
                                    }
     } 
