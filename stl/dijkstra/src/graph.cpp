#include "../include/graph.hpp"
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

    distance.resize(adjList.size());
    std::fill(distance.begin(), distance.end(), INT_MAX);

    previous.resize(adjList.size());
    std::fill(previous.begin(), previous.end(), INT_MIN);

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
}

int Graph::getSize() {
    return adjList.size();
}

std::vector<int> Graph::getDistance() {
    return distance;
}

int Graph::getDistance(int node) {
    if (node >= distance.size())
        return INT_MAX;
    return distance[node];
}

std::vector<int> Graph::getPrevious() {
    return previous;
}

int Graph::getPrevious(int node) {
    if (node >= previous.size())
        return INT_MAX;
    return previous[node];
}