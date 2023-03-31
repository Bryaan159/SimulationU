#include <iostream>
#include <cstring>

using namespace std;


int main()
{
    // se crea la matriz 
    int** matrix = (int**) malloc(sizeof(int*)*3);
    for(int i = 0; i < 3; i++){
        *(matrix + i) = (int*) malloc(sizeof(int)*3);
    }
    
    // se llena de datos la matriz (fila)
    for(int k = 0; k < 3*3; k++){
        matrix[k/3][k%3] = k;
    }
    /* '' (columna)
    matrix[0][0] = 0;
    matrix[0][1] = 4;
    matrix[0][2] = 5;
    matrix[1][0] = 1;
    matrix[1][1] = 3;
    matrix[1][2] = 6;
    matrix[2][0] = 2;
    matrix[2][1] = 7;
    matrix[2][2] = 8;*/
    /* '' (diagonal)
    matrix[0][0] = 0;
    matrix[0][1] = 4;
    matrix[0][2] = 5;
    matrix[1][0] = 3;
    matrix[1][1] = 1;
    matrix[1][2] = 6;
    matrix[2][0] = 7;
    matrix[2][1] = 8;
    matrix[2][2] = 2;*/

    
    //Muestro la matriz
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout << matrix[i][j] << ", ";
        }
        cout << "\n";
    }
    cout << "\n";
    
    // la cadena de 3 caracteres
    int cadena[] = {0,1,2};
    cout << "Cadena: \n";
    for(int i=0; i<3; i++)
        cout << " " << cadena[i] ;
    cout << "\n";
    
    // Verifico la cadena
    for(int l = 0; l < 3*3; l++){
        if(matrix[l/3][l%3] == 0){
            if(matrix[l/3][(l%3)+1] == 1){
                if(matrix[l/3][(l&3)+2] == 2){
                    cout << "La cadena esta dentro de una fila de la matriz \n";
                }
            }else if(matrix[(l/3)+1][l%3] == 1){
                if(matrix[(l/3)+2][l&3] == 2){
                    cout << "La cadena esta dentro de una columna de la matriz \n";
                }
            }else if(matrix[(l/3)+1][(l%3)+1] == 1){
                if(matrix[(l/3)+2][(l&3)+2] == 2){
                    cout << "La cadena esta dentro de una diagonal de la matriz \n";
                }
            }
        }
    }
    
    return 0;
}