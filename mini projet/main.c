#include <stdio.h>
#include <stdlib.h>

 struct contact{
  char nom[100];
   char num_tel[100];
   char mail[100]
};
 int main(){
     struct contact ;
     printf("Entrer le nom :");
     scanf("%s",&nom);


    return 0;
 }
/*
#include <stdio.h>
#include <stdlib.h>
 int myFunction(int x,int y){
     printf("Entrer le nombre x:\n");
     scanf("%d",&x);
     printf("Entrer le nombre de y :\n");
     scanf("%d",&y);
  return x +  y;
 }
 int main(){
 int x,y;
 int resultat = myFunction(x,y);
 printf("resultat est = %d",resultat);

 return 0;
 }
/*
int myFunction(int x, int y) {
  return x + y;
}

int main() {
  int result = myFunction(5, 3);
  printf("Result is = %d", result);
  return 0;
}
*/
