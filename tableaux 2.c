/*
#include <stdio.h>
#include <stdlib.h>
int main()
{   int i;
    int tab[5];
    printf("entrer les valeur de tableau : ");

    for(i=0;i<5;i++){
       printf("valeur %d :",i+1);
       scanf("%d", &tab[i]);
    }
    printf("Les valeurs du tableau sont : \n");
    for (int i = 0; i < 5; i++) {
        printf("tab[%d] = %d\n",i,tab[i]);
    }
    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
   int tab[5];
   int i;
   printf("entrer les valeurs de tableau : \n");
   for(i=0;i<5;i++){
    printf( " les valeurs %d:",i+1);
    scanf("%d",&tab[i]);
   }
   printf("les valeur du tableau sont :\n");
   for(i = 0 ; i< 5 ; i++){
    printf("tab[%d]=%d \n",);
   }
   return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
  int i , g , x, n ;
  printf("entrer les elements de tableau :\n");
  scanf("%d",&n);
  int T[n];
  printf("les element sont :");

  for(i = 0;i<6 ; i++){
     printf("%d ",T[i]);
     scanf("%d",&T[i]);
    for( i = 0; i <n; i++){
        if(T[i]>T[g])
            x = T[i];
            T[i]=T[g];
            x = T[g];
    }
    }
    printf(" le trie du tableau est :\n");
    for(int f =0 ; f<n ;f++)
        printf("%d \t",T[i]);
  return 0;
  }
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main(){
    int T[10];
    int i ;
    for(i=0 ; i<10 ; i++)
        T[i] =0;
    for(i=0 ; i<10 ; i++)
       printf("T[%d]=%d \n",i,T[i]);


    return 0;
}
*/
/*
#include <stdio.h>
#include <stdlib.h>
int main(){





return 0;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
int main()
{
   int tab[5];
   int i,s;
   printf("entrer les valeurs de tableau : \n");
   for(i=0;i<5;i++){
    printf( " les valeurs %d:",i+1);
    scanf("%d",&tab[i]);
   }
   printf("La somme des elements du tableau est :\n");
   s =0;
   for(i = 0 ; i< 5 ; i++){
    s=s+tab[i];
   }
   printf("%d \n",s);
  return 0;
}
*/
/*
#include<stdio.h>
#include<stdlib.h>
int main(){
  int T[n];
  int i , max ;
  printf("Entrer les element du tableau : \n");
  for(i=0;i<n;i++){
      printf("T[%d] =",i);
      scanf("%d",&T[i]);
  }
  max=T[0];
  for(i=1;i<n;i++){
    if(max<T[i])
    max =T[i];
  }
  printf("le max dans le tableau est : %d",max);
  return 0;
}
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int min,i,n;
    int T[n];
    printf("Entrer les elements de tableau :\n");
    for(i=0;i<n;i++){
        printf("T[%d]= ",i);
        scanf("%d",&T[i]);
    }
    min = T[0];
    for(i=1;i<n;i++){
     if(min>T[i])
     min = T[i];
    }
    printf("le min dans le tableau est : %d \n ",min);


  return 0;
}
