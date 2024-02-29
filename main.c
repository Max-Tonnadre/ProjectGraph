#include <stdio.h>
#include "Structure.h"

int main() {
    struct Edge edges[] =
            {
                    {0, 1, 6}, {1, 2, 7}, {2, 0, 5}, {2, 1, 4}, {3, 2, 10}, {4, 5, 1}, {5, 4, 3}
            };

    // calcule le nombre total d'arêtes
    int n = sizeof(edges)/sizeof(edges[0]);

    // construit un graphe à partir des arêtes données
    struct Graph *graph = createGraph(edges, n);

    // Fonction pour imprimer la représentation de la liste d'adjacence d'un graphe
    printGraph(graph);


    return 0;
}
