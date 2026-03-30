#include <iostream>
using namespace std;
#include "monster.h"

int main(int argc, const char * argv[]) {
    monster m1("Noppo", 10, 1);
    monster m2("Bonny"); 
    monster m4("Alice", 20, 2); 
    monster *p;
    
    monster x[5] = {
        {"Hakao", 5, 1}, 
        {"Chicken", 10, 20},
        {"Duck", 0, 0},
        {"Goat", 0, 0},
        {"Cow", 0, 0}
    };
    p=new monster("Lulu", 10, 50);
    delete p;//destructor p
    
    return 0;//destructor of x, m4,m2,m1
}