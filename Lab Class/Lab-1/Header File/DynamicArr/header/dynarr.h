class dynArr
{
    private:
    int *data;
    int size;
    public:
    dynArr();
    dynArr(int);
    ~dynArr();
    void setValue(int, int);
    int gatValue(int); 
};