void remp(){
   x("donner le nome de fichier a creer : \n",20);
   scanf("%s",f);
   p = fopen(f, "w");

  x("Creation du fichier: ",30); printf("%s \n\n          veuillez patienter",f); x("........\n",800);

  printf("votre fichier a ete creer\n  donner le nombre des personnes que vous voulez ajoute :\n ");

  scanf("%d",&n);

  for (i=0;i<n;i++)

    {

     printf("personne N: %d \n", i+1);

     printf("Numero de personne N: %d \n", i+1);
     scanf("%d",&ee.nm);     

     printf("Nom de personne N: %d \n", i+1);
     scanf("%s",ee.nom);
    
     printf("Prenom de personne N: %d \n", i+1);
     scanf("%s",ee.pnom);
    
     printf("adress electronique de personne N: %d \n", i+1);
     scanf("%s",ee.email);
    
     printf("date de naissance de personne N: %d \n", i+1);
     scanf("%d",&ee.d.j);
     scanf("%d",&ee.d.m);
     scanf("%d",&ee.d.a);

     fprintf(p, "%d %s %s %s %d %d %d\n",ee.nm,ee.nom,ee.pnom,ee.email,ee.d.j,ee.d.m,ee.d.a);

     }
     fclose(p);

}

/*affichage*/
void afffichier(){
printf("donner le nome de votre fichier : \n");
   scanf("%s",f);
   x("recherche de fichier: ",30); printf("%s \n\n          veuillez patienter",f); x("........\n\n",800);
  p = fopen(f, "r");
  c=0;

  if (!p)

     { 

      c=1;

     }
     if(c==0){

  printf("*** Contenu du fichier  %s ***\n", f);
  printf("Numero, nom, prenom, e-mail, date de NC.\n\n");
  while (!feof(p))

    {
     fscanf(p,"%d",&ee.nm);     
     fscanf(p,"%s",ee.nom);
     fscanf(p,"%s",ee.pnom);
     fscanf(p,"%s",ee.email);
     fscanf(p,"%d",&ee.d.j);
     fscanf(p,"%d",&ee.d.m);
     fscanf(p,"%d",&ee.d.a);

    
     printf("N: %d nom: %s prenom:%s email: %s date: %d %d %d\n",ee.nm,ee.nom,ee.pnom,ee.email,ee.d.j,ee.d.m,ee.d.a);
    }
    fclose(p);
}
else if (c==1){ printf("\a erreur: le fichier: %s n'existe pas.\n", f);}
    
}

/*l'ajoute*/
void ajofichier(){
  printf("donner le nome de votre fichier : \n");
   scanf("%s",f);
    x("recherche de fichier: ",30); printf("%s \n\n          veuillez patienter",f); x("........\n\n",800);
  p = fopen(f, "r");
  c=0;

  if (!p)

     { 

      c=1;

     }
  if(c==0){


  q = fopen(qq, "w");

      printf("personne N: %d \n", i+1);

     printf("Numero de personne N: %d \n", i+1);
     scanf("%d",&nn.nm);     

     printf("Nom de personne N: %d \n", i+1);
     scanf("%s",nn.nom);
    
     printf("Prenom de personne N: %d \n", i+1);
     scanf("%s",nn.pnom);
    
     printf("adress electronique de personne N: %d \n", i+1);
     scanf("%s",nn.email);
    
     printf("date de naissance de personne N: %d \n", i+1);
     scanf("%d",&nn.d.j);
     scanf("%d",&nn.d.m);
     scanf("%d",&nn.d.a);


  while (!feof(p))

    {
     fscanf(p,"%d",&ee.nm);     
     fscanf(p,"%s",ee.nom);
     fscanf(p,"%s",ee.pnom);
     fscanf(p,"%s",ee.email);
     fscanf(p,"%d",&ee.d.j);
     fscanf(p,"%d",&ee.d.m);
     fscanf(p,"%d",&ee.d.a);
    
     fprintf(q,"%d %s %s %s %d %d %d\n",ee.nm,ee.nom,ee.pnom,ee.email,ee.d.j,ee.d.m,ee.d.a);

    }


   fprintf(q,"%d %s %s %s %d %d %d\n",nn.nm,nn.nom,nn.pnom,nn.email,nn.d.j,nn.d.m,nn.d.a);
  fclose(q);
  fclose(p);
  p = fopen(f, "w");
  q = fopen(qq, "r");
  while (!feof(q))

    {
     fscanf(q,"%d",&ee.nm);     
     fscanf(q,"%s",ee.nom);
     fscanf(q,"%s",ee.pnom);
     fscanf(q,"%s",ee.email);
     fscanf(q,"%d",&ee.d.j);
     fscanf(q,"%d",&ee.d.m);
     fscanf(q,"%d",&ee.d.a);
    
     fprintf(p,"%d %s %s %s %d %d %d\n",ee.nm,ee.nom,ee.pnom,ee.email,ee.d.j,ee.d.m,ee.d.a);

    }
  fclose(q);
  fclose(p);
  printf("le personne a ete ajoute :) \n");
}
else if (c==1){ printf("\a erreur: le fichier: %s n'existe pas.\n", f);}
}
/*procedure de suppristion dans un fichier*/
void suppfichier(){
    
     printf("donner le nome de votre fichier");
     scanf("%s",f);
      x("recherche de fichier: ",30); printf("%s \n\n          veuillez patienter",f); x("........\n\n",800);
     p = fopen(f,"r");
     c=0;
     if(!p){
         c=1;  
            }
     if(c==0){
     q = fopen(qq,"w");
     printf("donner le numero de personne que vous voulez supprimer:\n");
     scanf("%d",&in);
     coo=0;
     i=0;
     while(!feof(p)){
     fscanf(p,"%d",&ee.nm);     
     fscanf(p,"%s",ee.nom);
     fscanf(p,"%s",ee.pnom);
     fscanf(p,"%s",ee.email);
     fscanf(p,"%d",&ee.d.j);
     fscanf(p,"%d",&ee.d.m);
     fscanf(p,"%d",&ee.d.a);
                    if(ee.nm != in){
                             fprintf(q,"%d %s %s %s %d %d %d\n",ee.nm,ee.nom,ee.pnom,ee.email,ee.d.j,ee.d.m,ee.d.a);
                             coo++;
                             }
                             i++;
                    }
                   
  fclose(q);
  fclose(p);
  p = fopen(f, "w");
  q = fopen(qq, "r");
  while (!feof(q))

    {
     fscanf(q,"%d",&ee.nm);     
     fscanf(q,"%s",ee.nom);
     fscanf(q,"%s",ee.pnom);
     fscanf(q,"%s",ee.email);
     fscanf(q,"%d",&ee.d.j);
     fscanf(q,"%d",&ee.d.m);
     fscanf(q,"%d",&ee.d.a);
    
     fprintf(p,"%d %s %s %s %d %d %d\n",ee.nm,ee.nom,ee.pnom,ee.email,ee.d.j,ee.d.m,ee.d.a);

    }
  fclose(q);
  fclose(p);           
        if(coo==i){
                   printf("le personne que vous voulez supprimer n'existe pas");
                   }
                   else if(coo!=i){printf("le personne a ete supprimer :)"); }          
                   
        }
     else if (c==1){ printf("\a erreur: le fichier: %s n'existe pas.\n", f);}
    
    
     }
/*procedure de recherche dans un fichier*/
void refichier(){
    
     printf("donner le nome de votre fichier");
     scanf("%s",f);
      x("recherche de fichier: ",30); printf("%s \n\n          veuillez patienter",f); x("........\n\n",800);
     p = fopen(f,"r");
     c=0;
     if(!p){
         c=1;  
            }
     if(c==0){
     q = fopen(qq,"w");
     printf("donner le numero de personne rechercher:\n");
     scanf("%d",&in);
     coo=0;
     while(!feof(p)){
     fscanf(p,"%d",&ee.nm);     
     fscanf(p,"%s",ee.nom);
     fscanf(p,"%s",ee.pnom);
     fscanf(p,"%s",ee.email);
     fscanf(p,"%d",&ee.d.j);
     fscanf(p,"%d",&ee.d.m);
     fscanf(p,"%d",&ee.d.a);
                    if(ee.nm == in){
                             printf("les information de ce personne sont:\n\n");
                             printf("N: %d nom: %s prenom:%s email: %s date: %d/%d/%d\n",ee.nm,ee.nom,ee.pnom,ee.email,ee.d.j,ee.d.m,ee.d.a);
                             coo=1;
                             }
                             i++;
                    }
                   
  fclose(q);
  fclose(p);   
        if(coo==0){
                   printf("le personne rechercher n'existe pas");
                   }
                             
                   
        }
     else if (c==1){ printf("\a erreur: le fichier: %s n'existe pas.\n", f);}
    
    
     } 
