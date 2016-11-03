# include <iostream>
using namespace std ;

   int main () {

   cout << "Benvenuto. Con questo programma andremo a mostrare qui di seguito i primi N numeri pari, con N inserito" << endl;
   cout << "da tastiera." << endl << endl;
   int N; //utilizziamo N per far fermare la stampa dei numeridopo il centesimo valore stampato
   int num = 0 ;//utilizziamo num coe numero da analizzare al momento

   cout << "Quanti valori devo prendere in considerazione?" << endl;
   cin  >> N ;
   while (N <= 0) {
      cout << "Il valore non e' valido." << endl;
      cout << "Inserisci un valorre che sia maggiore o uguale a 0" << endl;
      cin >> N ;
      }
   cout << "I numeri pari sono: " << endl;
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

