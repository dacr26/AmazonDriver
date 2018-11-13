/*
 * MacBookItem.h
 *
 *  Created on: Nov 6, 2018
 *      Author: ruoranwang
 */

#ifndef MACBOOKITEM_H_
#define MACBOOKITEM_H_

#include "BaseItem.h"

namespace edu {
namespace neu {
namespace csye6205 {

class MacBookItem: public BaseItem {
public:
  MacBookItem();
  virtual ~MacBookItem();
  MacBookItem(int ID, string Name, double Price)
    {}
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

#endif /* MACBOOKITEM_H_ */
