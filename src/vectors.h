#ifndef VECTORS_H
#define VECTORS_H

////////////////////////////////////////////////////////////

using namespace std;

#include <iostream>
#include <vector>

////////////////////////////////////////////////////////////

template<typename T>
void printVector3d(const vector<vector<vector<T>>> &vector3d);

template<typename T>
void printVector2d(const vector<vector<T>> &vector2d);

template<typename T>
void printVector1d(const vector<T> &vector1d);

////////////////////////////////////////////////////////////

void testPrinting3d();

void testPrinting2d();

void testPrinting1d();

////////////////////////////////////////////////////////////

#endif // VECTORS_H
