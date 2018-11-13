/*
 * BaseItem.cpp
 *
 *  Created on: Nov 6, 2018
 *      Author: ruoranwang
 */

#include "BaseItem.h"
#include "AbstractItemAPI.h"
namespace edu {
namespace neu {
namespace csye6205 {

BaseItem::BaseItem() {
  // TODO Auto-generated constructor stub

}
BaseItem::BaseItem(int id, string name, double price){
	ID=id;
	Name=name;
	Price=price;

}
BaseItem::~BaseItem() {
  // TODO Auto-generated destructor stub
}

} /* namespace csye6205 */
} /* namespace neu */
} /* namespace edu */
