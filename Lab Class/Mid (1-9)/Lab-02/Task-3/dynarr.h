#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
class dynArr
{
private:
    int **data;
    int size;

public:
    dynArr();
    dynArr(int,int);
    ~dynArr();
    void setValue(int, int,int);
    int getValue(int,int);
    void allocate(int,int);
};
#endif // DYNARR_H_INCLUDED