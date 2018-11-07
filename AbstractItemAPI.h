/*
 * AbstractItem.h
 *
 *  Created on: Oct 30, 2017
 *      Author: danielgmp
 */

#ifndef ABSTRACTITEMAPI_H_
#define ABSTRACTITEMAPI_H_

#include<string>

using namespace std;

namespace edu {
namespace neu {
namespace csye6205 {

class AbstractItemAPI {
public:
  AbstractItemAPI();
  virtual ~AbstractItemAPI();

  virtual void setName(const string) = 0;
  virtual const string getName() const = 0;
  virtual void setPrice(const double) = 0;
  virtual const double getPrice() const = 0;
  virtual const string info() const = 0;
  virtual void show() const = 0;
};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* ABSTRACTITEMAPI_H_ */
