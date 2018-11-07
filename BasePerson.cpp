/*
 * BasePerson.cpp
 *
 *  Created on: Nov 6, 2018
 *      Author: ruoranwang
 */
#include <iostream>
#include "BasePerson.h"
#include "AbstractPersonAPI.h"
#include <string>
using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {
BasePerson::BasePerson() {
  // TODO Auto-generated constructor stub

}
BasePerson::BasePerson(string a , string b , int  c) {
  FirstName = a;
  LastName = b;
  Age = c;

}

BasePerson::~BasePerson() {
  // TODO Auto-generated destructor stub

}

}
}
}
