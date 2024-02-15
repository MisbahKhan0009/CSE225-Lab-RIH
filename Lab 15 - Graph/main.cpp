#include <iostream>
#include "graphtype.cpp"
using namespace std;

// void Print(bool b)
// {
//     if (b)
//         cout << "There is an edge." << endl;
//     else
//         cout << "There is no edge." << endl;
// }

int main()
{

    GraphType<string> g;

    g.AddVertex("Susan");
    g.AddVertex("Darlene");
    g.AddVertex("Mike");
    g.AddVertex("Fred");
    g.AddVertex("John");
    g.AddVertex("Sander");
    g.AddVertex("Lance");
    g.AddVertex("Jean");
    g.AddVertex("Brent");
    g.AddVertex("Fran");

    g.AddEdge("Susan", "Darlene", 1);
    g.AddEdge("Fred", "Brent", 1);
    g.AddEdge("Sander", "Susan", 1);
    g.AddEdge("Lance", "Fran", 1);
    g.AddEdge("Sander", "Fran", 1);
    g.AddEdge("Fran", "John", 1);
    g.AddEdge("Lance", "Jean", 1);
    g.AddEdge("Jean", "Susan", 1);
    g.AddEdge("Mike", "Darlene", 1);
    g.AddEdge("Brent", "Lance", 1);
    g.AddEdge("Susan", "John", 1);

    // cout << g.OutDegree("D") << endl;

    // Print(g.FoundEdge("A", "D"));
    // Print(g.FoundEdge("B", "D"));

    g.DepthFirstSearch("Susan", "Lance");
    // g.DepthFirstSearch("E", "B");

    g.BreadthFirstSearch("Susan", "Lance");
    // g.BreadthFirstSearch("E", "B");

    // g.BreadthFirstSearch("B", "E");
    return 0;
}
