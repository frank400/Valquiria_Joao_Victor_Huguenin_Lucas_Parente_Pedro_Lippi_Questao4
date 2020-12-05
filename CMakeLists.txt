cmake_minimum_required(VERSION 3.17)
project(question4 C)

set(CMAKE_C_STANDARD 11)

include_directories(src)

add_executable(Valquiria_Joao_Victor_Huguenin_Lucas_Parente_Pedro_Lippi_Questao4
        src/espelha_horizontal.c
        src/espelha_vertical.c
        src/funcoes_matrix.c
        src/funcoes_matrix.h
        src/gira_matrix.h
        src/gira_sentido_anti_horario.c
        src/gira_sentido_horario.c
        src/main.c)
