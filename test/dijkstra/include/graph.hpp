#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <iostream>
#include <string>
#include <vector>

typedef std::pair<int,int> Pii;
typedef std::vector<Pii> Vii;

class Graph {
    private:
        std::vector<Vii> adjList;
        std::vector<int> distance;
        std::vector<int> previous;

    public:
        Graph(int N);

        void addEdge(int start, int end, int weight);
        void printAdjList();
        void shortestPath(int start);

        int getSize();

        std::vector<int> getDistance();
        int getDistance(int node);

        std::vector<int> getPrevious();
        int getPrevious(int node);
};

#endif /* GRAPH_HPP */