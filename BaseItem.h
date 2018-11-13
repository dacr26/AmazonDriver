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
protected:
  int ID;
  string Name;
  double Price;
public:
  BaseItem();
  BaseItem(int id, string name, double price);
  virtual ~BaseItem();
  void setName(const string);
  const string getName() const;
  void setPrice(const double);
  const double getPrice() const;
  const string info() const;
  void show() const;
};
} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* BASEITEM_H_ */
