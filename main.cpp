#include <iostream>

using namespace std;

int main () {

    /*
        Notepad

        int = um inteiro de 32 bits 
        long lomng = inteiro de 64 bits
        float = real de 32bits 
        double = real de 64bits
        char = caracter de 32bits

        cout - entrada
        cin - saida 

            for (int i = 1; i <= 5; i++) {
             cout << "Digite as 3 notas do aluno " << i << endl;
             cin >> a >> b >> c;
             cout << "A média é: " << (a+b+c)/3 << endl;
             }

            while (continua) {
             cout << "Digite as 3 notas do aluno " << endl;
             cin >> a >> b >> c;
             cout << "A média é: " << (a+b+c)/3 << endl;
             cout << "Digite 0 para encerrar e 1 para continuar" << endl;
             cin >> continua;  
            }

            do {
             cout << "Digite as 3 notas do aluno " << endl;
             cin >> a >> b >> c;
             cout << "A média é: " << (a+b+c)/3 << endl;
             cout << "Digite 0 para encerrar e 1 para continuar" << endl;
             cin >> continua;  
            }  while (continua)
    
    
    */

   float a, b, c;

   bool continua = true;

    do {
      cout << "Digite as 3 notas do aluno " << endl;
      cin >> a >> b >> c;
      cout << "A média é: " << (a+b+c)/3 << endl;
      cout << "Digite 0 para encerrar e 1 para continuar" << endl;
      cin >> continua;  
   }  while (continua);
    






    return 0;
}