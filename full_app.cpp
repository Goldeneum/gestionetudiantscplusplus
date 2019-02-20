#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include <windows.h>
#include<string.h>

/*############################
# Elbasri Abdennacer 
# Developpement informatique
# ista ntic syba
# Group C
# Premier annee
# www.nacer.ma
############################*/

/*procudures*/
void z(char* ii, int iii) 
{
     int i = 0;
     while(ii[i] != '\0')    
     {       
     printf("%c", ii[i]);
     Sleep(iii);
     i++;
     }
}
void x(char* ii, int iii) 
{
     int i = 0;
     while(ii[i] != '\0')    
     {       
     printf("%c", ii[i]);
     Sleep(iii);
     i++;
     }
}
//structure des etudiant

struct date{
       int j,m,a;
       };
struct etud{
        int code; 
        char nom[100]; 
        date d;
        float n1,n2,n3;
        float moy;       
       };
        
typedef struct info{
        int nm;
        char nom[15],pnom[30],email[100];
        date d;
        
        };
//declaration globale 
FILE *p,*q;
info ee,nn;
etud e[100],et[100]; 
char o1[]="oui",o[5],f[55],qq[]="inter.txt";   
int i,coo,in,c,k1,ok11,k2,kk,d1,d2,d3,d4,d5,d6,mm,n,ok,ok1,me,me0,me1,me2,me3,me4,me5,me6,me7,me8,me9,me10;
float mx;      

//procedures de la premier cas (travaille sur memoire) 

/*procedure d'affichage la liste des etudiant*/
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
/*procedure de moyenne*/
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
                       
/*procedure de recherhce entre deux date*/
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
               

/*procedure d'affichage selon le mention*/
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

/*procedure de supprition*/
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


/*procedure principale de la premier cas (travaille sur la memoire*/
// procedure de la premier cas (travaille sur la memoire)

void nasser(){
     
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


//procedures de la deuxiem cas (travaille sur fichier)
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
//procedure principale de la deuxiem cas (travaille sur fichiers)
void nacer(){
     
                            char o[5],o1[]="oui",m[30],m0[]="liste",m1[]="remplir",m2[]="afficher",m3[]="ajoute",m4[]="supprimer",m5[]="rechercher",m6[]="quitter";
                       system("cls");
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
