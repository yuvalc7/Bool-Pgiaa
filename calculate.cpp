#pragma one
#include "calculate.hpp"
#include <iostream>
#include<string>
using namespace std;

 string Calculate_Bull_Pgia(string choice , string guess){
 int bull = 0 , pgia = 0; char dig[10] = {0};

 for(int i = 0 ; i < guess.length() ; i++){
    if(choice.at(i) == guess.at(i)){bull++;}
    else {
        if(dig[choice.at(i) - '0']--> 0){pgia++;}
        if(dig[guess.at(i) - '0']++ < 0){pgia++;}
    }
 }
 return to_string(bull) + " , " + to_string(pgia);

 }
