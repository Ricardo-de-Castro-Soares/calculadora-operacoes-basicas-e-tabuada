# Calculadora de Operações Básicas e Tabuada

#  Calculadora básica com tabuada

Projeto desenvolvido em C++ para realizar cálculos matemáticos básicos e gerar tabuadas de forma automatizada.

---

## Descrição
Este exercício foi desenvolvido com o intuito de consolidar os fundamentos de Lógica de Programação e os novos conteúdos passados em sala, além de aprimorar ainda mais a sintaxe da linguagem C++. O foco principal é a interatividade com o usuário via terminal.

---

## Mudanças na Versão 2.0
*  **Mudança de `if-else` para `switch-case`**: Essa mudança faz com que o compilador vá direto para a operação que o usuário deseja. Isso evita que todas as condições sejam verificadas, o que consumiria memória e deixaria o programa um pouco mais lento.
  
* **Uso do `for`**: Agora existe uma maior interação com o usuário, já que ele pode escolher quantos números quer somar, subtrair, multiplicar ou dividir.
  
* **Uso de Acumuladores**: Com o acumulador dentro do for, a lógica das operações ficou mais fácil, além de diminuir a quantidade de variáveis no código.
  
*  **Interface Limpa**: Uso dos comandos `system("cls")` para limpeza de tela e `system("pause")` para melhor visualização dos resultados antes de retornar ao menu.
  
---

# Funcionalidades
* **Funcionalidade 1**: Operações básicas de Soma, Subtração, Multiplicação e Divisão
* **Funcionalidade 2**: Gerador automático de tabuada para qualquer número escolhido
* **Funcionalidade 3**: As opções são claras e numeradas, facilitando para o usuário escolher o que quer fazer.
  
---

# Oque foi utilizado

* **Estrutura (`do-while`)**: Utilizada para a criação do menu e controle do fluxo de repetição do programa.

* **Laço de Repetição (`for`)**: Aplicado para automatizar cálculos repetitivos (como a tabuada de 1 a 10) e também usado para que o usuário possa escolher quantos números que, queira em cada operação.

* **Acumuladores**: Aplicados nas operações matemáticas com o objetivo de simplificar o cálculo e diminuir o uso de variáveis.
  
* **Estruturas Condicionais (`if/else`)**: Responsáveis por identificar o primeiro número digitado nas operações de subtração e divisão. Usei essa lógica para que o resultado comece com o valor correto informado pelo usuário, evitando que o cálculo comece do zero e gere um resultado errado.

* **Estruturas de controle de fluxo (`switch/case`)**: Responsáveis pela seleção das operações no menu e organização do código.

* **Variáveis e Tipos**: Uso de `float` para garantir a precisão decimal nos resultados e `int` para contadores e controle de opções.

---

### Demonstração
<p align="center">
  [Calculadora bascia via terminal: ](https://github.com/user-attachments/assets/7af4f843-df63-483c-bf5e-2eaf1e4fecd7)

</p>
