// Es21 pag 69
#include <iostream>
using namespace std;

int main (void) {

cout << "Con questo programma calcoleremo la somma dei numeri dispari tra quelli che verranno inseriti a tastiera."  << endl;
cout << "Portai inserire da un minimo di un valore ad un massimo di 99 valori, che potranno essere positivi, negativi o nulli," << endl;
cout << "senza nessun limite" << endl;
cout << "Iniziamo!" << endl;

   int N;
   cout << "Come prima cosa, quanti numeri vuoi inserire ?" << endl;
   cin  >> N;
   while (N >= 100 || N <= 0) {
      cout << "Il numero non e' valido" << endl;
      cout << "Quanti numeri vuoi inserire ?" << endl;
      cout << "(ricordati che il valore deve essere compreso tra 1 e 99)" << endl;
      cin  >> N;
   }
   int i = 1;
   int num, somma_numeri_dispari = 0;

   while (i <= N){
      cout << "Ora inserisci un numero intero: ";
      cin  >> num;
      if (num % 2 == 0)
         cout << "Siccome il numero e' pari il numero non viene inserito nella somma" << endl << endl;
      else{
         cout << "Il numero e' dispari quindi viene inserito nella somma" << endl << endl;
         somma_numeri_dispari = somma_numeri_dispari + num ;
      }
      i++;
   }
   cout << "Abbiamo terminato. La somma dei numeri dispari e': " << somma_numeri_dispari << endl << endl;

      return 0;
}
