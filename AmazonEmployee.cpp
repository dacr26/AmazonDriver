/*
 * AmazonEmployee.cpp
 *
 *  Created on: Nov 6, 2018
 *      Author: ruoranwang
 */

#include "AmazonEmployee.h"
#include <string>
using namespace std;
#include "BaseEmployee.h"

namespace edu {
  namespace neu {
    namespace csye6205 {

      AmazonEmployee::AmazonEmployee() {
        // TODO Auto-generated constructor stub

      }
      AmazonEmployee::AmazonEmployee(int ID, string FirstName , string LastName , int  Age , double Wage): BaseEmployee(ID, FirstName, LastName, Age, Wage) {

      }

      AmazonEmployee::~AmazonEmployee() {
        // TODO Auto-generated destructor stub
      }
      bool AmazonEmployee::sortByWage(AmazonEmployee *i1, AmazonEmployee *i2) {
        return i1->getWage() > i2-> getWage();
      }
      double AmazonEmployee::getWage() {
        return Wage;
      }

    } /* namespace csye6205 */
  } /* namespace neu */
} /* namespace edu */
