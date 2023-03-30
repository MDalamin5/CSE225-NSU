#include "box.h"

Box::Box (int length, int h, int w)
{
    this->length = length;
    height = h;
    width = w;
}

int Box::getVolume()
{
    return length*width*height;
}
