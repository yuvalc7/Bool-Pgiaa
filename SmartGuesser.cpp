#include <iostream>
#include "SmartGuesser.hpp"
#include<cmath>

using namespace std;
 namespace bullpgia{

void SmartGusser::start_new_game(unsigned int l){
set_build(l);
}

void SmartGusser::set_build(unsigned int length){
int max_option = pow(10,length);
for(int i = 0 ; i < max_option ; i++){
    string ans = fix_s(to_string(i),length);
    all_option.insert(ans);
}
}
  string SmartGusser::fix_s(string s , uint length){
  while(s.length() != length ){
    s = '0'+s
  }
  return s;
  }

  string SmartGusser::guess(){
      int random = rand()% all_option.size();
      auto it = all_option.begin();//point to the first cell of the set
      advance(it,random);// advance the location of it--> set(random)
      current_ans = *it;// the value in set(random)
      return current_ans;
  }
  void learn(string _ans){//this function gets string of result --> [bull , pgia] and reduces the number of option in the set
  auto it = all_option.begin();
  while(it < all_option.end()){
    string ans = Calculate_Bull_Pgia(current_ans,*it);
    if(ans != _ans){all_option.erase(it);}
    it++;
  }


  }


 }
