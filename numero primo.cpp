#include <iostream>
using namespace std;

int main() {
   int num, i;
   int *p;
   bool esPrimo = true;

   cout<<"Ingrese un numero entero positivo: ";
   cin>>num;

   for(i = 2; i <= num / 2; ++i) {
      if(num % i == 0) {
         esPrimo = false;
         break;
      }
   }

   if (esPrimo){
    cout<<num<<" es un numero primo.";
   } 
   else{
    cout<<num<<" no es un numero primo.";
   }
      p=&num;
      cout<<p;

   return 0;
}