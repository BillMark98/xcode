#include <iostream>
#include <new>
#include <cstring>
#include <cstdlib>
using namespace std;
typedef struct chaff
{
    char dorss[20];
    int slag;
}chaff;
const int BUF = 512;

char buff[BUF];
int main()
{
    chaff *p1 = new (buff) chaff[2];
    char * p2 = new char[100];
    chaff * p3 = new (p2) chaff[2];
    int index;
    for(index = 0; index < 2; index++)
    {
        strcpy(p1[index].dorss,"p1,hi");
        sprintf(p1[index].dorss+5, "%d",index);
        p1[index].slag = index;

        strcpy(p3[index].dorss,"p3,hi");
        sprintf(p3[index].dorss+5,"%d",index);
        p3[index].slag = index;

    }
    for(index = 0; index < 2; index++)
    {
        cout << p1[index].dorss << endl;
        cout << p3[index].dorss << endl;
    }
    delete [] p2;
    // delete [] p3;
    return 0;
}