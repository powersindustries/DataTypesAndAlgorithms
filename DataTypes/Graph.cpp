#include "Graph.h"


// ----------------------------------------------------------------
// ----------------------------------------------------------------
Graph::Graph()
{
}


// ----------------------------------------------------------------
// ----------------------------------------------------------------
void Graph::AddEdge(std::vector<int> edges[], int source, int destination)
{
    edges[source].push_back(destination);
}


// ----------------------------------------------------------------
// ----------------------------------------------------------------
void Graph::PrintGraph(std::vector<int> edges[], int vertices)
{
    for (int x = 0; x < vertices; ++x)
    {
        std::cout << "\n Adjacency list of vertex: " << x;

        for (auto y : edges[x])
        {
            std::cout << "-> " << y << std::endl;
        }
    }
}