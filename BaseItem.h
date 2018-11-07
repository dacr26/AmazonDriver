/*
 * BaseItem.h
 *
 *  Created on: Nov 6, 2018
 *      Author: ruoranwang
 */

#ifndef BASEITEM_H_
#define BASEITEM_H_
#include "AbstractItemAPI.h"
#include <string>

using namespace std;
namespace edu {
namespace neu {
namespace csye6205 {

class BaseItem : AbstractItemAPI {
private:
  int ID;
  string Name;
  double Price;
public:
  BaseItem();
  BaseItem(int ID, string Name, double Price);
  virtual ~BaseItem();
};
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* BASEITEM_H_ */
