//
//  main.cpp
//  дз 5
//
//  Created by Егор Джемлиханов on 20.09.2024.
//

#include<iostream>
#include"Vector.hpp"
using namespace std;

int main()
{
    srand(time(0));
    Vector obj1(5);
    obj1.VhodnoiRand();
    obj1.Print();

    obj1.PushNazad(50);
    obj1.Print();

    obj1.PushNazad(100);
    obj1.Print();

    int last = obj1.PopNazad();
    obj1.Print();
    cout << "последний = " << last << endl;

    last = obj1.PopNazad();
    obj1.Print();
    cout << "последний = " << last << endl;

    obj1.PushStart(50);
    obj1.Print();

    obj1.PushStart(100);
    obj1.Print();

    int first = obj1.PopStart();
    obj1.Print();
    cout << "первый = " << first << endl;

    first = obj1.PopStart();
    obj1.Print();
    cout << "первый = " << first << endl;

    int indx, val;
    cout << "напишите индекс для вставки значения: ";
    cin >> indx;
    cout << "напишите значение для вставки по индексу: ";
    cin >> val;

    obj1.PushAtIndex(indx, val);
    obj1.Print();

    int index;
    cout << "напишите индекс для удаления: ";
    cin >> index;

    int removed = obj1.PopAtIndex(index);
    if (removed != -1)
    {
        cout << "удалённый элемент: " << removed << endl;
    }
    else
    {
        cout << "неправильный индекс!" << endl;
    }
    obj1.Print();

    int newG;
    cout << "напишите размер нового массива: ";
    cin >> newG;

    int* newArr = new int[newG];
    cout << "напишите " << newG << " элементы для нового массива: ";
    for (int i = 0; i < newG; i++)
    {
        cin >> newArr[i];
    }

    obj1.PushArr(newArr, newG);
    obj1.Print();

    delete[] newArr;

    return 0;
}
