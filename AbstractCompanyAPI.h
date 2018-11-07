/*
 * AbstractCompany.h
 *
 *  Created on: Oct 30, 2017
 *      Author: danielgmp
 */

#ifndef ABSTRACTCOMPANYAPI_H_
#define ABSTRACTCOMPANYAPI_H_

#include <vector>
#include <string>

using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {

class AbstractCompanyAPI {
public:
  AbstractCompanyAPI();
  virtual ~AbstractCompanyAPI();

  virtual void loadEmployees(vector<string> csvData) = 0;
  virtual void scaleEmployees(double offset, double scale) = 0;
  virtual void sortEmployees() = 0;
  virtual void showEmployees() = 0;
  virtual void loadItems(vector<string> csvData) = 0;
  virtual void scaleItems(double offset, double scale) = 0;
  virtual void sortItems() = 0;
  virtual void showItems() = 0;

};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* ABSTRACTCOMPANYAPI_H_ */
