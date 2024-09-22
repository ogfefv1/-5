//
//  Vector.hpp
//  дз 5
//
//  Created by Егор Джемлиханов on 20.09.2024.
//



#pragma once
class Vector
{
    int* arr;
    int size;
public:
    Vector();
    ~Vector();


    Vector(int g);
    void VhodnoiRand();
    void Print();

    void PushNazad(int x);
    int PopNazad();


    void PushStart(int y);
    void PushAtIndex(int index, int z);


    int PopStart();
    int PopAtIndex(int index);

    void PushArr(int* newArr, int newG);
};






