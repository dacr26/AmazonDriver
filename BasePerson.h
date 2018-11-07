/*
 * BasePerson.h
 *
 *  Created on: Nov 6, 2018
 *      Author: ruoranwang
 */
#include <iostream>
#ifndef BASEPERSON_H_
#define BASEPERSON_H_
#include <string>
#include "AbstractPersonAPI.h"
using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {

class BasePerson: AbstractPersonAPI {
private:
  string FirstName = "";
  string LastName = "";
  int  Age = 1;
public:
  BasePerson();
  BasePerson(string a , string b , int c);
  virtual ~BasePerson();
};
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* BASEPERSON_H_ */
