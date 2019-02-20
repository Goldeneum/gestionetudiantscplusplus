/*procedure de recherche par code*/
void recode(){
    
     z("taper le code de l'etudiant rechercher: \a",20);
                                              scanf("%d",&d1);
                                              system("cls");
                                              d2=0;
                                              for(i=0;i<n;i++){
                                                               if(e[i].code==d1){
                                                                                 d2=1;
                                                                                 d3=i;
                                                                                 }
                                                               }
                                                               if(d2==1){
                                                               printf("l'etudiant recherche est: ");
                                                                                 puts(e[d3].nom);
                                                                                 printf("\n\nses autres info:\n");
                                                                                 printf("\ndate: \n");
                                    printf("%d",e[d3].d.j);
                                    printf("/%d",e[d3].d.m);
                                    printf("/%d",e[d3].d.a);
                                    printf("\nles notes:\n");
                                    printf("premier note:");
                                    printf("%.2f",e[d3].n1);
                                    printf("\ndeuxieme note:");
                                    printf("%.2f",e[d3].n2);
                                    printf("\ntroisiem note:");
                                    printf("%.2f",e[d3].n3);
                                    printf("\nmoyenne: ");
                                    printf("%.2f\n",e[d3].moy);
                                                                                 }
                                                                                 else{
                                                                                      z("l'etudiant recherche n'existe pas dans la liste ! \a",20);
                                                                                      }
                                             
     }
/*procedure de l'ajoute*/
void ajoute(){
    
      ok=0;
                      
                       while(ok==0){
                                              z("donne les informations de l'etudiant a ajouter: \a \n",20);
                                             
                                              printf("\ncode: ");
                                    scanf("%d",&e[n].code);
                                    printf("\nnom ");
                                    gets(e[n].nom);
                                    gets(e[n].nom);
                                    printf("\ndate: \n");
                                    printf("jour: ");
                                    scanf("%d",&e[n].d.j);
                                    printf("\nmois: ");
                                    scanf("%d",&e[n].d.m);
                                    printf("\nannee: ");
                                    scanf("%d",&e[n].d.a);
                                    printf("\nles notes:\n");
                                    printf("premier note:");
                                    scanf("%f",&e[n].n1);
                                    printf("\ndeuxieme note:");
                                    scanf("%f",&e[n].n2);
                                    printf("\ntroisiem note:");
                                    scanf("%f",&e[n].n3);
                                    printf("\nmoyenne: ");
                                    scanf("%f",&e[n].moy);
                                    n=n+1;
                                               system("cls");
                                    printf("l'etudiant a ete ajoute (^_*)\n");
                                    z("voulez vous ajoute autre etudiant ? taper: oui ou non : \a",20);
                                    scanf("%29s",&o);
                                    system("cls");
                                    ok1=strcmp(o,o1);
                                    if(ok1==0){
                                               ok=0;
                                               }
                                               else {
                                                    ok=11;
                                                    }
                                   
                                  
                                    }
     }

/*procédure de suppression*/
void supp(){
    
     ok=0;
                       i=0;
                       while(ok==0){
                                              z("donne le code l'etudiant a supprimer:\a \n",20);
                                             
                                             
                                    scanf("%d",&d1);
                                    d3=0;
                                    for(i=0;i<n;i++){
                                                     if(e[i].code==d1){
                                                                       d2=i;
                                                                       d3=1;
                                                                       }
                                                     }
                                    if(d3==1){                
                                                     for(i=d2;i<n;i++){
                                    e[i].code=e[i+1].code;
                                    strcpy(e[i].nom,e[i+1].nom);
                                    e[i].d.j=e[i+1].d.j;
                                    e[i].d.m=e[i+1].d.m;
                                    e[i].d.a=e[i+1].d.a;
                                    e[i].n1=e[i+1].n1;
                                    e[i].n2=e[i+1].n2;
                                    e[i].n3=e[i+1].n3;
                                    e[i].moy=e[i+1].moy;
                                                                       }
                                                                       n=n-1;
                                                    
                                               system("cls");
                                    z("l'etudiant a ete supprimer (^_*) \a \n",20);
                                    z("voulez vous supprimer autre etudiant ? taper: oui ou non : ",20);
                                    scanf("%29s",&o);
                                    system("cls");
                                    ok1=strcmp(o,o1);
                                    if(ok1==0){
                                               ok=0;
                                               }
                                               else {
                                                    ok=11;
                                                    }
                                                    }
                                    else{
                                           system("cls");
                                    z("l'etudiant n'exeste pas ! \a \n",20);
                                    z("voulez vous supprimer autre etudiant ? taper: oui ou non : ",20);
                                    scanf("%29s",&o);
                                    system("cls");
                                    ok1=strcmp(o,o1);
                                    if(ok1==0){
                                               ok=0;
                                               }
                                               else {
                                                    ok=11;
                                                    }
                                         }
                                    }
                                             
     }
