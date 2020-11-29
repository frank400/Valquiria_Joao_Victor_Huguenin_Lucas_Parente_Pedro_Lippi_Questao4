#include <stdio.h>
#include <string.h>
#include "funcoes_matrix.h"

void get_strings(int size_matrix, char grade[][size_matrix]){
    for (int x=0;x<size_matrix;x=x+1)
    {
    	fgets(grade[x],23,stdin);
	}
}