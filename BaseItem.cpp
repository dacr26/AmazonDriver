/*
 * BaseItem.cpp
 *
 *  Created on: Nov 6, 2018
 *      Author: ruoranwang
 */

#include "BaseItem.h"

using namespace std;
// namespace edu {
// namespace neu {
// namespace csye6205 {

BaseItem::BaseItem() {
  // TODO Auto-generated constructor stub

}
BaseItem::BaseItem(int id, string name, double price) {
  ID = id;
  Name = name;
  Price = price;

}
BaseItem::~BaseItem() {
  // TODO Auto-generated destructor stub
}

void BaseItem::setName(const std::string s){
  Name = s;
}

const std::string BaseItem::getName() const{
  return Name;
}

void BaseItem::setPrice(const double p){
  Price = p;
}

const double BaseItem::getPrice() const{
  return Price;
}

const std::string BaseItem::info() const{
  cout<<"Peerra"<<endl;
}

void BaseItem::show() const{
  cout<<"Hi perra"<<std::endl;
}
// } /* namespace csye6205 */
// } /* namespace neu */
// } /* namespace edu */
