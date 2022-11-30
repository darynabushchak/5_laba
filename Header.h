#pragma once
#include <iostream>

using namespace std;

class ItemsInRoom
{
public:
    int numberOfSomething;
    string name;
    ItemsInRoom() {}
    ItemsInRoom(int value, string name_)
    {
        numberOfSomething = value;
        name = name_;
    }

    void Print()
    {
        cout << "Name: " << name << "    Number: " << numberOfSomething << endl;
    }
};

class Room
{
public:
    int numberArr = 0;
    ItemsInRoom arr[99];

    void ItemAdd(ItemsInRoom Item)
    {
        arr[numberArr] = Item;
        numberArr++;
    }

    void Show_Items()
    {
        for (int i = 0; i < numberArr; i++)
        {
            arr[i].Print();
        }
    }
};