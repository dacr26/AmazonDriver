/*
 * IPhoneItem.cpp
 *
 *  Created on: Nov 6, 2018
 *      Author: ruoranwang
 */

#include "IPhoneItem.h"

using namespace std;
// using namespace edu::neu::csye6205;
// namespace edu {
//   namespace neu {
//     namespace csye6205 {

IPhoneItem::IPhoneItem() {
  // TODO Auto-generated constructor stub

}

IPhoneItem::~IPhoneItem() {
  // TODO Auto-generated destructor stub
}

void IPhoneItem::setName(const std::string s){
  Name = s;
}

const std::string IPhoneItem::getName() const{
  return Name;
}

void IPhoneItem::setPrice(const double p){
  Price = p;
}

const double IPhoneItem::getPrice() const{
  return Price;
}

const std::string IPhoneItem::info() const{
  cout<<"Peerra"<<endl;
}

void IPhoneItem::show() const{
  cout<<"Hi perra"<<std::endl;
}
//     } /* namespace csye6205 */
//   } /* namespace neu */
// } /* namespace edu */
