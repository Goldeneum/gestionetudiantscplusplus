//Structures :
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
info ee,nn;
//Fichiers
FILE *p,*q;
//autres type de varbiables:
etud e[100],et[100];
char o1[]="oui",o[5],f[55],qq[]="inter.txt";  
int i,coo,in,c,k1,ok11,k2,kk,d1,d2,d3,d4,d5,d6,mm,n,ok,ok1,me,me0,me1,me2,me3,me4,me5,me6,me7,me8,me9,me10;
float mx;  
