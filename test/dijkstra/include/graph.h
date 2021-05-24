#include <iostream>
#include <string>
#include <vector>

typedef std::pair<int,int> Pii;
typedef std::vector<Pii> Vii;

class Graph {
    private:
        std::vector<Vii> adjList;

    public:
        Graph(int N);

        void addEdge(int start, int end, int weight);
        void printAdjList();
        void shortestPath(int start);
};
