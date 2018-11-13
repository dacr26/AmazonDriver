/*
 * IPhoneItem.h
 *
 *  Created on: Nov 6, 2018
 *      Author: ruoranwang
 */

#ifndef IPHONEITEM_H_
#define IPHONEITEM_H_
#include "BaseItem.h"
namespace edu {
namespace neu {
namespace csye6205 {

class IPhoneItem: public BaseItem {
public:
  IPhoneItem();
  IPhoneItem(int ID, string Name, double Price)
  {}
  virtual ~IPhoneItem();

  void setName(const string);
  const string getName() const;
  void setPrice(const double);
  const double getPrice() const;
  const string info() const;
  void show() const;
private:

};

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */

#endif /* IPHONEITEM_H_ */
