💰 Calculadora de Juros Compostos em C++

Este é um projeto simples desenvolvido em C++ para calcular o rendimento de um investimento ao longo do tempo utilizando o sistema de juros compostos.

🏫 Projeto Acadêmico: Este código foi desenvolvido em sala de aula durante as aulas e orientações do Professor Cação.

O programa solicita ao usuário o capital inicial, a taxa de juros mensal (em porcentagem) e o prazo em meses, exibindo mês a mês a evolução do montante final.

🚀 Funcionalidades

Entrada interativa: O usuário informa o capital inicial, a taxa de juros mensal e a quantidade de meses.

Cálculo automatizado: Utiliza uma função específica para o cálculo do montante baseado na fórmula de juros compostos.

Relatório mensal: Mostra a evolução do investimento mês a mês através de um loop.

🛠️ Tecnologias Utilizadas

C++ (Linguagem de programação)

Biblioteca <iostream> (Para entrada e saída de dados)

Biblioteca <math.h> (Para a função matemática de potência pow)

📂 Código Fonte

O programa principal (main.cpp) possui a seguinte estrutura:

#include <iostream>
#include <math.h>
using namespace std;

float taxacao(float investimento, float juros, int meses) {
    float total;
    total = investimento * pow(1 + juros, meses);
    return total;
}

int main() {
    float capital, juros, total;
    int NROmeses;

    cout << "qual o capital investido? ";
    cin >> capital;
    
    cout << "qual o valor do juros por mes?(%) ";
    cin >> juros;
    
    cout << "qual a quantidade de meses? ";
    cin >> NROmeses;
    
    for (int nm = 1; nm <= NROmeses; nm++) {
        total = taxacao(capital, juros / 100, nm);
        cout << endl << "Valor total investido no mes " << nm << ", R$" << capital << ", valor montante R$" << total;
    }
    
    return 0;
}


🔧 Como Executar o Projeto

Para rodar este código na sua máquina, siga os passos abaixo:

Pré-requisito: Tenha um compilador de C++ instalado (como g++, MinGW ou uma IDE como Dev-C++ / Code::Blocks / VS Code).

Salve o código em um arquivo chamado main.cpp.

Compile o código usando o terminal:

g++ main.cpp -o calculadora


Execute o programa:

Windows:

./calculadora.exe


Linux/macOS:

./calculadora


🎓 Agradecimentos

Agradecimento especial ao Professor Cação pelos ensinamentos, suporte e orientação no desenvolvimento de lógica de programação em C++.

Desenvolvido com 💻 por Julio Rafael Zambianco