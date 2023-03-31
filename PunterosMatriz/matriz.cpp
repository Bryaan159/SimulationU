#include <iostream>
using namespace std;

int main(){
    /*
    //Punteros, referencias y sus diferencias
    //REFERENCIA 
    string color = "rosa";
    cout <<"La direccion es: "<< &color <<"\n";
    cout <<"--------------------------------------\n";
    //Esto nos permite crear variables que referencia a otra variable
    string& colorR = color;

    cout <<&color<<"\n";
    cout <<color <<"\n";*/

    //Punteros y Structs
    struct student{
        int age;
        string name;
    };
    student nStudent;
    nStudent.age = 20;
    nStudent.name = "Juan";

    cout<<"La edad es: "<<nStudent.age<<"\n";
    cout<<"El nombre es: "<<nStudent.name<<"\n";

    //Pero ahora con struct
    student* pst;
    pst = &nStudent;    
    cout<<"Informacion con punteros\n";
    cout<<(*pst).name<<"\n";
    cout<<(*pst).age<<"\n";
    //Otra manera para acceder a la direccion de memoria
    cout<<&pst->age<<"\n";
    cout<<&pst->name<<"\n";

    cout<<"--------------------------------------\n";
    cout<<"--------------------------------------\n";
    /*int array[] = {1,2,3,4,5};
    int array[4];*/
    int array[4] = {1,2,3,4};
    //Array con punteros
    int* array1 = (int*) malloc(sizeof(int)*3);
    array1[0] = 1;
    array1[1] = 2;
    array1[2] = 3;
    
    cout<<"El valor del array es: "<<array1[0]<<"\n";
    cout<<"El valor del array es: "<<array1[1]<<"\n";
    cout<<"El valor del array es: "<<array1[9]<<"\n";
    cout<<"La direccion del array es: "<<&array1[0]<<"\n";
    
    cout<<"--------------------------------------\n";
    cout<<"--------------------------------------\n";
    //Para cambiar el valor de un array
    cout<<"Para poder desplazarnos un entre indice"<<*(array1+2) <<"\n";

    cout<<"Arreglos multidimensionales\n"; 

    int n = 3;

    int** matrix = (int**) malloc(sizeof(int*)*n);
    for(int i=0; i<n;i++){
        *(matrix+i) = (int*) malloc(sizeof(int)*3);
    }
    // Se puede acceder a sus funciones
    matrix[0][0] = 1;
    matrix[0][1] = 2;
    matrix[0][2] = 3;
    matrix[1][0] = 4;
    matrix[1][1] = 5;
    cout<<*(*(matrix+0))<<endl;

    cout<<"--------------------------------------\n";
    cout<<"Liberacion de memoria"<<endl;
    int* datos = (int*)malloc(sizeof(int)*3);
    datos[0] = 0;
    datos[1] = 1;
    datos[2] = 2;
    cout<<datos[0]<<endl;
    cout<<datos[1]<<endl;
    //Liberacion de memoria
    free(datos);
    cout<<datos[0]<<endl;

    /*
    //Para matriz
    cout<<*(*(matrix+0))<<endl;
    cout<<"Liberacion de memoria para matriz"<<endl;
    for(int i=0; i<n;i++){
        free(*(matrix+i));
    }
    free(matrix);
    cout<<*(*(matrix+0))<<endl;*/

    cout<<"--------------------------------------\n";
    cout<<"--------------------------------------\n";
    cout<<"Optimizando el recorrido de matrices";
    int row = 3;
    int &col = row;

    cout<<"La matriz es: "<<endl;
    for(int i =0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<*(*(matrix+i)+j)<<" ";
        }
        cout<<endl;
    }

    return 0;
}