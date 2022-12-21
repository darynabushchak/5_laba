#include <iostream>
#include"room.h"
using namespace std;


int main()
{

    ItemsInRoom bed(200, "Bed");
    ItemsInRoom sofa(300, "Sofa");
    ItemsInRoom carpet(500, "Carpet");
    Room a;

    a.ItemAdd(bed);
    a.ItemAdd(sofa);
    a.ItemAdd(carpet);

    a.Show_Items();
}
