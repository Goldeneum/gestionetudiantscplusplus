 /*procedure de tri par nom*/
void trinom(){
     for(i=0;i<n;i++){for(d1=0;d1<n;d1++){
                                                               if(strcmp(e[i].nom,e[d1].nom)==-1){
                                                                                             
                                    e[n].code=e[i].code;
                                    e[i].code=e[d1].code;
                                    e[d1].code=e[n].code;
                                   
                                    strcpy(e[n].nom,e[i].nom);
                                    strcpy(e[i].nom,e[d1].nom);
                                    strcpy(e[d1].nom,e[n].nom);
                                   
                                    e[n].d.j=e[i].d.j;
                                    e[i].d.j=e[d1].d.j;
                                    e[d1].d.j=e[n].d.j;
                                   
                                    e[n].d.m=e[i].d.m;
                                    e[i].d.m=e[d1].d.m;
                                    e[d1].d.m=e[n].d.m;
                                   
                                    e[n].d.a=e[i].d.a;
                                    e[i].d.a=e[d1].d.a;
                                    e[d1].d.a=e[n].d.a;
                                   
                                    e[n].n1=e[i].n1;
                                    e[i].n1=e[d1].n1;
                                    e[d1].n1=e[n].n1;
                                   
                                    e[n].n2=e[i].n2;
                                    e[i].n2=e[d1].n2;
                                    e[d1].n2=e[n].n2;
                                   
                                    e[n].n3=e[i].n3;
                                    e[i].n3=e[d1].n3;
                                    e[d1].n3=e[n].n3;
                                   
                                    e[n].moy=e[d1].moy;
                                    e[i].moy=e[d1].moy;
                                    e[d1].moy=e[n].moy;
                                                                }                                
                                                                                              }
                                                               }
                                             
                                              printf("tri par nom... Done :)\n");
    
     }
void trimoy(){
        for(i=0;i<n;i++){for(d1=0;d1<n;d1++){
                                                               if(e[i].moy>e[d1].moy){
                                                                                             
                                    e[n].code=e[i].code;
                                    e[i].code=e[d1].code;
                                    e[d1].code=e[n].code;
                                   
                                    strcpy(e[n].nom,e[i].nom);
                                    strcpy(e[i].nom,e[d1].nom);
                                    strcpy(e[d1].nom,e[n].nom);
                                   
                                    e[n].d.j=e[i].d.j;
                                    e[i].d.j=e[d1].d.j;
                                    e[d1].d.j=e[n].d.j;
                                   
                                    e[n].d.m=e[i].d.m;
                                    e[i].d.m=e[d1].d.m;
                                    e[d1].d.m=e[n].d.m;
                                   
                                    e[n].d.a=e[i].d.a;
                                    e[i].d.a=e[d1].d.a;
                                    e[d1].d.a=e[n].d.a;
                                   
                                    e[n].n1=e[i].n1;
                                    e[i].n1=e[d1].n1;
                                    e[d1].n1=e[n].n1;
                                   
                                    e[n].n2=e[i].n2;
                                    e[i].n2=e[d1].n2;
                                    e[d1].n2=e[n].n2;
                                   
                                    e[n].n3=e[i].n3;
                                    e[i].n3=e[d1].n3;
                                    e[d1].n3=e[n].n3;
                                   
                                    e[n].moy=e[i].moy;
                                    e[i].moy=e[d1].moy;
                                    e[d1].moy=e[n].moy;
                                                                }                                
                                                                                              }
                                                               }
                                              printf("tri par moyenne... Done :)\n");
                                             
     }
/*procedure de tri par date*/
void tridate(){
      for(i=0;i<n;i++){for(d1=0;d1<n;d1++){
                                                               if(e[i].d.a>e[d1].d.a){
                                                                                             
                                    e[n].code=e[i].code;
                                    e[i].code=e[d1].code;
                                    e[d1].code=e[n].code;
                                   
                                    strcpy(e[n].nom,e[i].nom);
                                    strcpy(e[i].nom,e[d1].nom);
                                    strcpy(e[d1].nom,e[n].nom);
                                   
                                    e[n].d.j=e[i].d.j;
                                    e[i].d.j=e[d1].d.j;
                                    e[d1].d.j=e[n].d.j;
                                   
                                    e[n].d.m=e[i].d.m;
                                    e[i].d.m=e[d1].d.m;
                                    e[d1].d.m=e[n].d.m;
                                   
                                    e[n].d.a=e[i].d.a;
                                    e[i].d.a=e[d1].d.a;
                                    e[d1].d.a=e[n].d.a;
                                   
                                    e[n].n1=e[i].n1;
                                    e[i].n1=e[d1].n1;
                                    e[d1].n1=e[n].n1;
                                   
                                    e[n].n2=e[i].n2;
                                    e[i].n2=e[d1].n2;
                                    e[d1].n2=e[n].n2;
                                   
                                    e[n].n3=e[i].n3;
                                    e[i].n3=e[d1].n3;
                                    e[d1].n3=e[n].n3;
                                   
                                    e[n].moy=e[i].moy;
                                    e[i].moy=e[d1].moy;
                                    e[d1].moy=e[n].moy;
                                                                }        
                                                                else if(e[i].d.m>e[d1].d.m){
                                                                                             
                                    e[n].code=e[i].code;
                                    e[i].code=e[d1].code;
                                    e[d1].code=e[n].code;
                                   
                                    strcpy(e[n].nom,e[i].nom);
                                    strcpy(e[i].nom,e[d1].nom);
                                    strcpy(e[d1].nom,e[n].nom);
                                   
                                    e[n].d.j=e[i].d.j;
                                    e[i].d.j=e[d1].d.j;
                                    e[d1].d.j=e[n].d.j;
                                   
                                    e[n].d.m=e[i].d.m;
                                    e[i].d.m=e[d1].d.m;
                                    e[d1].d.m=e[n].d.m;
                                   
                                    e[n].d.a=e[i].d.a;
                                    e[i].d.a=e[d1].d.a;
                                    e[d1].d.a=e[n].d.a;
                                   
                                    e[n].n1=e[i].n1;
                                    e[i].n1=e[d1].n1;
                                    e[d1].n1=e[n].n1;
                                   
                                    e[n].n2=e[i].n2;
                                    e[i].n2=e[d1].n2;
                                    e[d1].n2=e[n].n2;
                                   
                                    e[n].n3=e[i].n3;
                                    e[i].n3=e[d1].n3;
                                    e[d1].n3=e[n].n3;
                                   
                                    e[n].moy=e[i].moy;
                                    e[i].moy=e[d1].moy;
                                    e[d1].moy=e[n].moy;
                                                                }   
                                                                else if(e[i].d.j>e[d1].d.j){
                                                                                             
                                    e[n].code=e[i].code;
                                    e[i].code=e[d1].code;
                                    e[d1].code=e[n].code;
                                   
                                    strcpy(e[n].nom,e[i].nom);
                                    strcpy(e[i].nom,e[d1].nom);
                                    strcpy(e[d1].nom,e[n].nom);
                                   
                                    e[n].d.j=e[i].d.j;
                                    e[i].d.j=e[d1].d.j;
                                    e[d1].d.j=e[n].d.j;
                                   
                                    e[n].d.m=e[i].d.m;
                                    e[i].d.m=e[d1].d.m;
                                    e[d1].d.m=e[n].d.m;
                                   
                                    e[n].d.a=e[i].d.a;
                                    e[i].d.a=e[d1].d.a;
                                    e[d1].d.a=e[n].d.a;
                                   
                                    e[n].n1=e[i].n1;
                                    e[i].n1=e[d1].n1;
                                    e[d1].n1=e[n].n1;
                                   
                                    e[n].n2=e[i].n2;
                                    e[i].n2=e[d1].n2;
                                    e[d1].n2=e[n].n2;
                                   
                                    e[n].n3=e[i].n3;
                                    e[i].n3=e[d1].n3;
                                    e[d1].n3=e[n].n3;
                                   
                                    e[n].moy=e[i].moy;
                                    e[i].moy=e[d1].moy;
                                    e[d1].moy=e[n].moy;
                                                                }                                       
                                                                                              }
                                                               }
                                              printf("tri par date... Done :)\n");
                                             
                                             
     }
