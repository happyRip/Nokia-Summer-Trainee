#include "graph.h"
#include <vector>

int main() {
    Graph graph(5);
    graph.addEdge(0, 1, 3);
    graph.addEdge(0, 3, 3);
    graph.addEdge(1, 2, 1);
    graph.addEdge(1, 3, 6);
    graph.addEdge(2, 3, 5);
    graph.addEdge(2, 4, 1);
    graph.addEdge(3, 4, 3);
    graph.addEdge(4, 0, 2);

    /* Graph graph(6); */
    /* graph.addEdge(0, 1, 3); */
    /* graph.addEdge(0, 4, 3); */
    /* graph.addEdge(1, 2, 1); */
    /* graph.addEdge(2, 3, 3); */
    /* graph.addEdge(2, 5, 1); */
    /* graph.addEdge(3, 1, 3); */
    /* graph.addEdge(4, 5, 2); */
    /* graph.addEdge(5, 0, 6); */
    /* graph.addEdge(5, 3, 1); */

    graph.shortestPath(0);
}
