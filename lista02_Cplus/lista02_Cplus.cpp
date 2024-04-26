// ATIVIDADE 1 //

/*Uma empresa vende sorvetes no valor atacado, se o cliente comprar até 25
unidades, é cobrado R$1.50 por unidade, acima disso, é cobrado R$1.25. Faça
que calcule quanto um determinado cliente irá pagar*/

/*
#include <iostream>
using namespace std;

int main()
{
    int compra;
    double preco_por_sorvete;

    
    cout << "Quantos sorvetes gostaria de comprar: ";
    cin >> compra;

    if (compra > 25) {
        preco_por_sorvete = 1.25;
    }
    else {
        preco_por_sorvete = 1.50;
    }

    double valor_total = compra * preco_por_sorvete;

    cout << "O valor total da compra é: R$" << valor_total << endl;

    return 0;
}
*/


// ATIVIDADE 2 //

/*Declare uma variável com um número, se ele for maior que 10, faça o
cálculo do número + 10 * 2. Senão faça número + 9 * 3 – 8*/

/*
#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Um numero: ";
    cin >> n;

    if (n > 10) {
        cout << n + (10 * 2);
    }

    else {
        cout << n + (9 * 3) - 8;
    }
}
*/


// ATIVIDADE 3 //

/*Faça um código que verifique se um número é positivo ou negativo*/

/*
#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Coloque um numero para ver se e positivo ou negativo: ";
        cin >> n;

        if (n < 0) {
            cout << "negativo" << endl;
        }

        else {
            cout << n << "= positivo" << endl;
        }
}
*/


// ATIVIDADE 4 //

/*Faça um codigo que tenha duas variáveis numéricas e mostre qual delas é
a maior*/

/*
#include <iostream>

using namespace std;

int main() {
    int n1;
    int n2;

    cout << "Digite um numero: ";
    cin >> n1;

    cout << "Digite outro: ";
    cin >> n2;

    if (n1 < n2) {
        cout << n2 << " e maior que " << n1 << endl;

    }

    else {
        cout << n1 << " maior que " << n2 <<  endl;
    }
}
*/


// ATIVIDADE 5 //

/*Um professor deseja um sistema para o cálculo de média dos seus alunos,
para isso, declare duas variáveis para as notas, realize o cálculo da média e
mostre, se a média for maior ou igual a 7 mostre “Aprovado”, senão mostre
“Reprovado”*/


#include <iostream>
using namespace std;

int main() {
    double primeiro_semestre;
    double segundo_semestre;

    cout << "Nota do primeiro semestre: ";
    cin >> primeiro_semestre;

    cout << "Nota do segundo semestre: ";
    cin >> segundo_semestre;

    double media = (primeiro_semestre + segundo_semestre) / 2;

    if (media >= 7) {
        cout << "Aprovado";
    }
    else {
        cout << "Reprovado";
    }

    return 0;
}

