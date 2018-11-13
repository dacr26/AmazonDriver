/*
 * BaseEmployee.h
 *
 *  Created on: Nov 6, 2018
 *      Author: ruoranwang
 */

#ifndef BASEEMPLOYEE_H_
#define BASEEMPLOYEE_H_
#include "BasePerson.h"
#include <string>
using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {
class BaseEmployee: public BasePerson {
protected:
  int ID;
  double Wage;
public:
  BaseEmployee();
  BaseEmployee(int ID, string FirstName , string LastName , int  Age , double Wage);
  int getId() const;
  void setId(int id);
  double getWage() const;
  void getWage(double wage);
  virtual ~BaseEmployee();
};
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
#endif /* BASEEMPLOYEE_H_ */
