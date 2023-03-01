#include <iostream>
#include <vector>

using namespace std;

// Definición del grafo como lista de adyacencia
vector<vector<int>> graph = {
    {},          // Nodo 0
    {2, 3},      // Nodo 1
    {1, 6},      // Nodo 2
    {1, 4, 12},  // Nodo 3
    {3, 10, 12, 14}, // Nodo 4
    {2, 5, 8, 10}, // Nodo 5
    {6, 7, 9, 16},  // Nodo 6
    {5, 8, 10, 16}, // Nodo 7
    {6, 7, 9, 16, 18}, // Nodo 8
    {4, 5, 11, 15, 16, 17}, // Nodo 9
    {5, 8, 17, 18, 19}, // Nodo 10
    {3, 4, 14, 24}, // Nodo 11
    {4, 12, 24}, // Nodo 12
    {11, 13, 23}, // Nodo 13
    {4, 10, 22, 24}, // Nodo 14
    {9, 11, 20, 23}, // Nodo 15
    {6, 7, 8, 9, 16, 19, 20, 21}, // Nodo 16
    {9, 10, 18, 19, 21, 22}, // Nodo 17
    {8, 10, 17, 19, 22}, // Nodo 18
    {10, 16, 20, 22}, // Nodo 19
    {7, 15, 16, 21, 23}, // Nodo 20
    {18, 20, 24}, // Nodo 21
    {13, 15, 22, 23}, // Nodo 22
    {12, 14, 21} // Nodo 23
};

vector<int> current_path; // Variable global que almacena la ruta actual
vector<vector<int>> all_paths; // Variable global que almacena todas las rutas encontradas


int main() {
    // Llamada a la función find_paths() para encontrar todas las rutas del nodo 1 al nodo 18
    vector<vector<int>> paths = find_paths(1, 18);

    // Imprimir todas las rutas encontradas
    for (int i = 0; i < paths.size(); i++) {
        cout << "Ruta " << i+1 << ": ";
        for (int j = 0; j < paths[i].size(); j++) {
            cout << paths[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
