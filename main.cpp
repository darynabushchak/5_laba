#include <iostream>
#include"room.h"
using namespace std;


int main()
{

    ItemsInRoom bed(200, "Bed");
    ItemsInRoom sofa(300, "Sofa");
    ItemsInRoom carpet(500, "Carpet");
    Room room_of_furniture;

    room_of_furniture.ItemAdd(bed);
    room_of_furniture.ItemAdd(sofa);
    room_of_furniture.ItemAdd(carpet);

    room_of_furniture.Show_Items();
}
