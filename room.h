#include <iostream>
using namespace std;

class ItemsInRoom
{
public:
    int number_of_items;
    string furniture_name;
    ItemsInRoom() {}
    ItemsInRoom(int valueitems, string furniture_name_)
    {
        number_of_items = valueitems;
        furniture_name = furniture_name_;
    }

    void Print()
    {
        cout << "Name: " << furniture_name << "    Number: " << number_of_items << endl;
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

    void ShowItems()
    {
        for (int i = 0; i < numberArr; i++)
        {
            arr[i].Print();
        }
    }
};
