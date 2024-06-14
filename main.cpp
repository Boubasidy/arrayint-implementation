#include <iostream>
#include "arrayint.hh"
using namespace std;

int main()
{
    arrayint tab(-10,10);
    arrayint tab2(tab);
    std::cout<<tab.imax()<<"\n";
    std::cout<<tab.imax()<<"\n";
    cout << "Hello World!" << endl;
    return 0;
}
