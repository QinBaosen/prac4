#include <iostream>
#include "meerkat.h"
using namespace std;
meerkat::meerkat(){

}
string meerkat::getName(){
    return name;
}
void meerkat::setName(string meerName){
    name = meerName;
}


void meerkat::setAge(int meerAge)
{
    age = meerAge;
}
int meerkat::getAge()
{
    return age;
}


meerkat::~meerkat()
{
}
