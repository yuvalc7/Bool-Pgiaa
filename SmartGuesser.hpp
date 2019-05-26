#pragma one
#include "Guesser.hpp"
#include <iostream>
#include<set>
#include<iterator>

namespace bullpgia{

using namespace std;

class SmartGusser:public bullpgia::Gusser{

public:
set <string> all_option;
string current_ans;

virtual string guess()override;
void learn(string _ans)override;
void start_new_game(uint l)override;

private:
    string fix_s(string s , uint length);
    void set_build(uint length);
};
}


