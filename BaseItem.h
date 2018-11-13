/*
 * BaseItem.h
 *
 *  Created on: Nov 6, 2018
 *      Author: ruoranwang
 */

#ifndef BASEITEM_H_
#define BASEITEM_H_

#include "AbstractItemAPI.h"

// namespace edu {
//   namespace neu {
//     namespace csye6205 {

class BaseItem : AbstractItemAPI {
protected:
  int ID;
  std::string Name;
  double Price;
public:
  BaseItem();
  BaseItem(int id, std::string name, double price);
  virtual ~BaseItem();
  void setName(const std::string);
  const std::string getName() const;
  void setPrice(const double);
  const double getPrice() const;
  const std::string info() const;
  void show() const;
};
//     } /* namespace csye6205 */
//   } /* namespace neu */
// } /* namespace edu */

#endif /* BASEITEM_H_ */
