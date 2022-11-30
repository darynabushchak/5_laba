#include <iostream>

using namespace std;
#include"Header.h"

int main()
{

    ItemsInRoom b(200, "Bed");
    ItemsInRoom c(300, "Sofa");
    ItemsInRoom d(500, "Carpet");
    Room a;

    a.ItemAdd(b);
    a.ItemAdd(c);
    a.ItemAdd(d);

    a.Show_Items();
}