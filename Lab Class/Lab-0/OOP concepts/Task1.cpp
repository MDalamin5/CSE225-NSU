#include<bits/stdc++.h>
using namespace std;

class Box
{
    public:
    int height;
    int width;
    int depth;

    Box(int height, int width,int depth)
    {
        this->height=height;
        this->width=width;
        this->depth=depth;
    }
    void getVolume()
    {
        cout<<height*width*depth;
    }
};
int main()
{
    Box ob(2,3,4);
    ob.getVolume();
}