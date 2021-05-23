#include "graph.h"
#include <functional>
#include <iostream>
#include <iterator>
#include <utility>
#include <climits>
#include <queue>
#include <vector>

Graph::Graph(int N) {
    adjList.resize(N);
}

void Graph::addEdge(int start, int end, int weight) {
    adjList[start].push_back(std::make_pair(end, weight));
}

void Graph::printAdjList() {
    int i = 0;
    for (auto row : adjList) {
        std::cout << i << ": ";
        for (auto v : row) {
            std::cout << v.first << ", " << v.second << "; ";
        }
        std::cout << std::endl;
        ++i;
    }
}

void Graph::shortestPath(int start) {
    std::priority_queue<Pii, Vii, std::greater<Pii>> Q;
    int distance[adjList.size()], previous[adjList.size()];

    for (int i = 0; i < adjList.size(); i++) {
        distance[i] = INT_MAX;
        previous[i] = INT_MIN;
    }

    distance[start] = 0;
    previous[start] = start;
    for (int i = 0; i < adjList.size(); i++) {
        Q.push(std::make_pair(distance[i], i));
    }

    while (!Q.empty()) {
        int u = Q.top().second;
        Q.pop();

        for (int i = 0; i < adjList[u].size(); i++) {
            int v = adjList[u][i].first;
            int weight = adjList[u][i].second;

            int totalDist = distance[u] + weight;
            if (distance[v] > totalDist) {
                distance[v] = totalDist;
                previous[v] = u;
                Q.push(std::make_pair(distance[v], v));
            }
        }
    }

    for (int i = 0; i < adjList.size(); i++) {
        std::cout << i << ": " 
            << distance[i] << ", " 
            << previous[i] << std::endl;
    }
}
