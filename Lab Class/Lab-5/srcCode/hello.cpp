#include<bits/stdc++.h>
using namespace std;
class StudentInfo
{
    public:
    long long int id;
    string name;
    double cgpa;
    
    
    StudentInfo(long long int id, string name, double cgpa)
    {
        this->id=id;
        this->name=name;
        this->cgpa=cgpa;
    }
};
int main()
{
    StudentInfo si1( 15234, "Jon",2.6);
    StudentInfo si2( 13732, "Tyrion",3.9);
    StudentInfo si3( 13569, "Sandor",2.8);
    StudentInfo si4( 15467, "Jon",2.6);
    StudentInfo si5( 16285, "Arya",3.6);

    



}