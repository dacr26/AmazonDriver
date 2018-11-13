/*
 * AmazonEmployee.h
 *
 *  Created on: Nov 6, 2018
 *      Author: ruoranwang
 */

#ifndef AMAZONEMPLOYEE_H_
#define AMAZONEMPLOYEE_H_
#include <string>

#include "BaseEmployee.h"
using namespace std;
namespace edu {
namespace neu {
namespace csye6205 {

class AmazonEmployee: public BaseEmployee {

public:
  AmazonEmployee();
  AmazonEmployee(int ID, string FirstName , string LastName , int  Age , double Wage);
  virtual ~AmazonEmployee();
  bool sortByWage(AmazonEmployee *i1, AmazonEmployee *i2);
  double getWage();

};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* AMAZONEMPLOYEE_H_ */
