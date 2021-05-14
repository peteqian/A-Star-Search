#ifndef ASS3REFACTOR_H
#define ASS3REFACTOR_H

#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

/*
// Prototype functions
int astar();
void makeheap(int *heap, int heapSize);
void siftUp(int *heap, int i);
void siftDown (int *heap, int heapSize, int i);
*/
struct vertex {
    double xCoordinate, yCoordinate;
    double length;
    int previous;
    double heuristic;
};

/*
vertex *vertices;

double **edgeWeight;

int *candidate;

int nVertices;

int startVertex, goalVertex;
*/

class Simulation{
    private:
        ifstream fin;
        vertex *vertices;
        double **edgeWeight;
        int *candidate;
        int nVertices;
        int startVertex, goalVertex;
        string fileName = "";
        int id, nEdges;
        int id_tracker = 0;

        // Report shortest Path information
        int *path;
        int nPathVertices;
        
        // For second shortest path
        int nPathEdges;
        double bestLength;
        double savedWeight;
        int from, to;
        int nPath2Vertices;
        int *path2;

    public:
        Simulation(){}
        int openFile(const char* fileName);
        int readFile();
        int run();
        int astar();
        void makeheap(int *heap, int heapSize);
        void siftUp(int *heap, int i);
        void siftDown (int *heap, int heapSize, int i);

        
};

#endif