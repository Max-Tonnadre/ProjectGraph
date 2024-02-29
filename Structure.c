//
// Created by maxou on 29/02/2024.
//

#include "Structure.h"

struct Graph* createGraph(struct Edge edges[], int n)
{
    // alloue de l'espace de stockage pour la structure de données du graphe
    struct Graph* graph = (struct Graph*)malloc(sizeof(struct Graph));

    // initialise le pointeur principal pour tous les sommets
    for (int i = 0; i < MAXRANGE; i++) {
        graph->head[i] = NULL;
    }

    // ajoute les arêtes au graphe orienté une par une
    for (int i = 0; i < n; i++)
    {
        // récupère le sommet source et destination
        int src = edges[i].src;
        int dest = edges[i].dest;
        int weight = edges[i].weight;

        // alloue un nouveau noeud de la liste d'adjacence de src à dest
        struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->dest = dest;
        newNode->weight = weight;

        // pointe le nouveau nœud vers la tête actuelle
        newNode->next = graph->head[src];

        // pointe le pointeur principal vers le nouveau nœud
        graph->head[src] = newNode;
    }

    return graph;
}

// Fonction pour imprimer la représentation de la liste d'adjacence d'un graphe
void printGraph(struct Graph* graph)
{
    for (int i = 0; i < MAXRANGE; i++)
    {
        // affiche le sommet courant et tous ses voisins
        struct Node* ptr = graph->head[i];
        while (ptr != NULL)
        {
            printf("%d -> %d (%d)\t", i, ptr->dest, ptr->weight);
            ptr = ptr->next;
        }

        printf("\n");
    }
}