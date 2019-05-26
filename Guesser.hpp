#pragma one
#include <iostream>

namespace bullpgia{

using namespace std;
class Gusser{

unsigned int length;
string ans;

virtual string guess()=0;
virtual void learn(string _ans){ans = _ans;}
virtual void start_new_game(unsigned int l){length = l;}
};
}
