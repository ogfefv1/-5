//
//  Vector.cpp
//  дз 5
//
//  Created by Егор Джемлиханов on 20.09.2024.
//

#include "Vector.hpp"
#include<iostream>
using namespace std;

Vector::Vector()
{
    arr = nullptr;
    size = 0;
}

Vector::Vector(int g)
{
    size = g;
    arr = new int[size] {0};
}

Vector::~Vector()
{
    delete[] arr;
    size = 0;
}

void Vector::VhodnoiRand()
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = rand() % 41 - 20;
    }
}

void Vector::Print()
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "\t";
    }
    cout << "\n---------------------------------------------------\n";
}

void Vector::PushNazad(int x)
{
    int* temp = new int[size + 1];

    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }
    temp[size] = x;

    delete[] arr;
    arr = temp;
    size++;
}

int Vector::PopNazad()
{
    if (size == 0)
        return -1;

    int* temp = new int[size - 1];

    for (int i = 0; i < size - 1; i++)
    {
        temp[i] = arr[i];
    }

    int el = arr[size - 1];

    delete[] arr;
    arr = temp;
    size--;

    return el;
}

void Vector::PushStart(int y)
{
    int* temp = new int[size + 1];

    for (int i = 0; i < size; i++)
    {
        temp[i + 1] = arr[i];
    }

    temp[0] = y;

    delete[] arr;
    arr = temp;
    size++;
}

void Vector::PushAtIndex(int index, int z)
{
    if (index < 0 || index > size)
        return;

    int* temp = new int[size + 1];

    for (int i = 0; i < index; i++)
    {
        temp[i] = arr[i];
    }

    temp[index] = z;

    for (int i = index; i < size; i++)
    {
        temp[i + 1] = arr[i];
    }

    delete[] arr;
    arr = temp;
    size++;
}

int Vector::PopStart()
{
    if (size == 0)
        return -1;

    int* temp = new int[size - 1];

    for (int i = 1; i < size; i++)
    {
        temp[i - 1] = arr[i];
    }

    int el = arr[0];

    delete[] arr;
    arr = temp;
    size--;

    return el;
}

int Vector::PopAtIndex(int index)
{
    if (index < 0 || index >= size)
        return -1;

    int* temp = new int[size - 1];

    for (int i = 0; i < index; i++)
    {
        temp[i] = arr[i];
    }

    int el = arr[index];

    for (int i = index + 1; i < size; i++)
    {
        temp[i - 1] = arr[i];
    }

    delete[] arr;
    arr = temp;
    size--;

    return el;
}

void Vector::PushArr(int* newArr, int newG)
{
    int* temp = new int[size + newG];

    for (int i = 0; i < size; i++)
    {
        temp[i] = arr[i];
    }

    for (int i = 0; i < newG; i++)
    {
        temp[size + i] = newArr[i];
    }

    delete[] arr;
    arr = temp;
    size += newG;
}
