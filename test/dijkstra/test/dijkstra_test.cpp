#include "../include/graph.hpp"
#include <gtest/gtest.h>

struct dijkstra_test
    : public ::testing::Test
{
    Graph *graph;

    virtual void SetUp() override {
        graph = new Graph(5);

        graph -> addEdge(0, 1, 3);
        graph -> addEdge(0, 3, 3);
        graph -> addEdge(1, 2, 1);
        graph -> addEdge(1, 3, 6);
        graph -> addEdge(2, 3, 5);
        graph -> addEdge(2, 4, 1);
        graph -> addEdge(3, 4, 3);
        graph -> addEdge(4, 0, 2);
    }

    virtual void TearDown() override {
        delete graph;
    }
};


TEST_F(dijkstra_test, graph_n0) {
    int node = 0;
    graph -> shortestPath(0);

    // calculated using https://graphonline.ru/en/
    int d[5] = {0, 3, 4, 3, 5};
    int p[5] = {0, 0, 1, 0, 2};

    for (int i = 0; i < graph -> getSize(); i++) {
        EXPECT_EQ(d[i], graph -> getDistance(i)) << "\ti = " << i;
        EXPECT_EQ(p[i], graph -> getPrevious(i)) << "\ti = " << i;
    }
}

TEST_F(dijkstra_test, graph_n3) {
    int node = 3;
    graph -> shortestPath(node);

    // calculated using https://graphonline.ru/en/
    int d[5] = {5, 8, 9, 0, 3};
    int p[5] = {4, 0, 1, 3, 3};

    for (int i = 0; i < graph -> getSize(); i++) {
        EXPECT_EQ(d[i], graph -> getDistance(i)) << "\t\ti = " << i;
        EXPECT_EQ(p[i], graph -> getPrevious(i)) << "\t\ti = " << i;
    }
}