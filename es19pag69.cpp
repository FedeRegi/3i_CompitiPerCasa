# include <iostream>
using namespace std ;

   int main () {

   cout << "Benvenuto. Con questo programma andremo a mostrare su schermo qui di seguito i primi 100 numeri pari" << endl << endl;
   int N = 100; //utilizziamo N per far fermare la stampa dei numeridopo il centesimo valore stampato
   int num = 0 ;//utilizziamo num coe numero da analizzare al momento

   while (N != 0){
      if (num%2 == 0){
         cout << num << " " ;
         N--  ;
         num++ ;
         }
      else
         num++ ;
      }
   return 0;
   }

