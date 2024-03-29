// #include <iostream>
// #include <vector>

// class Grafo {
// private:
//     int numVertices;
//     std::vector<std::vector<bool>> matrizAdj;

// public:
//     // Construtor
//     Grafo(int n) : numVertices(n), matrizAdj(n, std::vector<bool>(n, false)) {}

//     // Método para adicionar uma aresta entre os vértices u e v
//     void adicionarAresta(int u, int v) {
//         matrizAdj[u][v] = true;
//         matrizAdj[v][u] = true;
//     }

//     // Método para verificar se há uma aresta entre os vértices u e v
//     bool existeAresta(int u, int v) {
//         return matrizAdj[u][v];
//     }

//     // Método para imprimir o grafo
//     void imprimirGrafo() {
//         for (int i = 0; i < numVertices; ++i) {
//             std::cout << "Vértice " << i << " está conectado com: ";
//             for (int j = 0; j < numVertices; ++j) {
//                 if (matrizAdj[i][j]) {
//                     std::cout << j << " ";
//                 }
//             }
//             std::cout << std::endl;
//         }
//     }
// };