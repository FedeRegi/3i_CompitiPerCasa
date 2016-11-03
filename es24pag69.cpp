# include <iostream>
using namespace std ;

   int main () {

   cout << "Benvenuto. Con questo programma andremo a mostrare su schermo il massimo e il minimo di una sequenza di numeri chiusi da 0 a N, stabilendone la posizione nella sequenza. Nella sequenza non terremo in considerazione il valore 0." << endl;
   int N ;
   int numero_minimo ;
   int numero_massimo;
   cout << "Innanzitutto, qual e' il secondo estremo della sequenza?" << endl;
   cin  >> N ;
   while (N == 0){
      cout << "Non puoi inserire 0 !!!" << endl;
      cout << "Inserisci un altro numero" << endl;
      cin  >> N ;
      }
   if (N == -1)
      cout << "Abbiamo una sequenza che comprende un solo numero, ovvero -1. In questo caso quindi non esistono ne' un numero massimo ne' un numero minimo." << endl;
   else
      if (N == 1)
      cout << "Abbiamo una sequenza che comprende un solo numero, ovvero 1. In questo caso quindi non esistono ne' un numero massimo ne' un numero minimo." << endl;
      else {
            if (N < 0){
               numero_massimo = 0-1;
               numero_minimo  =  N ;
               cout << "Il numero piu' grande e'" << numero_massimo << " mentre il numero minimo e' " << numero_minimo << "." << endl;
               cout << "In questo caso il primo termine della sequenza sara' " << numero_minimo << " mentre l'ultimo sara' " << numero_massimo << "." << endl;
               }
            else {
               numero_massimo = N ;
               numero_minimo = 0+1 ;
               cout << "Il numero piu' grande e' " << numero_massimo << " mentre il numero minimo e' " << numero_minimo << "." << endl;
               cout << "In questo caso il primo termine della sequenza sara' " << numero_minimo << " mentre l'ultimo sara' " << numero_massimo << "." << endl;
               }
           }
   return 0;
   }

