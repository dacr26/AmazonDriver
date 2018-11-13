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

class BasePerson: public AbstractPersonAPI {
protected:
  string FirstName ;
  string LastName ;
  int  Age ;
public:
  BasePerson();
  BasePerson(string a , string b , int c);
  virtual ~BasePerson();
  const string info() const;		// pure virtual method: not implemented, must be derived
  void show() const;
};
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* BASEPERSON_H_ */
