/*
 * BaseEmployee.cpp
 *
 *  Created on: Nov 6, 2018
 *      Author: ruoranwang
 */

#include "BaseEmployee.h"

#include <string>
using namespace std;
namespace edu {
namespace neu {
namespace csye6205 {
BaseEmployee::BaseEmployee() {
  // TODO Auto-generated constructor stub

}

BaseEmployee::BaseEmployee(int id, string FirstName , string LastName , int  Age , double wage) : BasePerson(FirstName, LastName, Age), ID(id), Wage(wage) {
}

BaseEmployee::~BaseEmployee() {
  // TODO Auto-generated destructor stub
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
