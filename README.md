# Questão 4 da lista de exercio em grupo

- Nome do Grupo: Valquiria
- Integrantes: João Victor Huguenin, Lucas Parente e Pedro Lippi

## Instalação

Para compilar o projeto há duas opções:

1. Compilação pelo gcc/MinGW: abra o seu prompt de comando e execute o seguinte comando 
  ```
  gcc -std=c99 src/main.c src/espelha_horizontal.c src/espelha_vertical.c src/funcoes_matrix.c src/funcoes_matrix.h src/gira_matrix.h src/gira_sentido_anti_horario.c src/gira_sentido_horario.c src/main.c -o Valquiria_Joao_Victor_Huguenin_Lucas_Parente_Pedro_Lippi_Questao4
  ```
2. Utilizando o Cmake: execute a seguinte sequencia de comandos na root do projeto
  - cmake .
  - make .
  - ./Valquiria_Joao_Victor_Huguenin_Lucas_Parente_Pedro_Lippi_Questao3

## Objetivos da questão

- Escanear uma matrix de caracteres de 23X23.
- Aplicar rotações na figura representada pela matrix, sendo elas espelhamento vertical, espelhamento horizontal, giro no sentido horário e anti horário.
- Apresentar o resultado das rotações.
