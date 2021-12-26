#include <iostream>

using namespace std;

// We make gobal variable and local variable with same name.
// but priority take local variable

int glo = 6; // global variable
void sum()
{
   // int a;
    cout<<glo<<"\n";
}
int main()
{
    int glo=9;  // local variable
    glo=78;
   int a=14,b=20;
   sum();
   cout<<glo;

    return 0;
}
