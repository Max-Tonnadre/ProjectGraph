//
// Created by maxou on 29/02/2024.
//

#ifndef PROJECTGRAPH_STRUCTURE_H
#define PROJECTGRAPH_STRUCTURE_H
#define MAXRANGE  100

#include <stdio.h>
#include <stdlib.h>




// Structure de données pour stocker un objet graph
struct Graph
{
    // Un array de pointeurs vers Node pour représenter une liste de contiguïté
    struct Node* head[MAXRANGE];
};

// Structure de données pour stocker les nœuds de la liste d'adjacence du graphe
struct Node
{
    int dest, weight;
    struct Node* next;
};

// Structure de données pour stocker une arête de graphe
struct Edge {
    int src, dest, weight;
};

struct Graph* createGraph(struct Edge edges[], int n);
void printGraph(struct Graph* graph);
#endif //PROJECTGRAPH_STRUCTURE_H
