#include <iostream>
#include <vector>
#include <string>
//#include "build/Grafos/grafo.h"

using namespace std;

// "Dfs(G)
// for cada vertice u de [G]
// 	u.cor = Branco
//         u.#
// tempo = 0;
// for cada vertice u E V[G]
// 	if u.cor == BRANCO 
//           Dfs-Visita(G,u);
// ------------------------------------------------------------
// Dfs_Visita(G,u)
// tempo = tempo + 1;
// u.d = tempo;
// u.cor = cinza;
// for cada vertice v E Adj[u]
// if v.cor == BRANCO
// 	v.#=u;
// 	Dfs_visita[G,v]
// u.cor = PRETO;
// tempo = tempo + 1;
// u.f = tempo;"

// "Dfs(G)
// for cada vertice u de [G]
// 	u.cor = Branco
//         u.#
// tempo = 0;
// for cada vertice u E V[G]
// 	if u.cor == BRANCO 
//           Dfs-Visita(G,u);"

// EncontrarCiclo(Grafo G):
//     // Inicializa vetor de visitados
//     Para cada vértice u em G:
//         visitado[u] = Falso


//     // Começa a busca em profundidade (DFS)
//     Para cada vértice u em G:
//         Se não visitado[u]:
//             Se EncontrarCicloDFS(G, u, -1):  // Chama DFS para explorar o vértice
//                 Retorne Verdadeiro  // Se um ciclo for encontrado, retorne verdadeiro
//     Retorne Falso  // Se nenhum ciclo for encontrado, retorne falso

// EncontrarCicloDFS(Grafo G, vértice atual, vértice anterior):
//     // Marca o vértice atual como visitado
//     visitado[atual] = Verdadeiro

//     // Para cada vértice adjacente ao vértice atual
//     Para cada vértice v adjacente a atual em G:
//         Se v não for igual ao vértice anterior:
//             Se v já foi visitado:
//                 Retorne Verdadeiro  // Um ciclo foi encontrado
//             Senão se EncontrarCicloDFS(G, v, atual):
//                 Retorne Verdadeiro  // Propaga a chamada recursiva

//     Retorne Falso  // Se nenhum ciclo for encontrado

vector<bool> visited;
static std::vector<std::vector<int>> graph(2);


class Grafo {
private:
    int numVertices;
    std::vector<std::vector<bool>> matrizAdj;

public:
    // Construtor
    Grafo(int n) : numVertices(n), matrizAdj(n, std::vector<bool>(n, false)) {}

    // Método para adicionar uma aresta entre os vértices u e v
    void adicionarAresta(int u, int v) {
        matrizAdj[u][v] = true;
        matrizAdj[v][u] = true;
    }

    // Método para verificar se há uma aresta entre os vértices u e v
    bool existeAresta(int u, int v) {
        return matrizAdj[u][v];
    }

    // Método para imprimir o grafo
    void imprimirGrafo() {
        for (int i = 0; i < numVertices; ++i) {
            std::cout << "Vértice " << i << " está conectado com: ";
            for (int j = 0; j < numVertices; ++j) {
                if (matrizAdj[i][j]) {
                    std::cout << j << " ";
                }
            }
            std::cout << std::endl;
        }
    }
    

    bool EncontrarCiclo(){
       // EncontrarCiclo(Grafo G):
//     // Inicializa vetor de visitados
//     Para cada vértice u em G:
//         visitado[u] = Falso


//     // Começa a busca em profundidade (DFS)
//     Para cada vértice u em G:
//         Se não visitado[u]:
//             Se EncontrarCicloDFS(G, u, -1):  // Chama DFS para explorar o vértice
//                 Retorne Verdadeiro  // Se um ciclo for encontrado, retorne verdadeiro
//     Retorne Falso  // Se nenhum ciclo for encontrado, retorne falso
        return false;
    }
};

// bool has_cycle(int node, int last){
//     // voltamos pra um nodo que já visitados, há um ciclo.
//     if(visited[node])
//         return true;
//     visited[node] = true;

//     bool b = false;
//     cout << b << endl << " 2 ";

//     for(auto v: graph[node]){
//         // visitamos todos os adjacentes, menos o que chamou essa instância da função.
//         cout << v << endl << " V " ;
//         if(v != last){
//             b |= has_cycle(v,node);
//             cout << b << endl << " 2 ";
//         }
//     }
//     return b;
// }

bool EncontrarCiclo(){
       // EncontrarCiclo(Grafo G):
//     // Inicializa vetor de visitados
//     Para cada vértice u em G:
//         visitado[u] = Falso


//     // Começa a busca em profundidade (DFS)
//     Para cada vértice u em G:
//         Se não visitado[u]:
//             Se EncontrarCicloDFS(G, u, -1):  // Chama DFS para explorar o vértice
//                 Retorne Verdadeiro  // Se um ciclo for encontrado, retorne verdadeiro
//     Retorne Falso  // Se nenhum ciclo for encontrado, retorne falso
        return false;
    }

int main(){
    // preenche o grafo
    //std::vector<std::vector<int>> graph(5);
    
    //std::vector<std::vector<int>> graph(2);
    graph.push_back(std::vector<int>());

    // Adicionando alguns elementos aos vetores internos (representando as arestas)
    graph[0].push_back(1); // Adiciona uma aresta entre o vértice 0 e o vértice 1
    graph[0].push_back(2); // Adiciona uma aresta entre o vértice 0 e o vértice 2
    graph[1].push_back(3); // Adiciona uma aresta entre o vértice 1 e o vértice 3
    graph[2].push_back(4); // Adiciona uma aresta entre o vértice 2 e o vértice 4

    // Imprimindo o grafo
    bool cycle;
    for (int i = 0; i < graph.size(); ++i) {
        std::cout << "Vértice " << i << " está conectado com: ";
        for (int j = 0; j < graph[i].size(); ++j) {
            std::cout << graph[i][j] << " ";
            // if(!visited[j]){
            //     cycle |= EncontrarCiclo(); 
            //     cout << 0+1 ; 
            // }
        }
        std::cout << std::endl;
    }
    // Grafo g(5); 
    // int cont = 0;

    // // Adicionar algumas arestas
    // g.adicionarAresta(0, 2);
    // g.adicionarAresta(0, 2);
    // g.adicionarAresta(1, 2);
    // g.adicionarAresta(2, 2);
    // g.imprimirGrafo();

    // //Preenche o grafo (usando uma matriz de adjacência como exemplo)
    // int GRAPH_SIZE = 5;
    // graph.resize(GRAPH_SIZE);
    // visited.resize(GRAPH_SIZE, false);

    // //VERIFICA SE O GRAFO TEM CICLO
    // bool cycle = false;
    // cout << cycle ; 
    // for(int i = 0; i < GRAPH_SIZE; i++){
    //     if(!visited[i]){
    //         cycle |= has_cycle(i,-1);
    //         cont++;    
    //         //cout << cont ; 
    //     }
    // }
}

// int main() {
//     // Criar um grafo com 5 vértices
//     Grafo g(5);

//     // Adicionar algumas arestas
//     g.adicionarAresta(0, 1);
//     g.adicionarAresta(0, 2);
//     g.adicionarAresta(1, 3);
//     g.adicionarAresta(2, 4);

//     // Verificar se uma aresta existe e imprimir o grafo
//     std::cout << "Existe aresta entre 0 e 1? " << std::boolalpha << g.existeAresta(0, 1) << std::endl;
//     std::cout << "Existe aresta entre 1 e 2? " << std::boolalpha << g.existeAresta(1, 2) << std::endl;
//     std::cout << "Existe aresta entre 3 e 4? " << std::boolalpha << g.existeAresta(3, 4) << std::endl;

//     std::cout << "\nGrafo:\n";
//     g.imprimirGrafo();

//     return 0;
// }