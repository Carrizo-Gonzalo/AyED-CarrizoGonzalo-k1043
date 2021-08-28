#include <iostream>

using namespace std;

void mostrarvec(int vec[], int dim)
{
	for (int i = 0; i < dim; ++i)
		cout << vec[i] << '\t';
    cout << endl;
}

void mostrarmat(int m[][5], int dfil)
{
        const int dcol = 5; // solo por prolijidad

        for (int i = 0; i < dfil; ++i) {
                for (int j = 0; j < dcol; ++j)
                        cout << m[i][j] << '\t';
                cout << endl;
        }
}

void invVec(int vec[], int dim)
{
        const int medio = dim / 2;
        const int ultimo = dim - 1; //por prolijidad, el indice del último elemento
        for (int i = 0; i < medio; i++)
                swap(vec[i], vec[ultimo-i]);
}

void invMat(int mat[][5], int dfil)
{
        //recorre la diagonal de la matriz
        //termina en el anteúltimo porque no tiene nada más para intercambiar
        for (int posDiag = 0; posDiag < dfil - 1; posDiag++)
                //comienza en 1 para no operar sobre la diagonal (innecesario).
                for (int i = 1; i < dfil - posDiag; i++)
                        swap(mat[posDiag][posDiag + i], mat[posDiag + i][posDiag]);
}

int main()
{
    const int dim5 {5};
    const int dim10 {10};

    int vec5[dim5] {4, 11, 19, 8, 3};
    int vec10[dim10] {23, 15, 1, 7, 6, 27, 2, 14, 12, 9};

    int matriz[dim5][dim5] {36, 7, 19, 28, 45,
                            17, 33, 42, 3, 25,
                            22, 41, 32, 11, 9,
                            39, 47, 14, 4, 23,
                            16, 38, 8, 27, 44};
    
    cout << "Vector de 5 elementos:" << endl;
    mostrarvec(vec5, dim5);
    cout << "Reverso:" << endl;
    invVec(vec5, dim5);
    mostrarvec(vec5, dim5);

    cout << "---------------------------" << endl;

    cout << "Vector de 10 elementos:" << endl;
    mostrarvec(vec10, dim10);
    cout << "Reverso:" << endl;
    invVec(vec10, dim10);
    mostrarvec(vec10, dim10);

    cout << "---------------------------" << endl;

    cout << "Matriz:" << endl;
    mostrarmat(matriz, dim5);
    cout << "Transpuesta:" << endl;
    invMat(matriz, dim5);
    mostrarmat(matriz, dim5);

    return 0;
}