#ifndef monster_h
#define monster_h
#include <iostream>
#include <string>
using namespace std;

class monster {
private:
    string name;
    int hp, potion;
public:
    void Attack(monster &);
    void heal();
    monster(string n = "Balky", int h = 100, int p = 0);
    ~monster();
};

monster::~monster(){
    cout<<"Bye ja"<<name<<"hp: "<<hp<<endl;
}
monster::monster(string n, int h, int p) {
    name = n;
    h > 200 ? hp = 200 : hp = h;
    p > 10 ? potion = 10 : potion = p;

    cout << "Monster " << name << " mlem" << endl;
}



#endif /* monster_h */