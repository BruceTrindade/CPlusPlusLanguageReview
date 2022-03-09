#include <iostream>

using namespace std;

int soma(int a, int b);

int main () {

    /*
        Notepad

        int = um inteiro de 32 bits 
        long lomng = inteiro de 64 bits
        float = real de 32bits 
        double = real de 64bits
        char = caracter de 32bits

        cout << entrada
        cin >> saida 

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

                VETOR
            int notas[5] = {6, 8, 9, 7, 5};
            char vogais[] = {'a', 'e', 'i', 'o', 'u'};
            float salarios[100];

            for (int i = 0; i < 5; i++)
            {
                cout << vogais[i] << " ";
            }
            
            cout << endl;

            int tamanho;

            cout << "Digite quantas notas voce quer armazenar" << endl;
            cin >> tamanho;

            float notas[tamanho];
            for (int i = 0; i < tamanho; i++) {
                cin >> notas[i];
            }

            cout << "Voce digitou: ";
            for (int i = 0; i < tamanho; i++) {
                cout << notas[i] << " ";
            }
            
            cout << endl;
                
    
    */

   float a, b, c;

   bool continua = true;

    int x, y;

    cin >> x >> y;

    cout << soma(x, y) << endl;
    
    return 0;
}  

int soma(int a, int b) {
    int x = a+b;
    return x;
}